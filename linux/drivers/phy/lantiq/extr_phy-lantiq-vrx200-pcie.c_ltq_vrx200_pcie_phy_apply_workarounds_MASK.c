
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reg_default {int def; int reg; } ;
struct phy {int dummy; } ;
struct ltq_vrx200_pcie_phy_priv {int phy_regmap; } ;


 int FUNC_0 (struct reg_default const*) ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct ltq_vrx200_pcie_phy_priv* FUNC_1 (struct phy*) ;
 int FUNC_2 (int ,int ,int,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static void FUNC_6(struct phy *VAR_6)
{
 struct ltq_vrx200_pcie_phy_priv *VAR_7 = FUNC_1(VAR_6);
 static const struct reg_default VAR_8[] = {
  {
   .reg = 131,
   .def = 130,
  },
  {
   .reg = 129,
   .def = 128,
  },
  {
   .reg = 133,
   .def = 132,
  }
 };
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_8); VAR_9++) {

  FUNC_2(VAR_7->phy_regmap, VAR_8[VAR_9].reg,
       VAR_8[VAR_9].def, VAR_8[VAR_9].def);

  FUNC_4(1);


  FUNC_2(VAR_7->phy_regmap, VAR_8[VAR_9].reg,
       VAR_8[VAR_9].def, 0x0);
 }

 for (VAR_9 = 0; VAR_9 < 5; VAR_9++) {

  FUNC_3(VAR_7->phy_regmap, VAR_3, 0x1ffe);
  FUNC_3(VAR_7->phy_regmap, VAR_4, 0xfffe);
  FUNC_3(VAR_7->phy_regmap, VAR_5, 0x0601);
  FUNC_5(1000, 2000);
  FUNC_3(VAR_7->phy_regmap, VAR_5, 0x0001);


  FUNC_3(VAR_7->phy_regmap, VAR_0, 0x1ffe);
  FUNC_3(VAR_7->phy_regmap, VAR_1, 0xfffe);
  FUNC_3(VAR_7->phy_regmap, VAR_2, 0x0601);
  FUNC_5(1000, 2000);
  FUNC_3(VAR_7->phy_regmap, VAR_2, 0x0001);
 }
}
