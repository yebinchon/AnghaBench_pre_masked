
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun9i_usb_phy {int clk; int hsic_clk; int reset; } ;
struct phy {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct sun9i_usb_phy* FUNC_2 (struct phy*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sun9i_usb_phy*,int) ;

__attribute__((used)) static int FUNC_5(struct phy *VAR_0)
{
 struct sun9i_usb_phy *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1->clk);
 if (VAR_2)
  goto err_clk;

 VAR_2 = FUNC_1(VAR_1->hsic_clk);
 if (VAR_2)
  goto err_hsic_clk;

 VAR_2 = FUNC_3(VAR_1->reset);
 if (VAR_2)
  goto err_reset;

 FUNC_4(VAR_1, 1);
 return 0;

err_reset:
 FUNC_0(VAR_1->hsic_clk);

err_hsic_clk:
 FUNC_0(VAR_1->clk);

err_clk:
 return VAR_2;
}
