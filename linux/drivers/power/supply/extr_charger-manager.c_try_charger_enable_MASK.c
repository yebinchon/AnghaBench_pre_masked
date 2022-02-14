
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct charger_manager {int charger_enabled; int dev; void* charging_end_time; void* charging_start_time; scalar_t__ emergency_stop; struct charger_desc* desc; } ;
struct charger_desc {int num_charger_regulators; TYPE_1__* charger_regulators; } ;
struct TYPE_2__ {int regulator_name; int consumer; scalar_t__ externally_control; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 () ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct charger_manager *VAR_1, bool VAR_2)
{
 int VAR_3 = 0, VAR_4;
 struct charger_desc *VAR_5 = VAR_1->desc;


 if (VAR_2 == VAR_1->charger_enabled)
  return 0;

 if (VAR_2) {
  if (VAR_1->emergency_stop)
   return -VAR_0;





  VAR_1->charging_start_time = FUNC_2(FUNC_1());
  VAR_1->charging_end_time = 0;

  for (VAR_4 = 0 ; VAR_4 < VAR_5->num_charger_regulators ; VAR_4++) {
   if (VAR_5->charger_regulators[VAR_4].externally_control)
    continue;

   VAR_3 = FUNC_4(VAR_5->charger_regulators[VAR_4].consumer);
   if (VAR_3 < 0) {
    FUNC_0(VAR_1->dev, "Cannot enable %s regulator\n",
      VAR_5->charger_regulators[VAR_4].regulator_name);
   }
  }
 } else {




  VAR_1->charging_start_time = 0;
  VAR_1->charging_end_time = FUNC_2(FUNC_1());

  for (VAR_4 = 0 ; VAR_4 < VAR_5->num_charger_regulators ; VAR_4++) {
   if (VAR_5->charger_regulators[VAR_4].externally_control)
    continue;

   VAR_3 = FUNC_3(VAR_5->charger_regulators[VAR_4].consumer);
   if (VAR_3 < 0) {
    FUNC_0(VAR_1->dev, "Cannot disable %s regulator\n",
      VAR_5->charger_regulators[VAR_4].regulator_name);
   }
  }





  for (VAR_4 = 0; VAR_4 < VAR_5->num_charger_regulators; VAR_4++) {
   if (FUNC_6(
        VAR_5->charger_regulators[VAR_4].consumer)) {
    FUNC_5(
     VAR_5->charger_regulators[VAR_4].consumer);
    FUNC_0(VAR_1->dev, "Disable regulator(%s) forcibly\n",
      VAR_5->charger_regulators[VAR_4].regulator_name);
   }
  }
 }

 if (!VAR_3)
  VAR_1->charger_enabled = VAR_2;

 return VAR_3;
}
