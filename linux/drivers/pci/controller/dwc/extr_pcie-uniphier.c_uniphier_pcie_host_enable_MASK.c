
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uniphier_pcie_priv {int clk; int rst; int phy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct uniphier_pcie_priv*) ;
 int FUNC_7 (struct uniphier_pcie_priv*) ;

__attribute__((used)) static int FUNC_8(struct uniphier_pcie_priv *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0->clk);
 if (VAR_1)
  return VAR_1;

 VAR_1 = FUNC_5(VAR_0->rst);
 if (VAR_1)
  goto out_clk_disable;

 FUNC_6(VAR_0);

 VAR_1 = FUNC_3(VAR_0->phy);
 if (VAR_1)
  goto out_rst_assert;

 VAR_1 = FUNC_7(VAR_0);
 if (VAR_1)
  goto out_phy_exit;

 return 0;

out_phy_exit:
 FUNC_2(VAR_0->phy);
out_rst_assert:
 FUNC_4(VAR_0->rst);
out_clk_disable:
 FUNC_0(VAR_0->clk);

 return VAR_1;
}
