
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvebu_comphy_priv {scalar_t__ mg_domain_clk; scalar_t__ mg_core_clk; scalar_t__ axi_clk; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct mvebu_comphy_priv *VAR_0)
{
 if (VAR_0->axi_clk)
  FUNC_0(VAR_0->axi_clk);

 if (VAR_0->mg_core_clk)
  FUNC_0(VAR_0->mg_core_clk);

 if (VAR_0->mg_domain_clk)
  FUNC_0(VAR_0->mg_domain_clk);
}
