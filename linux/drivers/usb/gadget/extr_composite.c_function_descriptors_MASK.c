
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_function {struct usb_descriptor_header** fs_descriptors; struct usb_descriptor_header** hs_descriptors; struct usb_descriptor_header** ss_descriptors; struct usb_descriptor_header** ssp_descriptors; } ;
struct usb_descriptor_header {int dummy; } ;
typedef enum usb_device_speed { ____Placeholder_usb_device_speed } usb_device_speed ;






__attribute__((used)) static struct usb_descriptor_header **
FUNC_0(struct usb_function *VAR_0,
       enum usb_device_speed VAR_1)
{
 struct usb_descriptor_header **VAR_2;






 switch (VAR_1) {
 case 128:
  VAR_2 = VAR_0->ssp_descriptors;
  if (VAR_2)
   break;

 case 129:
  VAR_2 = VAR_0->ss_descriptors;
  if (VAR_2)
   break;

 case 130:
  VAR_2 = VAR_0->hs_descriptors;
  if (VAR_2)
   break;

 default:
  VAR_2 = VAR_0->fs_descriptors;
 }






 return VAR_2;
}
