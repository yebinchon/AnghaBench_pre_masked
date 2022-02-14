
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct smbb_charger {int status; int* attr; int statlock; } ;
struct power_supply {int dummy; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 size_t VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct smbb_charger* FUNC_2 (struct power_supply*) ;

__attribute__((used)) static int FUNC_3(struct power_supply *VAR_4,
  enum power_supply_property VAR_5,
  union power_supply_propval *VAR_6)
{
 struct smbb_charger *VAR_7 = FUNC_2(VAR_4);
 int VAR_8 = 0;

 switch (VAR_5) {
 case 128:
  FUNC_0(&VAR_7->statlock);
  VAR_6->intval = !(VAR_7->status & VAR_2) &&
    (VAR_7->status & VAR_3);
  FUNC_1(&VAR_7->statlock);
  break;
 case 130:
  VAR_6->intval = VAR_7->attr[VAR_0];
  break;
 case 129:
  VAR_6->intval = 2500000;
  break;
 default:
  VAR_8 = -VAR_1;
  break;
 }

 return VAR_8;
}
