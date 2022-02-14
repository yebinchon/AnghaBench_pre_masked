
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_hcd {TYPE_1__* usb_phy; } ;
struct tegra_ehci_hcd {int clk; int rst; } ;
struct platform_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ priv; } ;
struct TYPE_3__ {int otg; } ;


 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (struct usb_hcd*) ;
 int FUNC_2 (int ,int *) ;
 struct usb_hcd* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct usb_hcd*) ;
 int FUNC_8 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_0)
{
 struct usb_hcd *VAR_1 = FUNC_3(VAR_0);
 struct tegra_ehci_hcd *VAR_2 =
  (struct tegra_ehci_hcd *)FUNC_1(VAR_1)->priv;

 FUNC_2(VAR_1->usb_phy->otg, ((void*)0));

 FUNC_6(VAR_1->usb_phy);
 FUNC_8(VAR_1);

 FUNC_4(VAR_2->rst);
 FUNC_5(1);

 FUNC_0(VAR_2->clk);

 FUNC_7(VAR_1);

 return 0;
}
