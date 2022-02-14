
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qcom_pcie_resources_2_3_2 {void* pipe_clk; void* slave_clk; void* master_clk; void* cfg_clk; void* aux_clk; TYPE_2__* supplies; } ;
struct TYPE_4__ {struct qcom_pcie_resources_2_3_2 v2_3_2; } ;
struct qcom_pcie {struct dw_pcie* pci; TYPE_1__ res; } ;
struct dw_pcie {struct device* dev; } ;
struct device {int dummy; } ;
struct TYPE_5__ {char* supply; } ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*,int ,TYPE_2__*) ;

__attribute__((used)) static int FUNC_6(struct qcom_pcie *VAR_0)
{
 struct qcom_pcie_resources_2_3_2 *VAR_1 = &VAR_0->res.v2_3_2;
 struct dw_pcie *VAR_2 = VAR_0->pci;
 struct device *VAR_3 = VAR_2->dev;
 int VAR_4;

 VAR_1->supplies[0].supply = "vdda";
 VAR_1->supplies[1].supply = "vddpe-3v3";
 VAR_4 = FUNC_5(VAR_3, FUNC_0(VAR_1->supplies),
          VAR_1->supplies);
 if (VAR_4)
  return VAR_4;

 VAR_1->aux_clk = FUNC_4(VAR_3, "aux");
 if (FUNC_1(VAR_1->aux_clk))
  return FUNC_2(VAR_1->aux_clk);

 VAR_1->cfg_clk = FUNC_4(VAR_3, "cfg");
 if (FUNC_1(VAR_1->cfg_clk))
  return FUNC_2(VAR_1->cfg_clk);

 VAR_1->master_clk = FUNC_4(VAR_3, "bus_master");
 if (FUNC_1(VAR_1->master_clk))
  return FUNC_2(VAR_1->master_clk);

 VAR_1->slave_clk = FUNC_4(VAR_3, "bus_slave");
 if (FUNC_1(VAR_1->slave_clk))
  return FUNC_2(VAR_1->slave_clk);

 VAR_1->pipe_clk = FUNC_4(VAR_3, "pipe");
 return FUNC_3(VAR_1->pipe_clk);
}
