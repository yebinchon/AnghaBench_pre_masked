
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qcom_pcie_resources_2_3_3 {void** rst; void* aux_clk; void* ahb_clk; void* axi_s_clk; void* axi_m_clk; void* iface; } ;
struct TYPE_2__ {struct qcom_pcie_resources_2_3_3 v2_3_3; } ;
struct qcom_pcie {struct dw_pcie* pci; TYPE_1__ res; } ;
struct dw_pcie {struct device* dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (char const**) ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (struct device*,char*) ;
 void* FUNC_4 (struct device*,char const*) ;

__attribute__((used)) static int FUNC_5(struct qcom_pcie *VAR_0)
{
 struct qcom_pcie_resources_2_3_3 *VAR_1 = &VAR_0->res.v2_3_3;
 struct dw_pcie *VAR_2 = VAR_0->pci;
 struct device *VAR_3 = VAR_2->dev;
 int VAR_4;
 const char *VAR_5[] = { "axi_m", "axi_s", "pipe",
        "axi_m_sticky", "sticky",
        "ahb", "sleep", };

 VAR_1->iface = FUNC_3(VAR_3, "iface");
 if (FUNC_1(VAR_1->iface))
  return FUNC_2(VAR_1->iface);

 VAR_1->axi_m_clk = FUNC_3(VAR_3, "axi_m");
 if (FUNC_1(VAR_1->axi_m_clk))
  return FUNC_2(VAR_1->axi_m_clk);

 VAR_1->axi_s_clk = FUNC_3(VAR_3, "axi_s");
 if (FUNC_1(VAR_1->axi_s_clk))
  return FUNC_2(VAR_1->axi_s_clk);

 VAR_1->ahb_clk = FUNC_3(VAR_3, "ahb");
 if (FUNC_1(VAR_1->ahb_clk))
  return FUNC_2(VAR_1->ahb_clk);

 VAR_1->aux_clk = FUNC_3(VAR_3, "aux");
 if (FUNC_1(VAR_1->aux_clk))
  return FUNC_2(VAR_1->aux_clk);

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_5); VAR_4++) {
  VAR_1->rst[VAR_4] = FUNC_4(VAR_3, VAR_5[VAR_4]);
  if (FUNC_1(VAR_1->rst[VAR_4]))
   return FUNC_2(VAR_1->rst[VAR_4]);
 }

 return 0;
}
