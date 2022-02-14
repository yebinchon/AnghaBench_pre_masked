
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct regulator_consumer_supply {int dummy; } ;
struct TYPE_8__ {int release; TYPE_3__* platform_data; } ;
struct platform_device {char* name; int id; TYPE_4__ dev; } ;
struct TYPE_7__ {int microvolts; int enabled_at_boot; TYPE_2__* init_data; int supply_name; } ;
struct TYPE_5__ {int always_on; } ;
struct TYPE_6__ {int num_consumer_supplies; struct regulator_consumer_supply* consumer_supplies; TYPE_1__ constraints; } ;
struct fixed_regulator_data {struct platform_device pdev; TYPE_3__ cfg; TYPE_2__ init_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct fixed_regulator_data*) ;
 int FUNC_1 (char const*,int ) ;
 struct fixed_regulator_data* FUNC_2 (int,int ) ;
 int FUNC_3 (struct platform_device*) ;
 int VAR_1 ;

struct platform_device *FUNC_4(int VAR_2, const char *VAR_3,
 struct regulator_consumer_supply *VAR_4, int VAR_5, int VAR_6)
{
 struct fixed_regulator_data *VAR_7;

 VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_0);
 if (!VAR_7)
  return ((void*)0);

 VAR_7->cfg.supply_name = FUNC_1(VAR_3, VAR_0);
 if (!VAR_7->cfg.supply_name) {
  FUNC_0(VAR_7);
  return ((void*)0);
 }

 VAR_7->cfg.microvolts = VAR_6;
 VAR_7->cfg.enabled_at_boot = 1;
 VAR_7->cfg.init_data = &VAR_7->init_data;

 VAR_7->init_data.constraints.always_on = 1;
 VAR_7->init_data.consumer_supplies = VAR_4;
 VAR_7->init_data.num_consumer_supplies = VAR_5;

 VAR_7->pdev.name = "reg-fixed-voltage";
 VAR_7->pdev.id = VAR_2;
 VAR_7->pdev.dev.platform_data = &VAR_7->cfg;
 VAR_7->pdev.dev.release = VAR_1;

 FUNC_3(&VAR_7->pdev);

 return &VAR_7->pdev;
}
