
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct charger_manager {scalar_t__ charging_start_time; scalar_t__ charging_end_time; int dev; scalar_t__ charger_enabled; struct charger_desc* desc; } ;
struct charger_desc {scalar_t__ charging_max_duration_ms; scalar_t__ discharging_max_duration_ms; } ;


 int FUNC_0 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct charger_manager*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct charger_manager*,int) ;
 int FUNC_5 (struct charger_manager*,char*) ;

__attribute__((used)) static int FUNC_6(struct charger_manager *VAR_0)
{
 struct charger_desc *VAR_1 = VAR_0->desc;
 u64 VAR_2 = FUNC_3(FUNC_2());
 u64 VAR_3;
 int VAR_4 = 0;

 if (!VAR_1->charging_max_duration_ms &&
   !VAR_1->discharging_max_duration_ms)
  return VAR_4;

 if (VAR_0->charger_enabled) {
  VAR_3 = VAR_2 - VAR_0->charging_start_time;

  if (VAR_3 > VAR_1->charging_max_duration_ms) {
   FUNC_0(VAR_0->dev, "Charging duration exceed %ums\n",
     VAR_1->charging_max_duration_ms);
   FUNC_5(VAR_0, "Discharging");
   FUNC_4(VAR_0, 0);
   VAR_4 = 1;
  }
 } else if (FUNC_1(VAR_0) && !VAR_0->charger_enabled) {
  VAR_3 = VAR_2 - VAR_0->charging_end_time;

  if (VAR_3 > VAR_1->discharging_max_duration_ms &&
    FUNC_1(VAR_0)) {
   FUNC_0(VAR_0->dev, "Discharging duration exceed %ums\n",
     VAR_1->discharging_max_duration_ms);
   FUNC_5(VAR_0, "Recharging");
   FUNC_4(VAR_0, 1);
   VAR_4 = 1;
  }
 }

 return VAR_4;
}
