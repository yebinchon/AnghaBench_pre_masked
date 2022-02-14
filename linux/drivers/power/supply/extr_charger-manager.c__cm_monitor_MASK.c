
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int work; } ;
struct charger_manager {int emergency_stop; TYPE_1__ fullbatt_vchk_work; int dev; scalar_t__ charger_enabled; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (struct charger_manager*) ;
 int FUNC_1 (struct charger_manager*) ;
 char** VAR_1 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct charger_manager*) ;
 scalar_t__ FUNC_6 (struct charger_manager*) ;
 int FUNC_7 (struct charger_manager*,int) ;
 int FUNC_8 (struct charger_manager*,char*) ;

__attribute__((used)) static bool FUNC_9(struct charger_manager *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2);


 if (VAR_3 && VAR_2->emergency_stop)
  return 0;





 if (VAR_3) {
  VAR_2->emergency_stop = VAR_3;
  if (!FUNC_7(VAR_2, 0))
   FUNC_8(VAR_2, VAR_1[VAR_3]);





 } else if (!VAR_2->emergency_stop && FUNC_0(VAR_2)) {
  FUNC_2(VAR_2->dev,
   "Charging/Discharging duration is out of range\n");





 } else if (!VAR_2->emergency_stop && FUNC_5(VAR_2) &&
   !VAR_2->charger_enabled) {
  FUNC_4(&VAR_2->fullbatt_vchk_work.work);





 } else if (!VAR_2->emergency_stop && FUNC_6(VAR_2) &&
   VAR_2->charger_enabled) {
  FUNC_3(VAR_2->dev, "EVENT_HANDLE: Battery Fully Charged\n");
  FUNC_8(VAR_2, VAR_1[VAR_0]);

  FUNC_7(VAR_2, 0);

  FUNC_4(&VAR_2->fullbatt_vchk_work.work);
 } else {
  VAR_2->emergency_stop = 0;
  if (FUNC_5(VAR_2)) {
   if (!FUNC_7(VAR_2, 1))
    FUNC_8(VAR_2, "CHARGING");
  }
 }

 return 1;
}
