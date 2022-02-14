
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qcom_pcie_resources_2_4_0 {int clks; int num_clks; int ahb_reset; int pwr_reset; int axi_m_sticky_reset; int phy_ahb_reset; int phy_reset; int pipe_sticky_reset; int pipe_reset; int axi_s_reset; int axi_m_reset; } ;
struct TYPE_2__ {struct qcom_pcie_resources_2_4_0 v2_4_0; } ;
struct qcom_pcie {TYPE_1__ res; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct qcom_pcie *VAR_0)
{
 struct qcom_pcie_resources_2_4_0 *VAR_1 = &VAR_0->res.v2_4_0;

 FUNC_1(VAR_1->axi_m_reset);
 FUNC_1(VAR_1->axi_s_reset);
 FUNC_1(VAR_1->pipe_reset);
 FUNC_1(VAR_1->pipe_sticky_reset);
 FUNC_1(VAR_1->phy_reset);
 FUNC_1(VAR_1->phy_ahb_reset);
 FUNC_1(VAR_1->axi_m_sticky_reset);
 FUNC_1(VAR_1->pwr_reset);
 FUNC_1(VAR_1->ahb_reset);
 FUNC_0(VAR_1->num_clks, VAR_1->clks);
}
