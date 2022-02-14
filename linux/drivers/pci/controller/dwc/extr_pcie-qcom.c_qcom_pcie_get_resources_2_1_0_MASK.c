
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qcom_pcie_resources_2_1_0 {void* phy_reset; void* por_reset; void* ahb_reset; void* axi_reset; void* pci_reset; void* phy_clk; void* core_clk; void* iface_clk; TYPE_2__* supplies; } ;
struct TYPE_4__ {struct qcom_pcie_resources_2_1_0 v2_1_0; } ;
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
 void* FUNC_6 (struct device*,char*) ;

__attribute__((used)) static int FUNC_7(struct qcom_pcie *VAR_0)
{
 struct qcom_pcie_resources_2_1_0 *VAR_1 = &VAR_0->res.v2_1_0;
 struct dw_pcie *VAR_2 = VAR_0->pci;
 struct device *VAR_3 = VAR_2->dev;
 int VAR_4;

 VAR_1->supplies[0].supply = "vdda";
 VAR_1->supplies[1].supply = "vdda_phy";
 VAR_1->supplies[2].supply = "vdda_refclk";
 VAR_4 = FUNC_5(VAR_3, FUNC_0(VAR_1->supplies),
          VAR_1->supplies);
 if (VAR_4)
  return VAR_4;

 VAR_1->iface_clk = FUNC_4(VAR_3, "iface");
 if (FUNC_1(VAR_1->iface_clk))
  return FUNC_2(VAR_1->iface_clk);

 VAR_1->core_clk = FUNC_4(VAR_3, "core");
 if (FUNC_1(VAR_1->core_clk))
  return FUNC_2(VAR_1->core_clk);

 VAR_1->phy_clk = FUNC_4(VAR_3, "phy");
 if (FUNC_1(VAR_1->phy_clk))
  return FUNC_2(VAR_1->phy_clk);

 VAR_1->pci_reset = FUNC_6(VAR_3, "pci");
 if (FUNC_1(VAR_1->pci_reset))
  return FUNC_2(VAR_1->pci_reset);

 VAR_1->axi_reset = FUNC_6(VAR_3, "axi");
 if (FUNC_1(VAR_1->axi_reset))
  return FUNC_2(VAR_1->axi_reset);

 VAR_1->ahb_reset = FUNC_6(VAR_3, "ahb");
 if (FUNC_1(VAR_1->ahb_reset))
  return FUNC_2(VAR_1->ahb_reset);

 VAR_1->por_reset = FUNC_6(VAR_3, "por");
 if (FUNC_1(VAR_1->por_reset))
  return FUNC_2(VAR_1->por_reset);

 VAR_1->phy_reset = FUNC_6(VAR_3, "phy");
 return FUNC_3(VAR_1->phy_reset);
}
