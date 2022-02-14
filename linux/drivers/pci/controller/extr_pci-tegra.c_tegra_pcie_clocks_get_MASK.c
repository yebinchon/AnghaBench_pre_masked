
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_pcie_soc {scalar_t__ has_cml_clk; } ;
struct tegra_pcie {void* cml_clk; void* pll_e; void* afi_clk; void* pex_clk; struct tegra_pcie_soc* soc; struct device* dev; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (struct device*,char*) ;

__attribute__((used)) static int FUNC_3(struct tegra_pcie *VAR_0)
{
 struct device *VAR_1 = VAR_0->dev;
 const struct tegra_pcie_soc *VAR_2 = VAR_0->soc;

 VAR_0->pex_clk = FUNC_2(VAR_1, "pex");
 if (FUNC_0(VAR_0->pex_clk))
  return FUNC_1(VAR_0->pex_clk);

 VAR_0->afi_clk = FUNC_2(VAR_1, "afi");
 if (FUNC_0(VAR_0->afi_clk))
  return FUNC_1(VAR_0->afi_clk);

 VAR_0->pll_e = FUNC_2(VAR_1, "pll_e");
 if (FUNC_0(VAR_0->pll_e))
  return FUNC_1(VAR_0->pll_e);

 if (VAR_2->has_cml_clk) {
  VAR_0->cml_clk = FUNC_2(VAR_1, "cml");
  if (FUNC_0(VAR_0->cml_clk))
   return FUNC_1(VAR_0->cml_clk);
 }

 return 0;
}
