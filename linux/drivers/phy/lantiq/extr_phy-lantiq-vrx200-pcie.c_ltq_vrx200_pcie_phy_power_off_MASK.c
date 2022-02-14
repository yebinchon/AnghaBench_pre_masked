
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy {int dummy; } ;
struct ltq_vrx200_pcie_phy_priv {int pdi_clk; int phy_clk; } ;


 int FUNC_0 (int ) ;
 struct ltq_vrx200_pcie_phy_priv* FUNC_1 (struct phy*) ;

__attribute__((used)) static int FUNC_2(struct phy *VAR_0)
{
 struct ltq_vrx200_pcie_phy_priv *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->phy_clk);
 FUNC_0(VAR_1->pdi_clk);

 return 0;
}
