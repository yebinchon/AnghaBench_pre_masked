
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rockchip_pcie {int aclk_pcie; int aclk_perf_pcie; int hclk_pcie; int clk_pcie_pm; struct device* dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*) ;

int FUNC_3(struct rockchip_pcie *VAR_0)
{
 struct device *VAR_1 = VAR_0->dev;
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0->aclk_pcie);
 if (VAR_2) {
  FUNC_2(VAR_1, "unable to enable aclk_pcie clock\n");
  return VAR_2;
 }

 VAR_2 = FUNC_1(VAR_0->aclk_perf_pcie);
 if (VAR_2) {
  FUNC_2(VAR_1, "unable to enable aclk_perf_pcie clock\n");
  goto err_aclk_perf_pcie;
 }

 VAR_2 = FUNC_1(VAR_0->hclk_pcie);
 if (VAR_2) {
  FUNC_2(VAR_1, "unable to enable hclk_pcie clock\n");
  goto err_hclk_pcie;
 }

 VAR_2 = FUNC_1(VAR_0->clk_pcie_pm);
 if (VAR_2) {
  FUNC_2(VAR_1, "unable to enable clk_pcie_pm clock\n");
  goto err_clk_pcie_pm;
 }

 return 0;

err_clk_pcie_pm:
 FUNC_0(VAR_0->hclk_pcie);
err_hclk_pcie:
 FUNC_0(VAR_0->aclk_perf_pcie);
err_aclk_perf_pcie:
 FUNC_0(VAR_0->aclk_pcie);
 return VAR_2;
}
