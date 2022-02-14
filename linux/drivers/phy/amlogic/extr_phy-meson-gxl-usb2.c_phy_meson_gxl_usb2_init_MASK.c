
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_meson_gxl_usb2_priv {int clk; int reset; } ;
struct phy {int dummy; } ;


 int FUNC_0 (int ) ;
 struct phy_meson_gxl_usb2_priv* FUNC_1 (struct phy*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct phy *VAR_0)
{
 struct phy_meson_gxl_usb2_priv *VAR_1 = FUNC_1(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_2(VAR_1->reset);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_0(VAR_1->clk);
 if (VAR_2)
  return VAR_2;

 return 0;
}
