
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qcom_pcie_resources_2_3_3 {int aux_clk; int ahb_clk; int axi_s_clk; int axi_m_clk; int iface; } ;
struct TYPE_2__ {struct qcom_pcie_resources_2_3_3 v2_3_3; } ;
struct qcom_pcie {TYPE_1__ res; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct qcom_pcie *VAR_0)
{
 struct qcom_pcie_resources_2_3_3 *VAR_1 = &VAR_0->res.v2_3_3;

 FUNC_0(VAR_1->iface);
 FUNC_0(VAR_1->axi_m_clk);
 FUNC_0(VAR_1->axi_s_clk);
 FUNC_0(VAR_1->ahb_clk);
 FUNC_0(VAR_1->aux_clk);
}
