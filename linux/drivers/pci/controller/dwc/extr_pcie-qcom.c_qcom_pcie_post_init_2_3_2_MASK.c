
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qcom_pcie_resources_2_3_2 {int pipe_clk; } ;
struct TYPE_2__ {struct qcom_pcie_resources_2_3_2 v2_3_2; } ;
struct qcom_pcie {struct dw_pcie* pci; TYPE_1__ res; } ;
struct dw_pcie {struct device* dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*) ;

__attribute__((used)) static int FUNC_2(struct qcom_pcie *VAR_0)
{
 struct qcom_pcie_resources_2_3_2 *VAR_1 = &VAR_0->res.v2_3_2;
 struct dw_pcie *VAR_2 = VAR_0->pci;
 struct device *VAR_3 = VAR_2->dev;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1->pipe_clk);
 if (VAR_4) {
  FUNC_1(VAR_3, "cannot prepare/enable pipe clock\n");
  return VAR_4;
 }

 return 0;
}
