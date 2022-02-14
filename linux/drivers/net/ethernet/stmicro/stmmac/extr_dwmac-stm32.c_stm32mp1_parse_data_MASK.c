
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_dwmac {int irq_pwr_wakeup; int * clk_eth_ck; int * syscfg_clk; int * clk_ethstp; void* eth_ref_clk_sel_reg; void* eth_clk_sel_reg; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,int) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*,int) ;
 int FUNC_6 (struct device*,int) ;
 void* FUNC_7 (struct device*,char*) ;
 void* FUNC_8 (struct device_node*,char*) ;
 int FUNC_9 (struct platform_device*,char*) ;
 struct platform_device* FUNC_10 (struct device*) ;

__attribute__((used)) static int FUNC_11(struct stm32_dwmac *VAR_1,
          struct device *VAR_2)
{
 struct platform_device *VAR_3 = FUNC_10(VAR_2);
 struct device_node *VAR_4 = VAR_2->of_node;
 int VAR_5 = 0;


 VAR_1->eth_clk_sel_reg = FUNC_8(VAR_4, "st,eth-clk-sel");


 VAR_1->eth_ref_clk_sel_reg =
  FUNC_8(VAR_4, "st,eth-ref-clk-sel");


 VAR_1->clk_eth_ck = FUNC_7(VAR_2, "eth-ck");
 if (FUNC_0(VAR_1->clk_eth_ck)) {
  FUNC_4(VAR_2, "No phy clock provided...\n");
  VAR_1->clk_eth_ck = ((void*)0);
 }


 VAR_1->clk_ethstp = FUNC_7(VAR_2, "ethstp");
 if (FUNC_0(VAR_1->clk_ethstp)) {
  FUNC_2(VAR_2,
   "No ETH peripheral clock provided for CStop mode ...\n");
  return FUNC_1(VAR_1->clk_ethstp);
 }


 VAR_1->syscfg_clk = FUNC_7(VAR_2, "syscfg-clk");
 if (FUNC_0(VAR_1->syscfg_clk)) {
  FUNC_2(VAR_2, "No syscfg clock provided...\n");
  return FUNC_1(VAR_1->syscfg_clk);
 }




 VAR_1->irq_pwr_wakeup = FUNC_9(VAR_3,
       "stm32_pwr_wakeup");
 if (VAR_1->irq_pwr_wakeup == -VAR_0)
  return -VAR_0;

 if (!VAR_1->clk_eth_ck && VAR_1->irq_pwr_wakeup >= 0) {
  VAR_5 = FUNC_5(&VAR_3->dev, 1);
  if (VAR_5) {
   FUNC_2(&VAR_3->dev, "Failed to init wake up irq\n");
   return VAR_5;
  }
  VAR_5 = FUNC_3(&VAR_3->dev,
          VAR_1->irq_pwr_wakeup);
  if (VAR_5) {
   FUNC_2(&VAR_3->dev, "Failed to set wake up irq\n");
   FUNC_5(&VAR_3->dev, 0);
  }
  FUNC_6(&VAR_3->dev, 0);
 }
 return VAR_5;
}
