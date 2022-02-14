
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy {int dummy; } ;
struct ltq_vrx200_pcie_phy_priv {int dev; int phy_regmap; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 struct ltq_vrx200_pcie_phy_priv* FUNC_1 (struct phy*) ;
 int FUNC_2 (int ,int ,unsigned int,int,int,int) ;

__attribute__((used)) static int FUNC_3(struct phy *VAR_1)
{
 struct ltq_vrx200_pcie_phy_priv *VAR_2 = FUNC_1(VAR_1);
 unsigned int VAR_3;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_2->phy_regmap, VAR_0,
           VAR_3, ((VAR_3 & 0x0070) == 0x0070), 10,
           10000);
 if (VAR_4) {
  FUNC_0(VAR_2->dev, "PLL Link timeout, PLL status = 0x%04x\n",
   VAR_3);
  return VAR_4;
 }

 return 0;
}
