
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dummy; } ;
struct da8xx_ohci_hcd {int usb11_clk; int usb11_phy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct da8xx_ohci_hcd* FUNC_5 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_6(struct usb_hcd *VAR_0)
{
 struct da8xx_ohci_hcd *VAR_1 = FUNC_5(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1->usb11_clk);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_3(VAR_1->usb11_phy);
 if (VAR_2)
  goto err_phy_init;

 VAR_2 = FUNC_4(VAR_1->usb11_phy);
 if (VAR_2)
  goto err_phy_power_on;

 return 0;

err_phy_power_on:
 FUNC_2(VAR_1->usb11_phy);
err_phy_init:
 FUNC_0(VAR_1->usb11_clk);

 return VAR_2;
}
