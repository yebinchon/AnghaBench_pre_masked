
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_pcie_dw {int cid; int dev; int pex_ctl_supply; int core_clk; int core_apb_rst; int core_rst; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct tegra_pcie_dw*,int) ;
 int FUNC_5 (struct tegra_pcie_dw*) ;
 int FUNC_6 (struct tegra_pcie_dw*) ;

__attribute__((used)) static int FUNC_7(struct tegra_pcie_dw *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_3(VAR_0->core_rst);
 if (VAR_1) {
  FUNC_1(VAR_0->dev, "Failed to assert \"core\" reset: %d\n",
   VAR_1);
  return VAR_1;
 }

 FUNC_5(VAR_0);

 VAR_1 = FUNC_3(VAR_0->core_apb_rst);
 if (VAR_1) {
  FUNC_1(VAR_0->dev, "Failed to assert APB reset: %d\n", VAR_1);
  return VAR_1;
 }

 FUNC_0(VAR_0->core_clk);

 VAR_1 = FUNC_2(VAR_0->pex_ctl_supply);
 if (VAR_1) {
  FUNC_1(VAR_0->dev, "Failed to disable regulator: %d\n", VAR_1);
  return VAR_1;
 }

 FUNC_6(VAR_0);

 VAR_1 = FUNC_4(VAR_0, 0);
 if (VAR_1) {
  FUNC_1(VAR_0->dev, "Failed to disable controller %d: %d\n",
   VAR_0->cid, VAR_1);
  return VAR_1;
 }

 return VAR_1;
}
