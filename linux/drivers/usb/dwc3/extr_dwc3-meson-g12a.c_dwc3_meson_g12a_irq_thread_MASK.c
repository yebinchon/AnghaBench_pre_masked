
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc3_meson_g12a {int otg_phy_mode; int regmap; int dev; } ;
typedef int irqreturn_t ;
typedef enum phy_mode { ____Placeholder_phy_mode } phy_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct dwc3_meson_g12a*) ;
 scalar_t__ FUNC_2 (struct dwc3_meson_g12a*,int) ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_3, void *VAR_4)
{
 struct dwc3_meson_g12a *VAR_5 = VAR_4;
 enum phy_mode VAR_6;

 VAR_6 = FUNC_1(VAR_5);
 if (VAR_6 != VAR_5->otg_phy_mode) {
  if (FUNC_2(VAR_5, VAR_6))
   FUNC_0(VAR_5->dev, "Failed to switch OTG mode\n");
 }

 FUNC_3(VAR_5->regmap, VAR_1, VAR_2, 0);

 return VAR_0;
}
