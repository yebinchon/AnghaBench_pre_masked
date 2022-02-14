
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_meson_gxl_usb3_priv {int clk_phy; int clk_peripheral; } ;
struct phy {int dummy; } ;


 int FUNC_0 (int ) ;
 struct phy_meson_gxl_usb3_priv* FUNC_1 (struct phy*) ;

__attribute__((used)) static int FUNC_2(struct phy *VAR_0)
{
 struct phy_meson_gxl_usb3_priv *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->clk_peripheral);
 FUNC_0(VAR_1->clk_phy);

 return 0;
}
