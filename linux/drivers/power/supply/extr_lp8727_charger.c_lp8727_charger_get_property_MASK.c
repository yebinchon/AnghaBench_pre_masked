
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union power_supply_propval {int intval; } ;
struct TYPE_3__ {int parent; } ;
struct power_supply {TYPE_2__* desc; TYPE_1__ dev; } ;
struct lp8727_chg {int devid; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;
struct TYPE_4__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct lp8727_chg* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct power_supply *VAR_2,
           enum power_supply_property VAR_3,
           union power_supply_propval *VAR_4)
{
 struct lp8727_chg *VAR_5 = FUNC_0(VAR_2->dev.parent);

 if (VAR_3 != VAR_1)
  return -VAR_0;

 VAR_4->intval = FUNC_1(VAR_2->desc->name, VAR_5->devid);

 return 0;
}
