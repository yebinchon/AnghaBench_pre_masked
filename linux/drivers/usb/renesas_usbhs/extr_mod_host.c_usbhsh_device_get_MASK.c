
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhsh_hpriv {int dummy; } ;
struct usbhsh_device {int dummy; } ;
struct usb_device {int dummy; } ;
struct urb {int pipe; } ;


 scalar_t__ FUNC_0 (int ) ;
 struct usbhsh_device* FUNC_1 (struct usbhsh_hpriv*) ;
 struct usb_device* FUNC_2 (struct urb*) ;
 struct usbhsh_device* FUNC_3 (struct usb_device*) ;

__attribute__((used)) static struct usbhsh_device *FUNC_4(struct usbhsh_hpriv *VAR_0,
            struct urb *VAR_1)
{
 struct usb_device *VAR_2 = FUNC_2(VAR_1);
 struct usbhsh_device *VAR_3 = FUNC_3(VAR_2);


 if (!VAR_3)
  return ((void*)0);


 if (0 == FUNC_0(VAR_1->pipe))
  return FUNC_1(VAR_0);


 return VAR_3;
}
