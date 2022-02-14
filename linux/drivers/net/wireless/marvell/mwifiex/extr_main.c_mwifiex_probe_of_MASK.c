
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mwifiex_adapter {int irq_wakeup; scalar_t__ dt_node; struct device* dev; } ;
struct device {scalar_t__ of_node; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*,...) ;
 scalar_t__ FUNC_2 (struct device*,int) ;
 int FUNC_3 (struct device*,int,int ,int ,char*,struct mwifiex_adapter*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (scalar_t__,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_6(struct mwifiex_adapter *VAR_2)
{
 int VAR_3;
 struct device *VAR_4 = VAR_2->dev;

 if (!VAR_4->of_node)
  goto err_exit;

 VAR_2->dt_node = VAR_4->of_node;
 VAR_2->irq_wakeup = FUNC_5(VAR_2->dt_node, 0);
 if (!VAR_2->irq_wakeup) {
  FUNC_0(VAR_4, "fail to parse irq_wakeup from device tree\n");
  goto err_exit;
 }

 VAR_3 = FUNC_3(VAR_4, VAR_2->irq_wakeup,
          VAR_1, VAR_0,
          "wifi_wake", VAR_2);
 if (VAR_3) {
  FUNC_1(VAR_4, "Failed to request irq_wakeup %d (%d)\n",
   VAR_2->irq_wakeup, VAR_3);
  goto err_exit;
 }

 FUNC_4(VAR_2->irq_wakeup);
 if (FUNC_2(VAR_4, 1)) {
  FUNC_1(VAR_4, "fail to init wakeup for mwifiex\n");
  goto err_exit;
 }
 return;

err_exit:
 VAR_2->irq_wakeup = -1;
}
