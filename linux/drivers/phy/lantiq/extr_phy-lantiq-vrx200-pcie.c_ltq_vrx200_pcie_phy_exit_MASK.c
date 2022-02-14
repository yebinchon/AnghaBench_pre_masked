
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy {int dummy; } ;
struct ltq_vrx200_pcie_phy_priv {int phy_reset; int pcie_reset; } ;


 struct ltq_vrx200_pcie_phy_priv* FUNC_0 (struct phy*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct phy *VAR_0)
{
 struct ltq_vrx200_pcie_phy_priv *VAR_1 = FUNC_0(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1->pcie_reset);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_1(VAR_1->phy_reset);
 if (VAR_2)
  return VAR_2;

 return 0;
}
