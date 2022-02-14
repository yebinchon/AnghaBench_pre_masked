
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy {int dummy; } ;
struct ltq_vrx200_pcie_phy_priv {int pdi_clk; int phy_clk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct phy*) ;
 int FUNC_3 (struct phy*) ;
 scalar_t__ FUNC_4 (struct phy*) ;
 int FUNC_5 (struct phy*) ;
 struct ltq_vrx200_pcie_phy_priv* FUNC_6 (struct phy*) ;

__attribute__((used)) static int FUNC_7(struct phy *VAR_0)
{
 struct ltq_vrx200_pcie_phy_priv *VAR_1 = FUNC_6(VAR_0);
 int VAR_2;


 VAR_2 = FUNC_1(VAR_1->pdi_clk);
 if (VAR_2)
  goto err;


 FUNC_3(VAR_0);

 FUNC_5(VAR_0);


 VAR_2 = FUNC_1(VAR_1->phy_clk);
 if (VAR_2)
  goto err_disable_pdi_clk;


 if (FUNC_4(VAR_0) != 0)
  goto err_disable_phy_clk;

 FUNC_2(VAR_0);

 return 0;

err_disable_phy_clk:
 FUNC_0(VAR_1->phy_clk);
err_disable_pdi_clk:
 FUNC_0(VAR_1->pdi_clk);
err:
 return VAR_2;
}
