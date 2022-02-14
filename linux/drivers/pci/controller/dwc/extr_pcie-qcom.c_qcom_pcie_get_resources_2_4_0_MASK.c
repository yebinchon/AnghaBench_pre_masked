
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qcom_pcie_resources_2_4_0 {int num_clks; void* phy_ahb_reset; void* ahb_reset; void* pwr_reset; void* pipe_sticky_reset; void* axi_m_sticky_reset; void* phy_reset; void* parf_reset; void* axi_s_xpu_reset; void* axi_m_vmid_reset; void* pipe_reset; void* axi_s_reset; void* axi_m_reset; TYPE_2__* clks; } ;
struct TYPE_3__ {struct qcom_pcie_resources_2_4_0 v2_4_0; } ;
struct qcom_pcie {struct dw_pcie* pci; TYPE_1__ res; } ;
struct dw_pcie {struct device* dev; } ;
struct device {int of_node; } ;
struct TYPE_4__ {char* id; } ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct device*,int,TYPE_2__*) ;
 void* FUNC_3 (struct device*,char*) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(struct qcom_pcie *VAR_0)
{
 struct qcom_pcie_resources_2_4_0 *VAR_1 = &VAR_0->res.v2_4_0;
 struct dw_pcie *VAR_2 = VAR_0->pci;
 struct device *VAR_3 = VAR_2->dev;
 bool VAR_4 = FUNC_4(VAR_3->of_node, "qcom,pcie-ipq4019");
 int VAR_5;

 VAR_1->clks[0].id = "aux";
 VAR_1->clks[1].id = "master_bus";
 VAR_1->clks[2].id = "slave_bus";
 VAR_1->clks[3].id = "iface";


 VAR_1->num_clks = VAR_4 ? 3 : 4;

 VAR_5 = FUNC_2(VAR_3, VAR_1->num_clks, VAR_1->clks);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_1->axi_m_reset = FUNC_3(VAR_3, "axi_m");
 if (FUNC_0(VAR_1->axi_m_reset))
  return FUNC_1(VAR_1->axi_m_reset);

 VAR_1->axi_s_reset = FUNC_3(VAR_3, "axi_s");
 if (FUNC_0(VAR_1->axi_s_reset))
  return FUNC_1(VAR_1->axi_s_reset);

 if (VAR_4) {




  VAR_1->pipe_reset = FUNC_3(VAR_3, "pipe");
  if (FUNC_0(VAR_1->pipe_reset))
   return FUNC_1(VAR_1->pipe_reset);

  VAR_1->axi_m_vmid_reset = FUNC_3(VAR_3,
          "axi_m_vmid");
  if (FUNC_0(VAR_1->axi_m_vmid_reset))
   return FUNC_1(VAR_1->axi_m_vmid_reset);

  VAR_1->axi_s_xpu_reset = FUNC_3(VAR_3,
         "axi_s_xpu");
  if (FUNC_0(VAR_1->axi_s_xpu_reset))
   return FUNC_1(VAR_1->axi_s_xpu_reset);

  VAR_1->parf_reset = FUNC_3(VAR_3, "parf");
  if (FUNC_0(VAR_1->parf_reset))
   return FUNC_1(VAR_1->parf_reset);

  VAR_1->phy_reset = FUNC_3(VAR_3, "phy");
  if (FUNC_0(VAR_1->phy_reset))
   return FUNC_1(VAR_1->phy_reset);
 }

 VAR_1->axi_m_sticky_reset = FUNC_3(VAR_3,
           "axi_m_sticky");
 if (FUNC_0(VAR_1->axi_m_sticky_reset))
  return FUNC_1(VAR_1->axi_m_sticky_reset);

 VAR_1->pipe_sticky_reset = FUNC_3(VAR_3,
          "pipe_sticky");
 if (FUNC_0(VAR_1->pipe_sticky_reset))
  return FUNC_1(VAR_1->pipe_sticky_reset);

 VAR_1->pwr_reset = FUNC_3(VAR_3, "pwr");
 if (FUNC_0(VAR_1->pwr_reset))
  return FUNC_1(VAR_1->pwr_reset);

 VAR_1->ahb_reset = FUNC_3(VAR_3, "ahb");
 if (FUNC_0(VAR_1->ahb_reset))
  return FUNC_1(VAR_1->ahb_reset);

 if (VAR_4) {
  VAR_1->phy_ahb_reset = FUNC_3(VAR_3, "phy_ahb");
  if (FUNC_0(VAR_1->phy_ahb_reset))
   return FUNC_1(VAR_1->phy_ahb_reset);
 }

 return 0;
}
