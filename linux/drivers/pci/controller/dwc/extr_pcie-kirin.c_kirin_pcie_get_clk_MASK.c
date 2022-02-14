
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct kirin_pcie {void* pcie_aclk; void* apb_sys_clk; void* apb_phy_clk; void* pcie_aux_clk; void* phy_ref_clk; } ;


 scalar_t__ FUNC_0 (void*) ;
 long FUNC_1 (void*) ;
 void* FUNC_2 (struct device*,char*) ;

__attribute__((used)) static long FUNC_3(struct kirin_pcie *VAR_0,
          struct platform_device *VAR_1)
{
 struct device *VAR_2 = &VAR_1->dev;

 VAR_0->phy_ref_clk = FUNC_2(VAR_2, "pcie_phy_ref");
 if (FUNC_0(VAR_0->phy_ref_clk))
  return FUNC_1(VAR_0->phy_ref_clk);

 VAR_0->pcie_aux_clk = FUNC_2(VAR_2, "pcie_aux");
 if (FUNC_0(VAR_0->pcie_aux_clk))
  return FUNC_1(VAR_0->pcie_aux_clk);

 VAR_0->apb_phy_clk = FUNC_2(VAR_2, "pcie_apb_phy");
 if (FUNC_0(VAR_0->apb_phy_clk))
  return FUNC_1(VAR_0->apb_phy_clk);

 VAR_0->apb_sys_clk = FUNC_2(VAR_2, "pcie_apb_sys");
 if (FUNC_0(VAR_0->apb_sys_clk))
  return FUNC_1(VAR_0->apb_sys_clk);

 VAR_0->pcie_aclk = FUNC_2(VAR_2, "pcie_aclk");
 if (FUNC_0(VAR_0->pcie_aclk))
  return FUNC_1(VAR_0->pcie_aclk);

 return 0;
}
