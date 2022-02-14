
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; int strval; } ;
struct power_supply {int dummy; } ;
struct bd70528_psy {int dummy; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bd70528_psy*,int*) ;
 int FUNC_1 (struct bd70528_psy*,int*) ;
 int FUNC_2 (struct bd70528_psy*,int*) ;
 int FUNC_3 (struct bd70528_psy*,int*) ;
 int FUNC_4 (struct bd70528_psy*,int*) ;
 int FUNC_5 (struct bd70528_psy*,int*) ;
 int FUNC_6 (struct bd70528_psy*,int*) ;
 struct bd70528_psy* FUNC_7 (struct power_supply*) ;

__attribute__((used)) static int FUNC_8(struct power_supply *VAR_3,
     enum power_supply_property VAR_4,
     union power_supply_propval *VAR_5)
{
 struct bd70528_psy *VAR_6 = FUNC_7(VAR_3);
 int VAR_7 = 0;

 switch (VAR_4) {
 case 128:
  return FUNC_2(VAR_6, &VAR_5->intval);
 case 136:
  return FUNC_1(VAR_6, &VAR_5->intval);
 case 134:
  return FUNC_0(VAR_6, &VAR_5->intval);
 case 129:
  return FUNC_4(VAR_6, &VAR_5->intval);
 case 133:
  VAR_7 = FUNC_6(VAR_6, &VAR_5->intval);
  VAR_5->intval *= 1000;
  return VAR_7;
 case 135:
  VAR_7 = FUNC_5(VAR_6, &VAR_5->intval);
  VAR_5->intval *= 1000;
  return VAR_7;
 case 130:
  return FUNC_3(VAR_6, &VAR_5->intval);
 case 131:
  VAR_5->strval = VAR_2;
  return 0;
 case 132:
  VAR_5->strval = VAR_1;
  return 0;
 default:
  break;
 }

 return -VAR_0;
}
