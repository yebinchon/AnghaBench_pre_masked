
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union power_supply_propval {scalar_t__ intval; } ;
struct power_supply {int dummy; } ;
struct charger_manager {TYPE_1__* desc; int dev; int charger_enabled; scalar_t__ emergency_stop; } ;
struct TYPE_2__ {scalar_t__* psy_charger_stat; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (struct charger_manager*) ;
 struct power_supply* FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct power_supply*,int ,union power_supply_propval*) ;
 int FUNC_5 (struct power_supply*) ;

__attribute__((used)) static bool FUNC_6(struct charger_manager *VAR_5)
{
 int VAR_6, VAR_7;
 bool VAR_8 = 0;
 struct power_supply *VAR_9;
 union power_supply_propval VAR_10;


 if (!FUNC_2(VAR_5))
  return 0;


 for (VAR_6 = 0; VAR_5->desc->psy_charger_stat[VAR_6]; VAR_6++) {

  if (VAR_5->emergency_stop)
   continue;
  if (!VAR_5->charger_enabled)
   continue;

  VAR_9 = FUNC_3(VAR_5->desc->psy_charger_stat[VAR_6]);
  if (!VAR_9) {
   FUNC_0(VAR_5->dev, "Cannot find power supply \"%s\"\n",
     VAR_5->desc->psy_charger_stat[VAR_6]);
   continue;
  }


  VAR_7 = FUNC_4(VAR_9, VAR_0,
    &VAR_10);
  if (VAR_7) {
   FUNC_1(VAR_5->dev, "Cannot read ONLINE value from %s\n",
     VAR_5->desc->psy_charger_stat[VAR_6]);
   FUNC_5(VAR_9);
   continue;
  }
  if (VAR_10.intval == 0) {
   FUNC_5(VAR_9);
   continue;
  }





  VAR_7 = FUNC_4(VAR_9, VAR_1,
    &VAR_10);
  FUNC_5(VAR_9);
  if (VAR_7) {
   FUNC_1(VAR_5->dev, "Cannot read STATUS value from %s\n",
     VAR_5->desc->psy_charger_stat[VAR_6]);
   continue;
  }
  if (VAR_10.intval == VAR_3 ||
    VAR_10.intval == VAR_2 ||
    VAR_10.intval == VAR_4)
   continue;


  VAR_8 = 1;
  break;
 }

 return VAR_8;
}
