
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_meson_gxl_usb2_priv {int mode; int regmap; } ;
struct phy {int dummy; } ;
typedef enum phy_mode { ____Placeholder_phy_mode } phy_mode ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct phy_meson_gxl_usb2_priv* FUNC_0 (struct phy*) ;
 int FUNC_1 (struct phy*) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct phy *VAR_5,
           enum phy_mode VAR_6, int VAR_7)
{
 struct phy_meson_gxl_usb2_priv *VAR_8 = FUNC_0(VAR_5);

 switch (VAR_6) {
 case 129:
 case 128:
  FUNC_2(VAR_8->regmap, VAR_1, VAR_2,
       VAR_2);
  FUNC_2(VAR_8->regmap, VAR_1, VAR_3,
       VAR_3);
  FUNC_2(VAR_8->regmap, VAR_1, VAR_4, 0);
  break;

 case 130:
  FUNC_2(VAR_8->regmap, VAR_1, VAR_2,
       0);
  FUNC_2(VAR_8->regmap, VAR_1, VAR_3,
       0);
  FUNC_2(VAR_8->regmap, VAR_1, VAR_4,
       VAR_4);
  break;

 default:
  return -VAR_0;
 }

 FUNC_1(VAR_5);

 VAR_8->mode = VAR_6;

 return 0;
}
