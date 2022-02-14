
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct TYPE_2__ {int nr_resets; int * ops; struct device_node* of_node; } ;
struct hi6220_reset_data {TYPE_1__ rc_dev; struct regmap* regmap; } ;
struct device_node {int dummy; } ;
typedef enum hi6220_reset_ctrl_type { ____Placeholder_hi6220_reset_ctrl_type } hi6220_reset_ctrl_type ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct regmap*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct regmap*) ;
 int FUNC_2 (struct device*,char*) ;
 struct hi6220_reset_data* FUNC_3 (struct device*,int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (struct device*) ;
 int FUNC_5 (TYPE_1__*) ;
 struct regmap* FUNC_6 (struct device_node*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_7)
{
 struct device_node *VAR_8 = VAR_7->dev.of_node;
 struct device *VAR_9 = &VAR_7->dev;
 enum hi6220_reset_ctrl_type VAR_10;
 struct hi6220_reset_data *VAR_11;
 struct regmap *VAR_12;

 VAR_11 = FUNC_3(VAR_9, sizeof(*VAR_11), VAR_1);
 if (!VAR_11)
  return -VAR_0;

 VAR_10 = (enum hi6220_reset_ctrl_type)FUNC_4(VAR_9);

 VAR_12 = FUNC_6(VAR_8);
 if (FUNC_0(VAR_12)) {
  FUNC_2(VAR_9, "failed to get reset controller regmap\n");
  return FUNC_1(VAR_12);
 }

 VAR_11->regmap = VAR_12;
 VAR_11->rc_dev.of_node = VAR_8;
 if (VAR_10 == VAR_2) {
  VAR_11->rc_dev.ops = &VAR_5;
  VAR_11->rc_dev.nr_resets = VAR_3;
 } else {
  VAR_11->rc_dev.ops = &VAR_6;
  VAR_11->rc_dev.nr_resets = VAR_4;
 }

 return FUNC_5(&VAR_11->rc_dev);
}
