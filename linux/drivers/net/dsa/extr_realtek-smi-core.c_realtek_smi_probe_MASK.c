
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct realtek_smi_variant {int ds_ops; TYPE_1__* ops; int cmd_write; int cmd_read; int clk_delay; } ;
struct realtek_smi {TYPE_2__* ds; int num_ports; TYPE_1__* ops; int leds_disabled; void* mdio; void* mdc; void* reset; int lock; int cmd_write; int cmd_read; int clk_delay; struct device* dev; void* map; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct device_node {int dummy; } ;
struct TYPE_5__ {int ops; struct realtek_smi* priv; } ;
struct TYPE_4__ {int (* detect ) (struct realtek_smi*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,struct realtek_smi*) ;
 void* FUNC_5 (struct device*,char*,int ) ;
 struct realtek_smi* FUNC_6 (struct device*,int,int ) ;
 void* FUNC_7 (struct device*,int *,struct realtek_smi*,int *) ;
 int FUNC_8 (TYPE_2__*) ;
 TYPE_2__* FUNC_9 (struct device*,int ) ;
 int FUNC_10 (void*,int ) ;
 int FUNC_11 (int ) ;
 struct realtek_smi_variant* FUNC_12 (struct device*) ;
 int FUNC_13 (struct device_node*,char*) ;
 int VAR_6 ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct realtek_smi*) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_7)
{
 const struct realtek_smi_variant *VAR_8;
 struct device *VAR_9 = &VAR_7->dev;
 struct realtek_smi *VAR_10;
 struct device_node *VAR_11;
 int VAR_12;

 VAR_8 = FUNC_12(VAR_9);
 VAR_11 = VAR_9->of_node;

 VAR_10 = FUNC_6(VAR_9, sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;
 VAR_10->map = FUNC_7(VAR_9, ((void*)0), VAR_10,
        &VAR_6);
 if (FUNC_0(VAR_10->map)) {
  VAR_12 = FUNC_1(VAR_10->map);
  FUNC_2(VAR_9, "regmap init failed: %d\n", VAR_12);
  return VAR_12;
 }


 VAR_10->dev = VAR_9;
 VAR_10->clk_delay = VAR_8->clk_delay;
 VAR_10->cmd_read = VAR_8->cmd_read;
 VAR_10->cmd_write = VAR_8->cmd_write;
 VAR_10->ops = VAR_8->ops;

 FUNC_4(VAR_9, VAR_10);
 FUNC_14(&VAR_10->lock);




 VAR_10->reset = FUNC_5(VAR_9, "reset", VAR_2);
 if (FUNC_0(VAR_10->reset)) {
  FUNC_2(VAR_9, "failed to get RESET GPIO\n");
  return FUNC_1(VAR_10->reset);
 }
 FUNC_11(VAR_5);
 FUNC_10(VAR_10->reset, 0);
 FUNC_11(VAR_4);
 FUNC_3(VAR_9, "deasserted RESET\n");


 VAR_10->mdc = FUNC_5(VAR_9, "mdc", VAR_3);
 if (FUNC_0(VAR_10->mdc))
  return FUNC_1(VAR_10->mdc);
 VAR_10->mdio = FUNC_5(VAR_9, "mdio", VAR_3);
 if (FUNC_0(VAR_10->mdio))
  return FUNC_1(VAR_10->mdio);

 VAR_10->leds_disabled = FUNC_13(VAR_11, "realtek,disable-leds");

 VAR_12 = VAR_10->ops->detect(VAR_10);
 if (VAR_12) {
  FUNC_2(VAR_9, "unable to detect switch\n");
  return VAR_12;
 }

 VAR_10->ds = FUNC_9(VAR_9, VAR_10->num_ports);
 if (!VAR_10->ds)
  return -VAR_0;
 VAR_10->ds->priv = VAR_10;

 VAR_10->ds->ops = VAR_8->ds_ops;
 VAR_12 = FUNC_8(VAR_10->ds);
 if (VAR_12) {
  FUNC_2(VAR_9, "unable to register switch ret = %d\n", VAR_12);
  return VAR_12;
 }
 return 0;
}
