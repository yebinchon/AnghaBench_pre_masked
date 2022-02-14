
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct sbs_info {unsigned int last_state; } ;
struct power_supply {int dummy; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 struct sbs_info* FUNC_0 (struct power_supply*) ;

__attribute__((used)) static int FUNC_1(struct power_supply *VAR_13,
       enum power_supply_property VAR_14,
       union power_supply_propval *VAR_15)
{
 struct sbs_info *VAR_16 = FUNC_0(VAR_13);
 unsigned int VAR_17;

 VAR_17 = VAR_16->last_state;

 switch (VAR_14) {
 case 129:
  VAR_15->intval = !!(VAR_17 & VAR_9);
  break;

 case 130:
  VAR_15->intval = !!(VAR_17 & VAR_8);
  break;

 case 128:
  VAR_15->intval = VAR_7;

  if (!(VAR_17 & VAR_9))
   VAR_15->intval = VAR_6;
  else if (VAR_17 & VAR_8 &&
    !(VAR_17 & VAR_10))
   VAR_15->intval = VAR_4;
  else
   VAR_15->intval = VAR_5;

  break;

 case 131:
  if (VAR_17 & VAR_11)
   VAR_15->intval = VAR_1;
  if (VAR_17 & VAR_12)
   VAR_15->intval = VAR_3;
  else
   VAR_15->intval = VAR_2;

  break;

 default:
  return -VAR_0;
 }

 return 0;
}
