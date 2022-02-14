
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
struct aspeed_p2a_ctrl {TYPE_2__ miscdev; int config; int regmap; int mem_base; int mem_size; int tracking; } ;
struct TYPE_3__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct aspeed_p2a_ctrl*) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,struct aspeed_p2a_ctrl*) ;
 struct aspeed_p2a_ctrl* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct device_node*,int ,struct resource*) ;
 int FUNC_8 (struct device*) ;
 int FUNC_9 (struct device_node*) ;
 struct device_node* FUNC_10 (int ,char*,int ) ;
 int FUNC_11 (struct resource*) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_6)
{
 struct aspeed_p2a_ctrl *VAR_7;
 struct device *VAR_8;
 struct resource VAR_9;
 struct device_node *VAR_10;
 int VAR_11 = 0;

 VAR_8 = &VAR_6->dev;

 VAR_7 = FUNC_4(VAR_8, sizeof(*VAR_7), VAR_3);
 if (!VAR_7)
  return -VAR_2;

 FUNC_6(&VAR_7->tracking);


 VAR_10 = FUNC_10(VAR_8->of_node, "memory-region", 0);
 if (VAR_10) {
  VAR_11 = FUNC_7(VAR_10, 0, &VAR_9);
  FUNC_9(VAR_10);
  if (VAR_11) {
   FUNC_2(VAR_8, "Couldn't address to resource for reserved memory\n");
   return -VAR_1;
  }

  VAR_7->mem_size = FUNC_11(&VAR_9);
  VAR_7->mem_base = VAR_9.start;
 }

 VAR_7->regmap = FUNC_12(VAR_6->dev.parent->of_node);
 if (FUNC_0(VAR_7->regmap)) {
  FUNC_2(VAR_8, "Couldn't get regmap\n");
  return -VAR_1;
 }

 VAR_7->config = FUNC_8(VAR_8);

 FUNC_3(&VAR_6->dev, VAR_7);

 FUNC_1(VAR_7);

 VAR_7->miscdev.minor = VAR_4;
 VAR_7->miscdev.name = VAR_0;
 VAR_7->miscdev.fops = &VAR_5;
 VAR_7->miscdev.parent = VAR_8;

 VAR_11 = FUNC_5(&VAR_7->miscdev);
 if (VAR_11)
  FUNC_2(VAR_8, "Unable to register device\n");

 return VAR_11;
}
