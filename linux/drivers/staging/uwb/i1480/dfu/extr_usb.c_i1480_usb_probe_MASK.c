
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct device {int dummy; } ;
struct usb_interface {int num_altsetting; struct device dev; TYPE_3__* cur_altsetting; } ;
struct usb_device_id {int dummy; } ;
struct TYPE_4__ {int idProduct; } ;
struct usb_device {TYPE_1__ descriptor; } ;
struct i1480 {int buf_size; char* pre_fw_name; char* mac_fw_name; char* mac_fw_name_deprecate; char* phy_fw_name; struct i1480_usb* cmd_buf; int cmd; int wait_init_done; int * rc_setup; int read; int write; struct device* dev; struct i1480_usb* evt_buf; } ;
struct i1480_usb {int usb_dev; struct i1480 i1480; } ;
struct TYPE_5__ {int bNumEndpoints; int bInterfaceNumber; } ;
struct TYPE_6__ {TYPE_2__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,int ) ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (struct i1480*) ;
 int VAR_3 ;
 int FUNC_4 (struct i1480_usb*,struct usb_interface*) ;
 int FUNC_5 (struct i1480_usb*) ;
 int FUNC_6 (struct i1480_usb*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct usb_device* FUNC_7 (struct usb_interface*) ;
 int FUNC_8 (struct i1480_usb*) ;
 struct i1480_usb* FUNC_9 (int,int,int ) ;
 struct i1480_usb* FUNC_10 (int,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct usb_device*,int ,int) ;

__attribute__((used)) static
int FUNC_14(struct usb_interface *VAR_7, const struct usb_device_id *VAR_8)
{
 struct usb_device *VAR_9 = FUNC_7(VAR_7);
 struct i1480_usb *VAR_10;
 struct i1480 *VAR_11;
 struct device *VAR_12 = &VAR_7->dev;
 int VAR_13;

 VAR_13 = -VAR_0;
 if (VAR_7->cur_altsetting->desc.bInterfaceNumber != 0) {
  FUNC_0(VAR_12, "not attaching to iface %d\n",
   VAR_7->cur_altsetting->desc.bInterfaceNumber);
  goto error;
 }
 if (VAR_7->num_altsetting > 1 &&
   FUNC_11(VAR_9->descriptor.idProduct) == 0xbabe) {

  VAR_13 = FUNC_13(FUNC_7(VAR_7), 0, 1);
  if (VAR_13 < 0)
   FUNC_2(VAR_12,
     "can't set altsetting 1 on iface 0: %d\n",
     VAR_13);
 }

 if (VAR_7->cur_altsetting->desc.bNumEndpoints < 1)
  return -VAR_0;

 VAR_13 = -VAR_1;
 VAR_10 = FUNC_10(sizeof(*VAR_10), VAR_2);
 if (VAR_10 == ((void*)0)) {
  FUNC_1(VAR_12, "Unable to allocate instance\n");
  goto error;
 }
 FUNC_6(VAR_10);

 VAR_11 = &VAR_10->i1480;
 VAR_11->buf_size = 512;
 VAR_11->cmd_buf = FUNC_9(2, VAR_11->buf_size, VAR_2);
 if (VAR_11->cmd_buf == ((void*)0)) {
  FUNC_1(VAR_12, "Cannot allocate transfer buffers\n");
  VAR_13 = -VAR_1;
  goto error_buf_alloc;
 }
 VAR_11->evt_buf = VAR_11->cmd_buf + VAR_11->buf_size;

 VAR_13 = FUNC_4(VAR_10, VAR_7);
 if (VAR_13 < 0) {
  FUNC_1(VAR_12, "Cannot create instance: %d\n", VAR_13);
  goto error_create;
 }


 VAR_11->pre_fw_name = "i1480-pre-phy-0.0.bin";
 VAR_11->mac_fw_name = "i1480-usb-0.0.bin";
 VAR_11->mac_fw_name_deprecate = "ptc-0.0.bin";
 VAR_11->phy_fw_name = "i1480-phy-0.0.bin";
 VAR_11->dev = &VAR_7->dev;
 VAR_11->write = VAR_6;
 VAR_11->read = VAR_4;
 VAR_11->rc_setup = ((void*)0);
 VAR_11->wait_init_done = VAR_5;
 VAR_11->cmd = VAR_3;

 VAR_13 = FUNC_3(&VAR_10->i1480);
 if (VAR_13 >= 0) {
  FUNC_12(VAR_10->usb_dev);
  VAR_13 = -VAR_0;
 }
 FUNC_5(VAR_10);
error_create:
 FUNC_8(VAR_11->cmd_buf);
error_buf_alloc:
 FUNC_8(VAR_10);
error:
 return VAR_13;
}
