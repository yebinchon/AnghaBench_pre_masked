
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct st_rproc {void* clk; int boot_offset; void* boot_base; int clk_rate; void* pwr_reset; TYPE_1__* config; void* sw_reset; } ;
struct rproc {struct st_rproc* priv; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {scalar_t__ pwr_reset; scalar_t__ sw_reset; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (struct device*,char*) ;
 void* FUNC_4 (struct device*,int *) ;
 void* FUNC_5 (struct device*,char*) ;
 int FUNC_6 (struct device_node*,char*,int *) ;
 int FUNC_7 (struct device_node*,char*,int,int *) ;
 struct rproc* FUNC_8 (struct platform_device*) ;
 void* FUNC_9 (struct device_node*,char*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_1)
{
 struct device *VAR_2 = &VAR_1->dev;
 struct rproc *VAR_3 = FUNC_8(VAR_1);
 struct st_rproc *VAR_4 = VAR_3->priv;
 struct device_node *VAR_5 = VAR_2->of_node;
 int VAR_6;

 if (VAR_4->config->sw_reset) {
  VAR_4->sw_reset = FUNC_5(VAR_2,
           "sw_reset");
  if (FUNC_0(VAR_4->sw_reset)) {
   FUNC_3(VAR_2, "Failed to get S/W Reset\n");
   return FUNC_1(VAR_4->sw_reset);
  }
 }

 if (VAR_4->config->pwr_reset) {
  VAR_4->pwr_reset = FUNC_5(VAR_2,
            "pwr_reset");
  if (FUNC_0(VAR_4->pwr_reset)) {
   FUNC_3(VAR_2, "Failed to get Power Reset\n");
   return FUNC_1(VAR_4->pwr_reset);
  }
 }

 VAR_4->clk = FUNC_4(VAR_2, ((void*)0));
 if (FUNC_0(VAR_4->clk)) {
  FUNC_3(VAR_2, "Failed to get clock\n");
  return FUNC_1(VAR_4->clk);
 }

 VAR_6 = FUNC_6(VAR_5, "clock-frequency", &VAR_4->clk_rate);
 if (VAR_6) {
  FUNC_3(VAR_2, "failed to get clock frequency\n");
  return VAR_6;
 }

 VAR_4->boot_base = FUNC_9(VAR_5, "st,syscfg");
 if (FUNC_0(VAR_4->boot_base)) {
  FUNC_3(VAR_2, "Boot base not found\n");
  return FUNC_1(VAR_4->boot_base);
 }

 VAR_6 = FUNC_7(VAR_5, "st,syscfg", 1,
      &VAR_4->boot_offset);
 if (VAR_6) {
  FUNC_3(VAR_2, "Boot offset not found\n");
  return -VAR_0;
 }

 VAR_6 = FUNC_2(VAR_4->clk);
 if (VAR_6)
  FUNC_3(VAR_2, "failed to get clock\n");

 return VAR_6;
}
