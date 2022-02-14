
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qcom_pcie_resources_2_3_2 {int supplies; int aux_clk; int cfg_clk; int master_clk; int slave_clk; } ;
struct TYPE_2__ {struct qcom_pcie_resources_2_3_2 v2_3_2; } ;
struct qcom_pcie {TYPE_1__ res; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct qcom_pcie *VAR_0)
{
 struct qcom_pcie_resources_2_3_2 *VAR_1 = &VAR_0->res.v2_3_2;

 FUNC_1(VAR_1->slave_clk);
 FUNC_1(VAR_1->master_clk);
 FUNC_1(VAR_1->cfg_clk);
 FUNC_1(VAR_1->aux_clk);

 FUNC_2(FUNC_0(VAR_1->supplies), VAR_1->supplies);
}
