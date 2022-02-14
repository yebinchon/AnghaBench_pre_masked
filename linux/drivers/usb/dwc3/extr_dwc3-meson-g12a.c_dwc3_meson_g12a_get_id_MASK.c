
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dwc3_meson_g12a {int regmap; } ;
typedef enum phy_mode { ____Placeholder_phy_mode } phy_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int*) ;

__attribute__((used)) static enum phy_mode FUNC_1(struct dwc3_meson_g12a *VAR_5)
{
 u32 VAR_6;

 FUNC_0(VAR_5->regmap, VAR_2, &VAR_6);

 if (VAR_6 & (VAR_4 | VAR_3))
  return VAR_0;

 return VAR_1;
}
