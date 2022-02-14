
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct z2_charger {int bat_status; int work_lock; TYPE_2__* batt_ps; struct z2_battery_info* info; } ;
struct z2_battery_info {scalar_t__ charge_gpio; } ;
struct TYPE_4__ {TYPE_1__* desc; } ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (char*,int ,int,int) ;

__attribute__((used)) static void FUNC_5(struct z2_charger *VAR_3)
{
 int VAR_4 = VAR_3->bat_status;
 struct z2_battery_info *VAR_5;

 VAR_5 = VAR_3->info;

 FUNC_1(&VAR_3->work_lock);

 VAR_3->bat_status = (VAR_5->charge_gpio >= 0) ?
  (FUNC_0(VAR_5->charge_gpio) ?
  VAR_0 :
  VAR_1) :
  VAR_2;

 if (VAR_4 != VAR_3->bat_status) {
  FUNC_4("%s: %i -> %i\n", VAR_3->batt_ps->desc->name,
    VAR_4,
    VAR_3->bat_status);
  FUNC_3(VAR_3->batt_ps);
 }

 FUNC_2(&VAR_3->work_lock);
}
