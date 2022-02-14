
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union power_supply_propval {int intval; } ;
typedef int u8 ;
struct power_supply {int dummy; } ;
struct i2c_client {int dummy; } ;
struct charger_data {TYPE_1__* iodev; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;
struct TYPE_2__ {struct i2c_client* i2c; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int FUNC_0 (struct i2c_client*,int ,int*) ;
 struct charger_data* FUNC_1 (struct power_supply*) ;

__attribute__((used)) static int FUNC_2(struct power_supply *VAR_3,
  enum power_supply_property VAR_4,
  union power_supply_propval *VAR_5)
{
 struct charger_data *VAR_6 = FUNC_1(VAR_3);
 struct i2c_client *VAR_7 = VAR_6->iodev->i2c;
 int VAR_8;
 u8 VAR_9;

 switch (VAR_4) {
 case 128:
  VAR_5->intval = 0;
  VAR_8 = FUNC_0(VAR_7, VAR_1, &VAR_9);
  if (VAR_8)
   return VAR_8;
  if ((VAR_9 & (1 << 0)) == 0x1)
   VAR_5->intval = VAR_2;

  break;
 case 129:
  VAR_5->intval = 0;
  VAR_8 = FUNC_0(VAR_7, VAR_1, &VAR_9);
  if (VAR_8)
   return VAR_8;
  if ((VAR_9 & (1 << 2)) == 0x0)
   VAR_5->intval = 1;

  break;
 case 130:
  VAR_5->intval = 0;
  VAR_8 = FUNC_0(VAR_7, VAR_1, &VAR_9);
  if (VAR_8)
   return VAR_8;

  if (VAR_9 & (1 << 1))
   VAR_5->intval = 1;

  break;
 default:
  return -VAR_0;
 }

 return 0;
}
