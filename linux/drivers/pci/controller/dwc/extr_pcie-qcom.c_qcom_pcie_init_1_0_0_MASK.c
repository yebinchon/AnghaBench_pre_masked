
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qcom_pcie_resources_1_0_0 {int core; int aux; int iface; int master_bus; int slave_bus; int vdda; } ;
struct TYPE_2__ {struct qcom_pcie_resources_1_0_0 v1_0_0; } ;
struct qcom_pcie {scalar_t__ parf; struct dw_pcie* pci; TYPE_1__ res; } ;
struct dw_pcie {struct device* dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct qcom_pcie *VAR_3)
{
 struct qcom_pcie_resources_1_0_0 *VAR_4 = &VAR_3->res.v1_0_0;
 struct dw_pcie *VAR_5 = VAR_3->pci;
 struct device *VAR_6 = VAR_5->dev;
 int VAR_7;

 VAR_7 = FUNC_8(VAR_4->core);
 if (VAR_7) {
  FUNC_4(VAR_6, "cannot deassert core reset\n");
  return VAR_7;
 }

 VAR_7 = FUNC_3(VAR_4->aux);
 if (VAR_7) {
  FUNC_4(VAR_6, "cannot prepare/enable aux clock\n");
  goto err_res;
 }

 VAR_7 = FUNC_3(VAR_4->iface);
 if (VAR_7) {
  FUNC_4(VAR_6, "cannot prepare/enable iface clock\n");
  goto err_aux;
 }

 VAR_7 = FUNC_3(VAR_4->master_bus);
 if (VAR_7) {
  FUNC_4(VAR_6, "cannot prepare/enable master_bus clock\n");
  goto err_iface;
 }

 VAR_7 = FUNC_3(VAR_4->slave_bus);
 if (VAR_7) {
  FUNC_4(VAR_6, "cannot prepare/enable slave_bus clock\n");
  goto err_master;
 }

 VAR_7 = FUNC_6(VAR_4->vdda);
 if (VAR_7) {
  FUNC_4(VAR_6, "cannot enable vdda regulator\n");
  goto err_slave;
 }


 FUNC_9(0, VAR_3->parf + VAR_2);

 if (FUNC_1(VAR_0)) {
  u32 VAR_8 = FUNC_5(VAR_3->parf + VAR_1);

  VAR_8 |= FUNC_0(31);
  FUNC_9(VAR_8, VAR_3->parf + VAR_1);
 }

 return 0;
err_slave:
 FUNC_2(VAR_4->slave_bus);
err_master:
 FUNC_2(VAR_4->master_bus);
err_iface:
 FUNC_2(VAR_4->iface);
err_aux:
 FUNC_2(VAR_4->aux);
err_res:
 FUNC_7(VAR_4->core);

 return VAR_7;
}
