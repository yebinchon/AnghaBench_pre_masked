
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_pcie_soc {scalar_t__ has_cml_clk; } ;
struct tegra_pcie {int supplies; int num_supplies; int afi_clk; int cml_clk; int afi_rst; int pll_e; int pex_rst; int pcie_xrst; struct tegra_pcie_soc* soc; struct device* dev; } ;
struct device {int pm_domain; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct tegra_pcie *VAR_1)
{
 struct device *VAR_2 = VAR_1->dev;
 const struct tegra_pcie_soc *VAR_3 = VAR_1->soc;
 int VAR_4;

 FUNC_5(VAR_1->pcie_xrst);
 FUNC_5(VAR_1->afi_rst);
 FUNC_5(VAR_1->pex_rst);

 if (!VAR_2->pm_domain)
  FUNC_7(VAR_0);


 VAR_4 = FUNC_4(VAR_1->num_supplies, VAR_1->supplies);
 if (VAR_4 < 0)
  FUNC_2(VAR_2, "failed to enable regulators: %d\n", VAR_4);

 if (!VAR_2->pm_domain) {
  VAR_4 = FUNC_8(VAR_0);
  if (VAR_4) {
   FUNC_2(VAR_2, "failed to power ungate: %d\n", VAR_4);
   goto regulator_disable;
  }
  VAR_4 = FUNC_9(VAR_0);
  if (VAR_4) {
   FUNC_2(VAR_2, "failed to remove clamp: %d\n", VAR_4);
   goto powergate;
  }
 }

 VAR_4 = FUNC_1(VAR_1->afi_clk);
 if (VAR_4 < 0) {
  FUNC_2(VAR_2, "failed to enable AFI clock: %d\n", VAR_4);
  goto powergate;
 }

 if (VAR_3->has_cml_clk) {
  VAR_4 = FUNC_1(VAR_1->cml_clk);
  if (VAR_4 < 0) {
   FUNC_2(VAR_2, "failed to enable CML clock: %d\n", VAR_4);
   goto disable_afi_clk;
  }
 }

 VAR_4 = FUNC_1(VAR_1->pll_e);
 if (VAR_4 < 0) {
  FUNC_2(VAR_2, "failed to enable PLLE clock: %d\n", VAR_4);
  goto disable_cml_clk;
 }

 FUNC_6(VAR_1->afi_rst);

 return 0;

disable_cml_clk:
 if (VAR_3->has_cml_clk)
  FUNC_0(VAR_1->cml_clk);
disable_afi_clk:
 FUNC_0(VAR_1->afi_clk);
powergate:
 if (!VAR_2->pm_domain)
  FUNC_7(VAR_0);
regulator_disable:
 FUNC_3(VAR_1->num_supplies, VAR_1->supplies);

 return VAR_4;
}
