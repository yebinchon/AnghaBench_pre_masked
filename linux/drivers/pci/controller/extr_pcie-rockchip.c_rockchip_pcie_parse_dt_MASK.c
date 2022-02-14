
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rockchip_pcie {int lanes; int link_gen; void* clk_pcie_pm; void* hclk_pcie; void* aclk_perf_pcie; void* aclk_pcie; void* ep_gpio; scalar_t__ is_rc; void* aclk_rst; void* pclk_rst; void* pm_rst; void* pipe_rst; void* mgmt_sticky_rst; void* mgmt_rst; void* core_rst; void* apb_base; void* mem_res; void* reg_base; struct device* dev; } ;
struct resource {int dummy; } ;
struct platform_device {int dummy; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,char*) ;
 void* FUNC_4 (struct device*,char*) ;
 void* FUNC_5 (struct device*,char*,int ) ;
 void* FUNC_6 (struct device*,struct resource*) ;
 void* FUNC_7 (struct device*,struct resource*) ;
 void* FUNC_8 (struct device*,char*) ;
 int FUNC_9 (struct device_node*) ;
 int FUNC_10 (struct device_node*,char*,int*) ;
 void* FUNC_11 (struct platform_device*,int ,char*) ;
 int FUNC_12 (struct rockchip_pcie*) ;
 struct platform_device* FUNC_13 (struct device*) ;

int FUNC_14(struct rockchip_pcie *VAR_4)
{
 struct device *VAR_5 = VAR_4->dev;
 struct platform_device *VAR_6 = FUNC_13(VAR_5);
 struct device_node *VAR_7 = VAR_5->of_node;
 struct resource *VAR_8;
 int VAR_9;

 if (VAR_4->is_rc) {
  VAR_8 = FUNC_11(VAR_6,
          VAR_3,
          "axi-base");
  VAR_4->reg_base = FUNC_7(VAR_5, VAR_8);
  if (FUNC_0(VAR_4->reg_base))
   return FUNC_1(VAR_4->reg_base);
 } else {
  VAR_4->mem_res =
   FUNC_11(VAR_6, VAR_3,
           "mem-base");
  if (!VAR_4->mem_res)
   return -VAR_0;
 }

 VAR_8 = FUNC_11(VAR_6, VAR_3,
         "apb-base");
 VAR_4->apb_base = FUNC_6(VAR_5, VAR_8);
 if (FUNC_0(VAR_4->apb_base))
  return FUNC_1(VAR_4->apb_base);

 VAR_9 = FUNC_12(VAR_4);
 if (VAR_9)
  return VAR_9;

 VAR_4->lanes = 1;
 VAR_9 = FUNC_10(VAR_7, "num-lanes", &VAR_4->lanes);
 if (!VAR_9 && (VAR_4->lanes == 0 ||
       VAR_4->lanes == 3 ||
       VAR_4->lanes > 4)) {
  FUNC_3(VAR_5, "invalid num-lanes, default to use one lane\n");
  VAR_4->lanes = 1;
 }

 VAR_4->link_gen = FUNC_9(VAR_7);
 if (VAR_4->link_gen < 0 || VAR_4->link_gen > 2)
  VAR_4->link_gen = 2;

 VAR_4->core_rst = FUNC_8(VAR_5, "core");
 if (FUNC_0(VAR_4->core_rst)) {
  if (FUNC_1(VAR_4->core_rst) != -VAR_1)
   FUNC_2(VAR_5, "missing core reset property in node\n");
  return FUNC_1(VAR_4->core_rst);
 }

 VAR_4->mgmt_rst = FUNC_8(VAR_5, "mgmt");
 if (FUNC_0(VAR_4->mgmt_rst)) {
  if (FUNC_1(VAR_4->mgmt_rst) != -VAR_1)
   FUNC_2(VAR_5, "missing mgmt reset property in node\n");
  return FUNC_1(VAR_4->mgmt_rst);
 }

 VAR_4->mgmt_sticky_rst = FUNC_8(VAR_5,
             "mgmt-sticky");
 if (FUNC_0(VAR_4->mgmt_sticky_rst)) {
  if (FUNC_1(VAR_4->mgmt_sticky_rst) != -VAR_1)
   FUNC_2(VAR_5, "missing mgmt-sticky reset property in node\n");
  return FUNC_1(VAR_4->mgmt_sticky_rst);
 }

 VAR_4->pipe_rst = FUNC_8(VAR_5, "pipe");
 if (FUNC_0(VAR_4->pipe_rst)) {
  if (FUNC_1(VAR_4->pipe_rst) != -VAR_1)
   FUNC_2(VAR_5, "missing pipe reset property in node\n");
  return FUNC_1(VAR_4->pipe_rst);
 }

 VAR_4->pm_rst = FUNC_8(VAR_5, "pm");
 if (FUNC_0(VAR_4->pm_rst)) {
  if (FUNC_1(VAR_4->pm_rst) != -VAR_1)
   FUNC_2(VAR_5, "missing pm reset property in node\n");
  return FUNC_1(VAR_4->pm_rst);
 }

 VAR_4->pclk_rst = FUNC_8(VAR_5, "pclk");
 if (FUNC_0(VAR_4->pclk_rst)) {
  if (FUNC_1(VAR_4->pclk_rst) != -VAR_1)
   FUNC_2(VAR_5, "missing pclk reset property in node\n");
  return FUNC_1(VAR_4->pclk_rst);
 }

 VAR_4->aclk_rst = FUNC_8(VAR_5, "aclk");
 if (FUNC_0(VAR_4->aclk_rst)) {
  if (FUNC_1(VAR_4->aclk_rst) != -VAR_1)
   FUNC_2(VAR_5, "missing aclk reset property in node\n");
  return FUNC_1(VAR_4->aclk_rst);
 }

 if (VAR_4->is_rc) {
  VAR_4->ep_gpio = FUNC_5(VAR_5, "ep", VAR_2);
  if (FUNC_0(VAR_4->ep_gpio)) {
   FUNC_2(VAR_5, "missing ep-gpios property in node\n");
   return FUNC_1(VAR_4->ep_gpio);
  }
 }

 VAR_4->aclk_pcie = FUNC_4(VAR_5, "aclk");
 if (FUNC_0(VAR_4->aclk_pcie)) {
  FUNC_2(VAR_5, "aclk clock not found\n");
  return FUNC_1(VAR_4->aclk_pcie);
 }

 VAR_4->aclk_perf_pcie = FUNC_4(VAR_5, "aclk-perf");
 if (FUNC_0(VAR_4->aclk_perf_pcie)) {
  FUNC_2(VAR_5, "aclk_perf clock not found\n");
  return FUNC_1(VAR_4->aclk_perf_pcie);
 }

 VAR_4->hclk_pcie = FUNC_4(VAR_5, "hclk");
 if (FUNC_0(VAR_4->hclk_pcie)) {
  FUNC_2(VAR_5, "hclk clock not found\n");
  return FUNC_1(VAR_4->hclk_pcie);
 }

 VAR_4->clk_pcie_pm = FUNC_4(VAR_5, "pm");
 if (FUNC_0(VAR_4->clk_pcie_pm)) {
  FUNC_2(VAR_5, "pm clock not found\n");
  return FUNC_1(VAR_4->clk_pcie_pm);
 }

 return 0;
}
