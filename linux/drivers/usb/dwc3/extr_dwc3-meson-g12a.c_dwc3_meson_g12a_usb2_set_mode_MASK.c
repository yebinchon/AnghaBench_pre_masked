
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc3_meson_g12a {int regmap; } ;
typedef enum phy_mode { ____Placeholder_phy_mode } phy_mode ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct dwc3_meson_g12a *VAR_4,
       int VAR_5, enum phy_mode VAR_6)
{
 if (VAR_6 == VAR_0)
  FUNC_0(VAR_4->regmap, VAR_1 + (VAR_3 * VAR_5),
    VAR_2,
    VAR_2);
 else
  FUNC_0(VAR_4->regmap, VAR_1 + (VAR_3 * VAR_5),
    VAR_2, 0);
}
