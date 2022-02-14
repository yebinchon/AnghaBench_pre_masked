
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct u3phy_banks {scalar_t__ phya; scalar_t__ phyd; scalar_t__ chip; scalar_t__ spllc; } ;
struct u2phy_banks {scalar_t__ com; scalar_t__ fmreg; scalar_t__ misc; } ;
struct mtk_tphy {int dev; } ;
struct mtk_phy_instance {int type; scalar_t__ port_base; struct u3phy_banks u3_banks; struct u2phy_banks u2_banks; } ;





 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static void FUNC_1(struct mtk_tphy *VAR_7,
         struct mtk_phy_instance *VAR_8)
{
 struct u2phy_banks *VAR_9 = &VAR_8->u2_banks;
 struct u3phy_banks *VAR_10 = &VAR_8->u3_banks;

 switch (VAR_8->type) {
 case 129:
  VAR_9->misc = VAR_8->port_base + VAR_1;
  VAR_9->fmreg = VAR_8->port_base + VAR_3;
  VAR_9->com = VAR_8->port_base + VAR_4;
  break;
 case 128:
 case 130:
  VAR_10->spllc = VAR_8->port_base + VAR_2;
  VAR_10->chip = VAR_8->port_base + VAR_0;
  VAR_10->phyd = VAR_8->port_base + VAR_6;
  VAR_10->phya = VAR_8->port_base + VAR_5;
  break;
 default:
  FUNC_0(VAR_7->dev, "incompatible PHY type\n");
  return;
 }
}
