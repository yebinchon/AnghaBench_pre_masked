
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;
struct pvr2_hdw {struct usb_device* usb_dev; } ;



struct usb_device *FUNC_0(struct pvr2_hdw *VAR_0)
{
 return VAR_0->usb_dev;
}
