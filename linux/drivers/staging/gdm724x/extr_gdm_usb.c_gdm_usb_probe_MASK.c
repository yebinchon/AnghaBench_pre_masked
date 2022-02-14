
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct usb_interface {int needs_remote_wakeup; int usb_dev; TYPE_2__* cur_altsetting; } ;
struct usb_device_id {int dummy; } ;
struct TYPE_6__ {int idProduct; int idVendor; } ;
struct usb_device {int dev; TYPE_3__ descriptor; } ;
struct phy_dev {int gdm_ed; struct usb_interface* intf; struct usb_device* usbdev; int get_endian; int rcv_func; int send_sdu_func; int send_hci_func; void* priv_dev; } ;
struct lte_udev {int gdm_ed; struct usb_interface* intf; struct usb_device* usbdev; int get_endian; int rcv_func; int send_sdu_func; int send_hci_func; void* priv_dev; } ;
struct TYPE_4__ {int bInterfaceNumber; } ;
struct TYPE_5__ {TYPE_1__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct phy_dev*) ;
 struct usb_device* FUNC_3 (struct usb_interface*) ;
 int FUNC_4 (struct phy_dev*) ;
 struct phy_dev* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (struct phy_dev*) ;
 int FUNC_9 (struct phy_dev*) ;
 int FUNC_10 (struct phy_dev*) ;
 int FUNC_11 (struct usb_device*) ;
 int FUNC_12 (struct usb_device*) ;
 int FUNC_13 (struct usb_interface*,struct phy_dev*) ;

__attribute__((used)) static int FUNC_14(struct usb_interface *VAR_12,
    const struct usb_device_id *VAR_13)
{
 int VAR_14 = 0;
 struct phy_dev *VAR_15 = ((void*)0);
 struct lte_udev *VAR_16 = ((void*)0);
 u16 VAR_17, VAR_18;
 int VAR_19;
 struct usb_device *VAR_20 = FUNC_3(VAR_12);

 VAR_19 = VAR_12->cur_altsetting->desc.bInterfaceNumber;
 VAR_17 = FUNC_0(VAR_20->descriptor.idVendor);
 VAR_18 = FUNC_0(VAR_20->descriptor.idProduct);

 FUNC_7("net vid = 0x%04x pid = 0x%04x\n", VAR_17, VAR_18);

 if (VAR_19 > VAR_6) {
  FUNC_7("not a network device\n");
  return -VAR_3;
 }

 VAR_15 = FUNC_5(sizeof(*VAR_15), VAR_5);
 if (!VAR_15)
  return -VAR_4;

 VAR_16 = FUNC_5(sizeof(*VAR_16), VAR_5);
 if (!VAR_16) {
  VAR_14 = -VAR_4;
  goto err_udev;
 }

 VAR_15->priv_dev = (void *)VAR_16;
 VAR_15->send_hci_func = VAR_9;
 VAR_15->send_sdu_func = VAR_11;
 VAR_15->rcv_func = VAR_10;
 VAR_15->get_endian = VAR_8;

 VAR_16->usbdev = VAR_20;
 VAR_14 = FUNC_2(VAR_16);
 if (VAR_14 < 0) {
  FUNC_1(VAR_12->usb_dev, "init_usb func failed\n");
  goto err_init_usb;
 }
 VAR_16->intf = VAR_12;

 VAR_12->needs_remote_wakeup = 1;
 FUNC_11(VAR_20);
 FUNC_6(&VAR_20->dev, VAR_0);




 if (VAR_18 == VAR_7)
  VAR_16->gdm_ed = VAR_1;
 else
  VAR_16->gdm_ed = VAR_2;

 VAR_14 = FUNC_9(VAR_16);
 if (VAR_14 < 0) {
  FUNC_1(VAR_12->usb_dev, "request Mac address failed\n");
  goto err_mac_address;
 }

 FUNC_10(VAR_15);
 FUNC_12(VAR_20);
 FUNC_13(VAR_12, VAR_15);

 return 0;

err_mac_address:
 FUNC_8(VAR_16);
err_init_usb:
 FUNC_4(VAR_16);
err_udev:
 FUNC_4(VAR_15);

 return VAR_14;
}
