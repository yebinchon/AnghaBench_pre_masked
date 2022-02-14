
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct hisi_hba {int refclk_frequency_mhz; int queue_count; int n_phy; int ctrl_clock_ena_reg; int ctrl_reset_sts_reg; int ctrl_reset_reg; struct clk* ctrl; int sas_addr; struct platform_device* platform_dev; struct device* dev; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int VAR_1 ;
 int FUNC_1 (struct clk*) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,char*) ;
 scalar_t__ FUNC_4 (struct device*,char*,int *) ;
 scalar_t__ FUNC_5 (struct device*,char*,int ,int ) ;
 struct clk* FUNC_6 (struct device*,int *) ;
 struct clk* FUNC_7 (struct device_node*,char*) ;

int FUNC_8(struct hisi_hba *VAR_2)
{
 struct device *VAR_3 = VAR_2->dev;
 struct platform_device *VAR_4 = VAR_2->platform_dev;
 struct device_node *VAR_5 = VAR_4 ? VAR_4->dev.of_node : ((void*)0);
 struct clk *VAR_6;

 if (FUNC_5(VAR_3, "sas-addr", VAR_2->sas_addr,
       VAR_1)) {
  FUNC_3(VAR_3, "could not get property sas-addr\n");
  return -VAR_0;
 }

 if (VAR_5) {




  VAR_2->ctrl = FUNC_7(VAR_5,
     "hisilicon,sas-syscon");
  if (FUNC_0(VAR_2->ctrl)) {
   FUNC_3(VAR_3, "could not get syscon\n");
   return -VAR_0;
  }

  if (FUNC_4(VAR_3, "ctrl-reset-reg",
          &VAR_2->ctrl_reset_reg)) {
   FUNC_3(VAR_3, "could not get property ctrl-reset-reg\n");
   return -VAR_0;
  }

  if (FUNC_4(VAR_3, "ctrl-reset-sts-reg",
          &VAR_2->ctrl_reset_sts_reg)) {
   FUNC_3(VAR_3, "could not get property ctrl-reset-sts-reg\n");
   return -VAR_0;
  }

  if (FUNC_4(VAR_3, "ctrl-clock-ena-reg",
          &VAR_2->ctrl_clock_ena_reg)) {
   FUNC_3(VAR_3, "could not get property ctrl-clock-ena-reg\n");
   return -VAR_0;
  }
 }

 VAR_6 = FUNC_6(VAR_3, ((void*)0));
 if (FUNC_0(VAR_6))
  FUNC_2(VAR_3, "no ref clk property\n");
 else
  VAR_2->refclk_frequency_mhz = FUNC_1(VAR_6) / 1000000;

 if (FUNC_4(VAR_3, "phy-count", &VAR_2->n_phy)) {
  FUNC_3(VAR_3, "could not get property phy-count\n");
  return -VAR_0;
 }

 if (FUNC_4(VAR_3, "queue-count",
         &VAR_2->queue_count)) {
  FUNC_3(VAR_3, "could not get property queue-count\n");
  return -VAR_0;
 }

 return 0;
}
