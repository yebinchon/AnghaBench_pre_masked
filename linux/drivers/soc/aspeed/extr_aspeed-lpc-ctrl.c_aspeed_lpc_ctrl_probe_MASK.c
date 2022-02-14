
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct resource {int start; } ;
struct device {TYPE_1__* parent; int of_node; } ;
struct platform_device {struct device dev; } ;
struct device_node {int dummy; } ;
struct TYPE_4__ {struct device* parent; int * fops; int name; int minor; } ;
struct aspeed_lpc_ctrl {int clk; TYPE_2__ miscdev; int regmap; int mem_base; void* mem_size; int pnor_base; void* pnor_size; } ;
struct TYPE_3__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*,char*) ;
 int FUNC_6 (struct device*,struct aspeed_lpc_ctrl*) ;
 int FUNC_7 (struct device*,int *) ;
 struct aspeed_lpc_ctrl* FUNC_8 (struct device*,int,int ) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (struct device_node*,int,struct resource*) ;
 int FUNC_11 (struct device_node*) ;
 struct device_node* FUNC_12 (int ,char*,int ) ;
 void* FUNC_13 (struct resource*) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_7)
{
 struct aspeed_lpc_ctrl *VAR_8;
 struct device_node *VAR_9;
 struct resource VAR_10;
 struct device *VAR_11;
 int VAR_12;

 VAR_11 = &VAR_7->dev;

 VAR_8 = FUNC_8(VAR_11, sizeof(*VAR_8), VAR_4);
 if (!VAR_8)
  return -VAR_2;


 VAR_9 = FUNC_12(VAR_11->of_node, "flash", 0);
 if (!VAR_9) {
  FUNC_4(VAR_11, "Didn't find host pnor flash node\n");
 } else {
  VAR_12 = FUNC_10(VAR_9, 1, &VAR_10);
  FUNC_11(VAR_9);
  if (VAR_12) {
   FUNC_5(VAR_11, "Couldn't address to resource for flash\n");
   return VAR_12;
  }

  VAR_8->pnor_size = FUNC_13(&VAR_10);
  VAR_8->pnor_base = VAR_10.start;
 }


 FUNC_6(&VAR_7->dev, VAR_8);


 VAR_9 = FUNC_12(VAR_11->of_node, "memory-region", 0);
 if (!VAR_9) {
  FUNC_4(VAR_11, "Didn't find reserved memory\n");
 } else {
  VAR_12 = FUNC_10(VAR_9, 0, &VAR_10);
  FUNC_11(VAR_9);
  if (VAR_12) {
   FUNC_5(VAR_11, "Couldn't address to resource for reserved memory\n");
   return -VAR_3;
  }

  VAR_8->mem_size = FUNC_13(&VAR_10);
  VAR_8->mem_base = VAR_10.start;
 }

 VAR_8->regmap = FUNC_14(
   VAR_7->dev.parent->of_node);
 if (FUNC_0(VAR_8->regmap)) {
  FUNC_5(VAR_11, "Couldn't get regmap\n");
  return -VAR_1;
 }

 VAR_8->clk = FUNC_7(VAR_11, ((void*)0));
 if (FUNC_0(VAR_8->clk)) {
  FUNC_5(VAR_11, "couldn't get clock\n");
  return FUNC_1(VAR_8->clk);
 }
 VAR_12 = FUNC_3(VAR_8->clk);
 if (VAR_12) {
  FUNC_5(VAR_11, "couldn't enable clock\n");
  return VAR_12;
 }

 VAR_8->miscdev.minor = VAR_5;
 VAR_8->miscdev.name = VAR_0;
 VAR_8->miscdev.fops = &VAR_6;
 VAR_8->miscdev.parent = VAR_11;
 VAR_12 = FUNC_9(&VAR_8->miscdev);
 if (VAR_12) {
  FUNC_5(VAR_11, "Unable to register device\n");
  goto err;
 }

 return 0;

err:
 FUNC_2(VAR_8->clk);
 return VAR_12;
}
