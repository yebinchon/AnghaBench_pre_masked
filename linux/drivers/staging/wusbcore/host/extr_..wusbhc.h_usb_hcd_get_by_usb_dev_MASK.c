
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dummy; } ;
struct usb_device {int bus; } ;


 struct usb_hcd* FUNC_0 (int ) ;
 struct usb_hcd* FUNC_1 (struct usb_hcd*) ;

__attribute__((used)) static inline
struct usb_hcd *FUNC_2(struct usb_device *VAR_0)
{
 struct usb_hcd *VAR_1;
 VAR_1 = FUNC_0(VAR_0->bus);
 return FUNC_1(VAR_1);
}
