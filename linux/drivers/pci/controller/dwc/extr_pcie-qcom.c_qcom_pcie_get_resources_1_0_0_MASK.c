
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qcom_pcie_resources_1_0_0 {int core; void* slave_bus; void* master_bus; void* aux; void* iface; void* vdda; } ;
struct TYPE_2__ {struct qcom_pcie_resources_1_0_0 v1_0_0; } ;
struct qcom_pcie {struct dw_pcie* pci; TYPE_1__ res; } ;
struct dw_pcie {struct device* dev; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (struct device*,char*) ;
 void* FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*,char*) ;

__attribute__((used)) static int FUNC_6(struct qcom_pcie *VAR_0)
{
 struct qcom_pcie_resources_1_0_0 *VAR_1 = &VAR_0->res.v1_0_0;
 struct dw_pcie *VAR_2 = VAR_0->pci;
 struct device *VAR_3 = VAR_2->dev;

 VAR_1->vdda = FUNC_4(VAR_3, "vdda");
 if (FUNC_0(VAR_1->vdda))
  return FUNC_1(VAR_1->vdda);

 VAR_1->iface = FUNC_3(VAR_3, "iface");
 if (FUNC_0(VAR_1->iface))
  return FUNC_1(VAR_1->iface);

 VAR_1->aux = FUNC_3(VAR_3, "aux");
 if (FUNC_0(VAR_1->aux))
  return FUNC_1(VAR_1->aux);

 VAR_1->master_bus = FUNC_3(VAR_3, "master_bus");
 if (FUNC_0(VAR_1->master_bus))
  return FUNC_1(VAR_1->master_bus);

 VAR_1->slave_bus = FUNC_3(VAR_3, "slave_bus");
 if (FUNC_0(VAR_1->slave_bus))
  return FUNC_1(VAR_1->slave_bus);

 VAR_1->core = FUNC_5(VAR_3, "core");
 return FUNC_2(VAR_1->core);
}
