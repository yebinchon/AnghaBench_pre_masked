
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct z2_charger* properties; } ;
struct z2_charger {TYPE_1__ batt_ps_desc; int batt_ps; int bat_work; struct z2_battery_info* info; } ;
struct z2_battery_info {scalar_t__ charge_gpio; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct z2_charger*) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 struct z2_charger* FUNC_5 (struct i2c_client*) ;
 int FUNC_6 (struct z2_charger*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_0)
{
 struct z2_charger *VAR_1 = FUNC_5(VAR_0);
 struct z2_battery_info *VAR_2 = VAR_1->info;

 FUNC_0(&VAR_1->bat_work);
 FUNC_7(VAR_1->batt_ps);

 FUNC_6(VAR_1->batt_ps_desc.properties);
 if (VAR_2->charge_gpio >= 0 && FUNC_3(VAR_2->charge_gpio)) {
  FUNC_1(FUNC_4(VAR_2->charge_gpio), VAR_1);
  FUNC_2(VAR_2->charge_gpio);
 }

 FUNC_6(VAR_1);

 return 0;
}
