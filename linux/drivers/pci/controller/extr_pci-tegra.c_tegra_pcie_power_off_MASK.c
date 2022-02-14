
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_pcie_soc {scalar_t__ has_cml_clk; } ;
struct tegra_pcie {int supplies; int num_supplies; int afi_clk; int cml_clk; int pll_e; int afi_rst; struct tegra_pcie_soc* soc; struct device* dev; } ;
struct device {int pm_domain; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct tegra_pcie *VAR_1)
{
 struct device *VAR_2 = VAR_1->dev;
 const struct tegra_pcie_soc *VAR_3 = VAR_1->soc;
 int VAR_4;

 FUNC_3(VAR_1->afi_rst);

 FUNC_0(VAR_1->pll_e);
 if (VAR_3->has_cml_clk)
  FUNC_0(VAR_1->cml_clk);
 FUNC_0(VAR_1->afi_clk);

 if (!VAR_2->pm_domain)
  FUNC_4(VAR_0);

 VAR_4 = FUNC_2(VAR_1->num_supplies, VAR_1->supplies);
 if (VAR_4 < 0)
  FUNC_1(VAR_2, "failed to disable regulators: %d\n", VAR_4);
}
