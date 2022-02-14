
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kirin_pcie {int phy_ref_clk; int apb_sys_clk; int apb_phy_clk; int pcie_aclk; int pcie_aux_clk; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct kirin_pcie *VAR_1, bool VAR_2)
{
 int VAR_3 = 0;

 if (!VAR_2)
  goto close_clk;

 VAR_3 = FUNC_2(VAR_1->phy_ref_clk, VAR_0);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_1(VAR_1->phy_ref_clk);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_1(VAR_1->apb_sys_clk);
 if (VAR_3)
  goto apb_sys_fail;

 VAR_3 = FUNC_1(VAR_1->apb_phy_clk);
 if (VAR_3)
  goto apb_phy_fail;

 VAR_3 = FUNC_1(VAR_1->pcie_aclk);
 if (VAR_3)
  goto aclk_fail;

 VAR_3 = FUNC_1(VAR_1->pcie_aux_clk);
 if (VAR_3)
  goto aux_clk_fail;

 return 0;

close_clk:
 FUNC_0(VAR_1->pcie_aux_clk);
aux_clk_fail:
 FUNC_0(VAR_1->pcie_aclk);
aclk_fail:
 FUNC_0(VAR_1->apb_phy_clk);
apb_phy_fail:
 FUNC_0(VAR_1->apb_sys_clk);
apb_sys_fail:
 FUNC_0(VAR_1->phy_ref_clk);

 return VAR_3;
}
