
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_meson_gxl_usb3_priv {int regmap; } ;
struct phy {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct phy_meson_gxl_usb3_priv* FUNC_0 (struct phy*) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct phy *VAR_3)
{
 struct phy_meson_gxl_usb3_priv *VAR_4 = FUNC_0(VAR_3);

 FUNC_1(VAR_4->regmap, VAR_0, VAR_1, 0);
 FUNC_1(VAR_4->regmap, VAR_0, VAR_2, 0);

 return 0;
}
