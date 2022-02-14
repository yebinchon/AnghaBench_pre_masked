
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_meson_gxl_usb2_priv {int regmap; scalar_t__ is_enabled; } ;
struct phy {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct phy_meson_gxl_usb2_priv* FUNC_0 (struct phy*) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct phy *VAR_2)
{
 struct phy_meson_gxl_usb2_priv *VAR_3 = FUNC_0(VAR_2);

 VAR_3->is_enabled = 0;


 FUNC_1(VAR_3->regmap, VAR_0, VAR_1,
      VAR_1);

 return 0;
}
