
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy {int dummy; } ;
struct ltq_vrx200_pcie_phy_priv {int phy_regmap; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 struct ltq_vrx200_pcie_phy_priv* FUNC_1 (struct phy*) ;
 int FUNC_2 (int ,int ,int,int) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static void FUNC_4(struct phy *VAR_16)
{
 struct ltq_vrx200_pcie_phy_priv *VAR_17 = FUNC_1(VAR_16);

 FUNC_2(VAR_17->phy_regmap, VAR_9,
      VAR_10, 0x0000);

 FUNC_2(VAR_17->phy_regmap, VAR_9,
      VAR_11, 0x0000);

 FUNC_2(VAR_17->phy_regmap, VAR_5,
      VAR_8,
      VAR_8);

 FUNC_2(VAR_17->phy_regmap, VAR_5,
      VAR_6,
      VAR_6);

 FUNC_2(VAR_17->phy_regmap, VAR_2,
      VAR_3,
      FUNC_0(VAR_3, 0x1));

 FUNC_2(VAR_17->phy_regmap, VAR_0,
      VAR_1, 0x0000);


 FUNC_3(VAR_17->phy_regmap, VAR_4, 0x38e4);

 FUNC_2(VAR_17->phy_regmap, VAR_5,
      VAR_7,
      FUNC_0(VAR_7,
          0xee));


 FUNC_3(VAR_17->phy_regmap, VAR_15, 0x0002);
 FUNC_3(VAR_17->phy_regmap, VAR_14, 0x3a04);
 FUNC_3(VAR_17->phy_regmap, VAR_13, 0xfae3);
 FUNC_3(VAR_17->phy_regmap, VAR_12, 0x1b72);
}
