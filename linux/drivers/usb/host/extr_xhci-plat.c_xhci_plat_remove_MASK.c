
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_hcd {struct usb_hcd* shared_hcd; int xhc_state; struct clk* reg_clk; struct clk* clk; } ;
struct usb_hcd {int usb_phy; } ;
struct platform_device {int dev; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct clk*) ;
 struct xhci_hcd* FUNC_1 (struct usb_hcd*) ;
 struct usb_hcd* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct usb_hcd*) ;
 int FUNC_7 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_1)
{
 struct usb_hcd *VAR_2 = FUNC_2(VAR_1);
 struct xhci_hcd *VAR_3 = FUNC_1(VAR_2);
 struct clk *VAR_4 = VAR_3->clk;
 struct clk *VAR_5 = VAR_3->reg_clk;
 struct usb_hcd *VAR_6 = VAR_3->shared_hcd;

 VAR_3->xhc_state |= VAR_0;

 FUNC_7(VAR_6);
 VAR_3->shared_hcd = ((void*)0);
 FUNC_5(VAR_2->usb_phy);

 FUNC_7(VAR_2);
 FUNC_6(VAR_6);

 FUNC_0(VAR_4);
 FUNC_0(VAR_5);
 FUNC_6(VAR_2);

 FUNC_4(&VAR_1->dev);
 FUNC_3(&VAR_1->dev);

 return 0;
}
