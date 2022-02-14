
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dummy; } ;
struct st_ehci_platform_priv {int pwr; int rst; scalar_t__* clks; int phy; scalar_t__ clk48; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int) ;
 struct st_ehci_platform_priv* FUNC_3 (struct usb_hcd*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 struct usb_hcd* FUNC_7 (struct platform_device*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_1)
{
 struct usb_hcd *VAR_2 = FUNC_7(VAR_1);
 struct st_ehci_platform_priv *VAR_3 = FUNC_3(VAR_2);
 int VAR_4, VAR_5;

 VAR_5 = FUNC_9(VAR_3->pwr);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_9(VAR_3->rst);
 if (VAR_5)
  goto err_assert_power;



 if (VAR_3->clk48) {
  VAR_5 = FUNC_2(VAR_3->clk48, 48000000);
  if (VAR_5)
   goto err_assert_reset;
 }

 for (VAR_4 = 0; VAR_4 < VAR_0 && VAR_3->clks[VAR_4]; VAR_4++) {
  VAR_5 = FUNC_1(VAR_3->clks[VAR_4]);
  if (VAR_5)
   goto err_disable_clks;
 }

 VAR_5 = FUNC_5(VAR_3->phy);
 if (VAR_5)
  goto err_disable_clks;

 VAR_5 = FUNC_6(VAR_3->phy);
 if (VAR_5)
  goto err_exit_phy;

 return 0;

err_exit_phy:
 FUNC_4(VAR_3->phy);
err_disable_clks:
 while (--VAR_4 >= 0)
  FUNC_0(VAR_3->clks[VAR_4]);
err_assert_reset:
 FUNC_8(VAR_3->rst);
err_assert_power:
 FUNC_8(VAR_3->pwr);

 return VAR_5;
}
