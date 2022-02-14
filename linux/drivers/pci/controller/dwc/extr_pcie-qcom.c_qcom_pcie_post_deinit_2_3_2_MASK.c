
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qcom_pcie_resources_2_3_2 {int pipe_clk; } ;
struct TYPE_2__ {struct qcom_pcie_resources_2_3_2 v2_3_2; } ;
struct qcom_pcie {TYPE_1__ res; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct qcom_pcie *VAR_0)
{
 struct qcom_pcie_resources_2_3_2 *VAR_1 = &VAR_0->res.v2_3_2;

 FUNC_0(VAR_1->pipe_clk);
}
