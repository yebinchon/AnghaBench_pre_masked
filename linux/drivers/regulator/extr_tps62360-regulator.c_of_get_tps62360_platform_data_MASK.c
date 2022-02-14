
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tps62360_regulator_platform_data {int vsel0_def_state; int vsel1_def_state; int en_internal_pulldn; int en_discharge; void* vsel1_gpio; void* vsel0_gpio; int reg_init_data; } ;
struct regulator_desc {int dummy; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 struct tps62360_regulator_platform_data* FUNC_1 (struct device*,int,int ) ;
 scalar_t__ FUNC_2 (struct device_node*,char*,int *) ;
 void* FUNC_3 (struct device_node*,char*,int ) ;
 int FUNC_4 (struct device*,struct device_node*,struct regulator_desc const*) ;

__attribute__((used)) static struct tps62360_regulator_platform_data *
 FUNC_5(struct device *VAR_1,
          const struct regulator_desc *VAR_2)
{
 struct tps62360_regulator_platform_data *VAR_3;
 struct device_node *VAR_4 = VAR_1->of_node;

 VAR_3 = FUNC_1(VAR_1, sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 VAR_3->reg_init_data = FUNC_4(VAR_1, VAR_1->of_node,
         VAR_2);
 if (!VAR_3->reg_init_data) {
  FUNC_0(VAR_1, "Not able to get OF regulator init data\n");
  return ((void*)0);
 }

 VAR_3->vsel0_gpio = FUNC_3(VAR_4, "vsel0-gpio", 0);
 VAR_3->vsel1_gpio = FUNC_3(VAR_4, "vsel1-gpio", 0);

 if (FUNC_2(VAR_4, "ti,vsel0-state-high", ((void*)0)))
  VAR_3->vsel0_def_state = 1;

 if (FUNC_2(VAR_4, "ti,vsel1-state-high", ((void*)0)))
  VAR_3->vsel1_def_state = 1;

 if (FUNC_2(VAR_4, "ti,enable-pull-down", ((void*)0)))
  VAR_3->en_internal_pulldn = 1;

 if (FUNC_2(VAR_4, "ti,enable-vout-discharge", ((void*)0)))
  VAR_3->en_discharge = 1;

 return VAR_3;
}
