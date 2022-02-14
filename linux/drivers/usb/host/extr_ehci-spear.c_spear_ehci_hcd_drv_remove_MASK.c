
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dummy; } ;
struct spear_ehci {scalar_t__ clk; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 struct usb_hcd* FUNC_1 (struct platform_device*) ;
 struct spear_ehci* FUNC_2 (struct usb_hcd*) ;
 int FUNC_3 (struct usb_hcd*) ;
 int FUNC_4 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct usb_hcd *VAR_1 = FUNC_1(VAR_0);
 struct spear_ehci *VAR_2 = FUNC_2(VAR_1);

 FUNC_4(VAR_1);

 if (VAR_2->clk)
  FUNC_0(VAR_2->clk);
 FUNC_3(VAR_1);

 return 0;
}
