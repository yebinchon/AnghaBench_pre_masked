
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct power_supply {int dummy; } ;
struct adp5061_state {int dummy; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;
 int FUNC_0 (struct adp5061_state*,int ) ;
 int FUNC_1 (struct adp5061_state*,int ) ;
 int FUNC_2 (struct adp5061_state*,int ) ;
 int FUNC_3 (struct adp5061_state*,int ) ;
 int FUNC_4 (struct adp5061_state*,int ) ;
 int FUNC_5 (struct adp5061_state*,int ) ;
 int FUNC_6 (struct adp5061_state*,int ) ;
 int FUNC_7 (struct adp5061_state*,int ) ;
 struct adp5061_state* FUNC_8 (struct power_supply*) ;

__attribute__((used)) static int FUNC_9(struct power_supply *VAR_1,
    enum power_supply_property VAR_2,
    const union power_supply_propval *VAR_3)
{
 struct adp5061_state *VAR_4 = FUNC_8(VAR_1);

 switch (VAR_2) {
 case 132:
  return FUNC_2(VAR_4, VAR_3->intval);
 case 129:
  return FUNC_3(VAR_4, VAR_3->intval);
 case 128:
  return FUNC_4(VAR_4, VAR_3->intval);
 case 133:
  return FUNC_1(VAR_4, VAR_3->intval);
 case 134:
  return FUNC_0(VAR_4, VAR_3->intval);
 case 131:
  return FUNC_5(VAR_4, VAR_3->intval);
 case 130:
  return FUNC_7(VAR_4, VAR_3->intval);
 case 135:
  return FUNC_6(VAR_4, VAR_3->intval);
 default:
  return -VAR_0;
 }

 return 0;
}
