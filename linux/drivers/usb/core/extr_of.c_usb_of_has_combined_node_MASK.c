
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_device_descriptor {int bDeviceClass; int bNumConfigurations; } ;
struct TYPE_3__ {int of_node; } ;
struct usb_device {TYPE_2__* config; TYPE_1__ dev; struct usb_device_descriptor descriptor; } ;
struct usb_config_descriptor {int bNumInterfaces; } ;
struct TYPE_4__ {struct usb_config_descriptor desc; } ;





bool FUNC_0(struct usb_device *VAR_0)
{
 struct usb_device_descriptor *VAR_1 = &VAR_0->descriptor;
 struct usb_config_descriptor *VAR_2;

 if (!VAR_0->dev.of_node)
  return 0;

 switch (VAR_1->bDeviceClass) {
 case 128:
 case 129:
  if (VAR_1->bNumConfigurations == 1) {
   VAR_2 = &VAR_0->config->desc;
   if (VAR_2->bNumInterfaces == 1)
    return 1;
  }
 }

 return 0;
}
