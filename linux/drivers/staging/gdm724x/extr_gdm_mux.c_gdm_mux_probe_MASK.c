
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct usb_interface {int dev; TYPE_2__* cur_altsetting; } ;
struct usb_device_id {int dummy; } ;
struct TYPE_6__ {int idProduct; int idVendor; } ;
struct usb_device {TYPE_3__ descriptor; } ;
struct tty_dev {int usb_state; struct usb_interface* intf; struct tty_dev* tty_dev; int send_control; int recv_func; int send_func; void* priv_dev; struct usb_interface* control_intf; struct usb_device* usbdev; } ;
struct mux_dev {int usb_state; struct usb_interface* intf; struct mux_dev* tty_dev; int send_control; int recv_func; int send_func; void* priv_dev; struct usb_interface* control_intf; struct usb_device* usbdev; } ;
struct TYPE_4__ {int bInterfaceNumber; } ;
struct TYPE_5__ {TYPE_1__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct tty_dev*) ;
 struct usb_device* FUNC_2 (struct usb_interface*) ;
 int FUNC_3 (struct tty_dev*) ;
 struct tty_dev* FUNC_4 (int,int ) ;
 int FUNC_5 (char*,int ,int ) ;
 int FUNC_6 (struct tty_dev*,int *) ;
 int FUNC_7 (struct tty_dev*) ;
 int FUNC_8 (struct tty_dev*) ;
 int FUNC_9 (struct usb_device*) ;
 int FUNC_10 (struct usb_interface*,struct tty_dev*) ;

__attribute__((used)) static int FUNC_11(struct usb_interface *VAR_8,
    const struct usb_device_id *VAR_9)
{
 struct mux_dev *VAR_10;
 struct tty_dev *VAR_11;
 u16 VAR_12, VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16;
 struct usb_device *VAR_17 = FUNC_2(VAR_8);

 VAR_14 = VAR_8->cur_altsetting->desc.bInterfaceNumber;

 VAR_12 = FUNC_0(VAR_17->descriptor.idVendor);
 VAR_13 = FUNC_0(VAR_17->descriptor.idProduct);

 FUNC_5("mux vid = 0x%04x pid = 0x%04x\n", VAR_12, VAR_13);

 if (VAR_14 != 2)
  return -VAR_0;

 VAR_10 = FUNC_4(sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return -VAR_1;

 VAR_11 = FUNC_4(sizeof(*VAR_11), VAR_2);
 if (!VAR_11) {
  VAR_15 = -VAR_1;
  goto err_free_mux;
 }

 VAR_10->usbdev = VAR_17;
 VAR_10->control_intf = VAR_8;

 VAR_15 = FUNC_1(VAR_10);
 if (VAR_15)
  goto err_free_usb;

 VAR_11->priv_dev = (void *)VAR_10;
 VAR_11->send_func = VAR_6;
 VAR_11->recv_func = VAR_5;
 VAR_11->send_control = VAR_7;

 VAR_15 = FUNC_6(VAR_11, &VAR_8->dev);
 if (VAR_15)
  goto err_unregister_tty;

 for (VAR_16 = 0; VAR_16 < VAR_4; VAR_16++)
  VAR_10->tty_dev = VAR_11;

 VAR_10->intf = VAR_8;
 VAR_10->usb_state = VAR_3;

 FUNC_9(VAR_17);
 FUNC_10(VAR_8, VAR_11);

 return 0;

err_unregister_tty:
 FUNC_8(VAR_11);
err_free_usb:
 FUNC_7(VAR_10);
 FUNC_3(VAR_11);
err_free_mux:
 FUNC_3(VAR_10);

 return VAR_15;
}
