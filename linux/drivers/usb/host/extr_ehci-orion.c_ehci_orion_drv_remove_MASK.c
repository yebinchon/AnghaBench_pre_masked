
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dummy; } ;
struct platform_device {int dummy; } ;
struct orion_ehci_hcd {int clk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct orion_ehci_hcd* FUNC_2 (struct usb_hcd*) ;
 struct usb_hcd* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct usb_hcd*) ;
 int FUNC_5 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct usb_hcd *VAR_1 = FUNC_3(VAR_0);
 struct orion_ehci_hcd *VAR_2 = FUNC_2(VAR_1);

 FUNC_5(VAR_1);

 if (!FUNC_0(VAR_2->clk))
  FUNC_1(VAR_2->clk);

 FUNC_4(VAR_1);

 return 0;
}
