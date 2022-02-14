
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_meson_gxl_usb3_priv {int regmap; } ;
struct phy {int dummy; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct phy_meson_gxl_usb3_priv* FUNC_1 (struct phy*) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct phy *VAR_4)
{
 struct phy_meson_gxl_usb3_priv *VAR_5 = FUNC_1(VAR_4);

 FUNC_2(VAR_5->regmap, VAR_0, VAR_1,
      VAR_1);
 FUNC_2(VAR_5->regmap, VAR_0, VAR_2,
      VAR_2);
 FUNC_2(VAR_5->regmap, VAR_0, VAR_3,
      FUNC_0(VAR_3, 0xff));

 return 0;
}
