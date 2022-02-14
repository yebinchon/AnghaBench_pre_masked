
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_emc {int dev; int clk; int pll_m; int emc_mux; int backup_clk; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static int FUNC_3(struct tegra_emc *VAR_0, unsigned long VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0->emc_mux, VAR_0->backup_clk);
 if (VAR_2) {
  FUNC_2(VAR_0->dev,
   "failed to reparent to backup source: %d\n", VAR_2);
  return VAR_2;
 }

 VAR_2 = FUNC_1(VAR_0->pll_m, VAR_1);
 if (VAR_2) {
  FUNC_2(VAR_0->dev,
   "failed to change pll_m rate: %d\n", VAR_2);
  return VAR_2;
 }

 VAR_2 = FUNC_0(VAR_0->emc_mux, VAR_0->pll_m);
 if (VAR_2) {
  FUNC_2(VAR_0->dev,
   "failed to reparent to pll_m: %d\n", VAR_2);
  return VAR_2;
 }

 VAR_2 = FUNC_1(VAR_0->clk, VAR_1);
 if (VAR_2) {
  FUNC_2(VAR_0->dev,
   "failed to change emc rate: %d\n", VAR_2);
  return VAR_2;
 }

 return 0;
}
