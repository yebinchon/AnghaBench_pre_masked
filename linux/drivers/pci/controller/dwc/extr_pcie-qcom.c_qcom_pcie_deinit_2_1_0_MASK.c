
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qcom_pcie_resources_2_1_0 {int supplies; int phy_clk; int core_clk; int iface_clk; int pci_reset; int por_reset; int ahb_reset; int axi_reset; } ;
struct TYPE_2__ {struct qcom_pcie_resources_2_1_0 v2_1_0; } ;
struct qcom_pcie {TYPE_1__ res; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct qcom_pcie *VAR_0)
{
 struct qcom_pcie_resources_2_1_0 *VAR_1 = &VAR_0->res.v2_1_0;

 FUNC_3(VAR_1->pci_reset);
 FUNC_3(VAR_1->axi_reset);
 FUNC_3(VAR_1->ahb_reset);
 FUNC_3(VAR_1->por_reset);
 FUNC_3(VAR_1->pci_reset);
 FUNC_1(VAR_1->iface_clk);
 FUNC_1(VAR_1->core_clk);
 FUNC_1(VAR_1->phy_clk);
 FUNC_2(FUNC_0(VAR_1->supplies), VAR_1->supplies);
}
