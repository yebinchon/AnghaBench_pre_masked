
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbhsh_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ root_hub; } ;
struct usb_hcd {TYPE_1__ self; } ;
struct usb_device {scalar_t__ parent; } ;


 struct usb_device* FUNC_0 (struct usbhsh_device*) ;

__attribute__((used)) static int FUNC_1(struct usb_hcd *VAR_0,
         struct usbhsh_device *VAR_1)
{
 struct usb_device *VAR_2 = FUNC_0(VAR_1);

 return VAR_0->self.root_hub == VAR_2->parent;
}
