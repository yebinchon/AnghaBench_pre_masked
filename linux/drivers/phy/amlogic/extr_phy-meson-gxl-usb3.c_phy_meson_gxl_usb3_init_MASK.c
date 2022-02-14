
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_meson_gxl_usb3_priv {int clk_phy; int clk_peripheral; int regmap; int mode; int reset; } ;
struct phy {int dummy; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct phy_meson_gxl_usb3_priv* FUNC_3 (struct phy*) ;
 int FUNC_4 (struct phy*,int ,int ) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct phy *VAR_2)
{
 struct phy_meson_gxl_usb3_priv *VAR_3 = FUNC_3(VAR_2);
 int VAR_4;

 VAR_4 = FUNC_6(VAR_3->reset);
 if (VAR_4)
  goto err;

 VAR_4 = FUNC_2(VAR_3->clk_phy);
 if (VAR_4)
  goto err;

 VAR_4 = FUNC_2(VAR_3->clk_peripheral);
 if (VAR_4)
  goto err_disable_clk_phy;

 VAR_4 = FUNC_4(VAR_2, VAR_3->mode, 0);
 if (VAR_4)
  goto err_disable_clk_peripheral;

 FUNC_5(VAR_3->regmap, VAR_0,
      VAR_1,
      FUNC_0(VAR_1, 0x20));

 return 0;

err_disable_clk_peripheral:
 FUNC_1(VAR_3->clk_peripheral);
err_disable_clk_phy:
 FUNC_1(VAR_3->clk_phy);
err:
 return VAR_4;
}
