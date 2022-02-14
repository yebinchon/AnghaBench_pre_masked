
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ min_uV; scalar_t__ max_uV; scalar_t__ boot_on; int name; scalar_t__ apply_uV; } ;
struct regulator_init_data {TYPE_1__ constraints; } ;
struct regulator_desc {int dummy; } ;
struct fixed_voltage_config {scalar_t__ microvolts; int enabled_at_boot; char* input_supply; int startup_delay; int supply_name; struct regulator_init_data* init_data; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct fixed_voltage_config* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct device*,char*) ;
 struct fixed_voltage_config* FUNC_2 (struct device*,int,int ) ;
 scalar_t__ FUNC_3 (struct device_node*,char*,int *) ;
 struct regulator_init_data* FUNC_4 (struct device*,struct device_node*,struct regulator_desc const*) ;
 int FUNC_5 (struct device_node*,char*,int *) ;

__attribute__((used)) static struct fixed_voltage_config *
FUNC_6(struct device *VAR_3,
       const struct regulator_desc *VAR_4)
{
 struct fixed_voltage_config *VAR_5;
 struct device_node *VAR_6 = VAR_3->of_node;
 struct regulator_init_data *VAR_7;

 VAR_5 = FUNC_2(VAR_3, sizeof(struct fixed_voltage_config),
         VAR_2);
 if (!VAR_5)
  return FUNC_0(-VAR_1);

 VAR_5->init_data = FUNC_4(VAR_3, VAR_3->of_node, VAR_4);
 if (!VAR_5->init_data)
  return FUNC_0(-VAR_0);

 VAR_7 = VAR_5->init_data;
 VAR_7->constraints.apply_uV = 0;

 VAR_5->supply_name = VAR_7->constraints.name;
 if (VAR_7->constraints.min_uV == VAR_7->constraints.max_uV) {
  VAR_5->microvolts = VAR_7->constraints.min_uV;
 } else {
  FUNC_1(VAR_3,
    "Fixed regulator specified with variable voltages\n");
  return FUNC_0(-VAR_0);
 }

 if (VAR_7->constraints.boot_on)
  VAR_5->enabled_at_boot = 1;

 FUNC_5(VAR_6, "startup-delay-us", &VAR_5->startup_delay);

 if (FUNC_3(VAR_6, "vin-supply", ((void*)0)))
  VAR_5->input_supply = "vin";

 return VAR_5;
}
