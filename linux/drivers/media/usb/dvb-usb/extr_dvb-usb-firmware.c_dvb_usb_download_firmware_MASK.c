
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dev; } ;
struct firmware {int dummy; } ;
struct dvb_usb_device_properties {int usb_ctrl; int (* download_firmware ) (struct usb_device*,struct firmware const*) ;int firmware; } ;






 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct firmware const*) ;
 int FUNC_3 (struct firmware const**,int ,int *) ;
 int FUNC_4 (struct usb_device*,struct firmware const*) ;
 int FUNC_5 (struct usb_device*,struct firmware const*,int) ;

int FUNC_6(struct usb_device *VAR_1, struct dvb_usb_device_properties *VAR_2)
{
 int VAR_3;
 const struct firmware *VAR_4 = ((void*)0);

 if ((VAR_3 = FUNC_3(&VAR_4, VAR_2->firmware, &VAR_1->dev)) != 0) {
  FUNC_0("did not find the firmware file '%s' (status %d). You can use <kernel_dir>/scripts/get_dvb_firmware to get the firmware",
   VAR_2->firmware,VAR_3);
  return VAR_3;
 }

 FUNC_1("downloading firmware from file '%s'",VAR_2->firmware);

 switch (VAR_2->usb_ctrl) {
  case 131:
  case 130:
  case 129:
   VAR_3 = FUNC_5(VAR_1, VAR_4, VAR_2->usb_ctrl);
   break;
  case 128:
   if (VAR_2->download_firmware)
    VAR_3 = VAR_2->download_firmware(VAR_1,VAR_4);
   else {
    FUNC_0("BUG: driver didn't specified a download_firmware-callback, although it claims to have a DEVICE_SPECIFIC one.");
    VAR_3 = -VAR_0;
   }
   break;
  default:
   VAR_3 = -VAR_0;
   break;
 }

 FUNC_2(VAR_4);
 return VAR_3;
}
