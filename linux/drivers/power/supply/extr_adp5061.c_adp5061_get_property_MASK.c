
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
typedef int u8 ;
struct power_supply {int dummy; } ;
struct adp5061_state {int dummy; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct adp5061_state*,union power_supply_propval*) ;
 int FUNC_2 (struct adp5061_state*,union power_supply_propval*) ;
 int FUNC_3 (struct adp5061_state*,union power_supply_propval*) ;
 int FUNC_4 (struct adp5061_state*,union power_supply_propval*) ;
 int FUNC_5 (struct adp5061_state*,union power_supply_propval*) ;
 int FUNC_6 (struct adp5061_state*,union power_supply_propval*) ;
 int FUNC_7 (struct adp5061_state*,union power_supply_propval*) ;
 int FUNC_8 (struct adp5061_state*,union power_supply_propval*) ;
 int FUNC_9 (struct adp5061_state*,union power_supply_propval*) ;
 int FUNC_10 (struct adp5061_state*,int *,int *) ;
 int FUNC_11 (struct adp5061_state*,union power_supply_propval*) ;
 int FUNC_12 (struct adp5061_state*,union power_supply_propval*) ;
 struct adp5061_state* FUNC_13 (struct power_supply*) ;

__attribute__((used)) static int FUNC_14(struct power_supply *VAR_2,
    enum power_supply_property VAR_3,
    union power_supply_propval *VAR_4)
{
 struct adp5061_state *VAR_5 = FUNC_13(VAR_2);
 u8 VAR_6, VAR_7;
 int VAR_8, VAR_9;

 switch (VAR_3) {
 case 132:
  VAR_9 = FUNC_10(VAR_5, &VAR_6, &VAR_7);
  if (VAR_9 < 0)
   return VAR_9;

  VAR_8 = FUNC_0(VAR_7);
  if (VAR_8 == VAR_0)
   VAR_4->intval = 0;
  else
   VAR_4->intval = 1;
  break;
 case 137:
  return FUNC_3(VAR_5, VAR_4);
 case 134:



  return FUNC_6(VAR_5, VAR_4);
 case 129:



  return FUNC_7(VAR_5, VAR_4);
 case 128:




  return FUNC_8(VAR_5, VAR_4);
 case 135:



  return FUNC_4(VAR_5, VAR_4);
 case 136:




  return FUNC_5(VAR_5, VAR_4);
 case 133:




  return FUNC_9(VAR_5, VAR_4);
 case 130:





  return FUNC_12(VAR_5, VAR_4);
 case 131:




  return FUNC_2(VAR_5, VAR_4);
 case 139:




  return FUNC_1(VAR_5, VAR_4);
 case 138:

  return FUNC_11(VAR_5, VAR_4);
 default:
  return -VAR_1;
 }

 return 0;
}
