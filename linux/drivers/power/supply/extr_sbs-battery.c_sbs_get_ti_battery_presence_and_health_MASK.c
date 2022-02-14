
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union power_supply_propval {int intval; } ;
struct i2c_client {int dummy; } ;
typedef int s32 ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;
struct TYPE_2__ {int min_value; int max_value; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 TYPE_1__* VAR_8 ;
 int FUNC_0 (struct i2c_client*,int ) ;
 int FUNC_1 (struct i2c_client*,int ,int ) ;

__attribute__((used)) static int FUNC_2(
 struct i2c_client *VAR_9, enum power_supply_property VAR_10,
 union power_supply_propval *VAR_11)
{
 s32 VAR_12;





 VAR_12 = FUNC_1(VAR_9, VAR_8[VAR_7].addr,
      VAR_0);
 if (VAR_12 < 0) {
  if (VAR_10 == VAR_6)
   VAR_11->intval = 0;
  return VAR_12;
 }

 VAR_12 = FUNC_0(VAR_9, VAR_8[VAR_7].addr);
 if (VAR_12 < 0) {
  if (VAR_10 == VAR_6)
   VAR_11->intval = 0;
  return VAR_12;
 }

 if (VAR_12 < VAR_8[VAR_7].min_value ||
     VAR_12 > VAR_8[VAR_7].max_value) {
  VAR_11->intval = 0;
  return 0;
 }




 VAR_12 &= 0x0F00;
 VAR_12 >>= 8;
 if (VAR_10 == VAR_6) {
  if (VAR_12 == 0x0F)

   VAR_11->intval = 0;
  else
   VAR_11->intval = 1;
 } else if (VAR_10 == VAR_5) {
  if (VAR_12 == 0x09)
   VAR_11->intval = VAR_4;
  else if (VAR_12 == 0x0B)
   VAR_11->intval = VAR_3;
  else if (VAR_12 == 0x0C)
   VAR_11->intval = VAR_1;
  else
   VAR_11->intval = VAR_2;
 }

 return 0;
}
