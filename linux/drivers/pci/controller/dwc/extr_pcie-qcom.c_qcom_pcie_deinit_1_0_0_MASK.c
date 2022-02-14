
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qcom_pcie_resources_1_0_0 {int vdda; int aux; int iface; int master_bus; int slave_bus; int core; } ;
struct TYPE_2__ {struct qcom_pcie_resources_1_0_0 v1_0_0; } ;
struct qcom_pcie {TYPE_1__ res; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct qcom_pcie *VAR_0)
{
 struct qcom_pcie_resources_1_0_0 *VAR_1 = &VAR_0->res.v1_0_0;

 FUNC_2(VAR_1->core);
 FUNC_0(VAR_1->slave_bus);
 FUNC_0(VAR_1->master_bus);
 FUNC_0(VAR_1->iface);
 FUNC_0(VAR_1->aux);
 FUNC_1(VAR_1->vdda);
}
