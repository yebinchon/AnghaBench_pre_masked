
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rockchip_pcie {int aclk_pcie; int aclk_perf_pcie; int hclk_pcie; int clk_pcie_pm; } ;


 int FUNC_0 (int ) ;

void FUNC_1(void *VAR_0)
{
 struct rockchip_pcie *VAR_1 = VAR_0;

 FUNC_0(VAR_1->clk_pcie_pm);
 FUNC_0(VAR_1->hclk_pcie);
 FUNC_0(VAR_1->aclk_perf_pcie);
 FUNC_0(VAR_1->aclk_pcie);
}
