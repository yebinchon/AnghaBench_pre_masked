
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_client {int dummy; } ;
typedef scalar_t__ s32 ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;
struct TYPE_2__ {int addr; } ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 (struct i2c_client*,int ,char*) ;

__attribute__((used)) static int FUNC_1(struct i2c_client *VAR_1,
 int VAR_2, enum power_supply_property VAR_3, char *VAR_4)
{
 s32 VAR_5;

 VAR_5 = FUNC_0(VAR_1, VAR_0[VAR_2].addr, VAR_4);

 if (VAR_5 < 0)
  return VAR_5;

 return 0;
}
