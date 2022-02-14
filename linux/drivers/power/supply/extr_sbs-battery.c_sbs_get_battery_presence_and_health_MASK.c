
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union power_supply_propval {int intval; } ;
struct i2c_client {int dummy; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;
struct TYPE_2__ {int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (struct i2c_client*,int ) ;

__attribute__((used)) static int FUNC_1(
 struct i2c_client *VAR_4, enum power_supply_property VAR_5,
 union power_supply_propval *VAR_6)
{
 int VAR_7;


 VAR_7 = FUNC_0(VAR_4, VAR_3[VAR_2].addr);

 if (VAR_7 < 0) {
  if (VAR_5 == VAR_1) {
   VAR_6->intval = 0;
   return 0;
  }
  return VAR_7;
 }

 if (VAR_5 == VAR_1)
  VAR_6->intval = 1;
 else

  VAR_6->intval = VAR_0;

 return 0;
}
