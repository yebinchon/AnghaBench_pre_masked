
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc3_meson_g12a {scalar_t__ otg_phy_mode; int regmap; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct dwc3_meson_g12a *VAR_6)
{
 if (VAR_6->otg_phy_mode == VAR_0) {
  FUNC_0(VAR_6->regmap, VAR_1,
    VAR_2, VAR_2);
  FUNC_0(VAR_6->regmap, VAR_1,
    VAR_3, 0);
  FUNC_0(VAR_6->regmap, VAR_4,
    VAR_5, VAR_5);
 } else {
  FUNC_0(VAR_6->regmap, VAR_1,
    VAR_2, 0);
  FUNC_0(VAR_6->regmap, VAR_4,
    VAR_5, 0);
 }
}
