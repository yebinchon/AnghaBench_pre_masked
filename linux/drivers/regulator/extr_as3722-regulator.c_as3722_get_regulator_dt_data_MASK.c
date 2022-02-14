
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_9__ {struct device_node* of_node; TYPE_1__* parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct device_node {int dummy; } ;
struct as3722_regulators {struct as3722_regulator_config_data* reg_config_data; } ;
struct as3722_regulator_config_data {int ext_control; int enable_tracking; int reg_init; } ;
struct TYPE_10__ {struct device_node* of_node; int init_data; } ;
struct TYPE_8__ {int of_node; } ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_1 (TYPE_2__*,char*,...) ;
 int FUNC_2 (TYPE_2__*,char*,int) ;
 struct device_node* FUNC_3 (int ,char*) ;
 int FUNC_4 (struct device_node*) ;
 int FUNC_5 (struct device_node*,char*) ;
 int FUNC_6 (struct device_node*,char*,int*) ;
 int FUNC_7 (TYPE_2__*,struct device_node*,TYPE_3__*,int) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_2,
  struct as3722_regulators *VAR_3)
{
 struct device_node *VAR_4;
 struct as3722_regulator_config_data *VAR_5;
 u32 VAR_6;
 int VAR_7;
 int VAR_8;

 VAR_4 = FUNC_3(VAR_2->dev.parent->of_node, "regulators");
 if (!VAR_4) {
  FUNC_1(&VAR_2->dev, "Device is not having regulators node\n");
  return -VAR_0;
 }
 VAR_2->dev.of_node = VAR_4;

 VAR_8 = FUNC_7(&VAR_2->dev, VAR_4, VAR_1,
   FUNC_0(VAR_1));
 FUNC_4(VAR_4);
 if (VAR_8 < 0) {
  FUNC_1(&VAR_2->dev, "Parsing of regulator node failed: %d\n",
   VAR_8);
  return VAR_8;
 }

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_1); ++VAR_7) {
  struct device_node *VAR_9;

  VAR_5 = &VAR_3->reg_config_data[VAR_7];
  VAR_5->reg_init = VAR_1[VAR_7].init_data;
  VAR_9 = VAR_1[VAR_7].of_node;

  if (!VAR_5->reg_init || !VAR_9)
   continue;

  VAR_8 = FUNC_6(VAR_9, "ams,ext-control", &VAR_6);
  if (!VAR_8) {
   if (VAR_6 < 3)
    VAR_5->ext_control = VAR_6;
   else
    FUNC_2(&VAR_2->dev,
     "ext-control have invalid option: %u\n",
     VAR_6);
  }
  VAR_5->enable_tracking =
   FUNC_5(VAR_9, "ams,enable-tracking");
 }
 return 0;
}
