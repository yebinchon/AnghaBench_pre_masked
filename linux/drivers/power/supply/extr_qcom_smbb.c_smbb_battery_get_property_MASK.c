
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct smbb_charger {unsigned long status; int* attr; int statlock; } ;
struct power_supply {int dummy; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 unsigned long VAR_13 ;
 unsigned long VAR_14 ;
 unsigned long VAR_15 ;
 unsigned long VAR_16 ;
 unsigned long VAR_17 ;
 unsigned long VAR_18 ;
 unsigned long VAR_19 ;
 unsigned long VAR_20 ;
 unsigned long VAR_21 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct smbb_charger* FUNC_2 (struct power_supply*) ;

__attribute__((used)) static int FUNC_3(struct power_supply *VAR_22,
  enum power_supply_property VAR_23,
  union power_supply_propval *VAR_24)
{
 struct smbb_charger *VAR_25 = FUNC_2(VAR_22);
 unsigned long VAR_26;
 int VAR_27 = 0;

 FUNC_0(&VAR_25->statlock);
 VAR_26 = VAR_25->status;
 FUNC_1(&VAR_25->statlock);

 switch (VAR_23) {
 case 131:
  if (VAR_26 & VAR_18)
   VAR_24->intval = VAR_10;
  else if (!(VAR_26 & (VAR_20 | VAR_21)))
   VAR_24->intval = VAR_10;
  else if (VAR_26 & VAR_16)
   VAR_24->intval = VAR_11;
  else if (!(VAR_26 & VAR_14))
   VAR_24->intval = VAR_10;
  else if (VAR_26 & (VAR_17 | VAR_19))
   VAR_24->intval = VAR_9;
  else
   VAR_24->intval = VAR_10;
  break;
 case 133:
  if (VAR_26 & VAR_14)
   VAR_24->intval = VAR_7;
  else if (VAR_26 & VAR_13)
   VAR_24->intval = VAR_8;
  else
   VAR_24->intval = VAR_6;
  break;
 case 135:
  if (VAR_26 & VAR_17)
   VAR_24->intval = VAR_3;
  else if (VAR_26 & VAR_19)
   VAR_24->intval = VAR_5;
  else
   VAR_24->intval = VAR_4;
  break;
 case 132:
  VAR_24->intval = !!(VAR_26 & VAR_15);
  break;
 case 134:
  VAR_24->intval = VAR_25->attr[VAR_0];
  break;
 case 129:
  VAR_24->intval = VAR_25->attr[VAR_1];
  break;
 case 130:




  VAR_24->intval = VAR_12;
  break;
 case 128:
  VAR_24->intval = 3000000;
  break;
 default:
  VAR_27 = -VAR_2;
  break;
 }

 return VAR_27;
}
