
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union power_supply_propval {int strval; } ;
struct i2c_client {int dummy; } ;
struct TYPE_2__ {int addr; } ;


 size_t VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (struct i2c_client*,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_3,
 union power_supply_propval *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_3, VAR_1[VAR_0].addr);
 if (VAR_5 < 0)
  return VAR_5;

 FUNC_1(VAR_2, "%04x", VAR_5);
 VAR_4->strval = VAR_2;

 return 0;
}
