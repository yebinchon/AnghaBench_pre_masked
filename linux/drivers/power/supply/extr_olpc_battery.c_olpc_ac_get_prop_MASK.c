
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
typedef int uint8_t ;
struct power_supply {int dummy; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int FUNC_0 (int ,int *,int ,int*,int) ;

__attribute__((used)) static int FUNC_1(struct power_supply *VAR_3,
       enum power_supply_property VAR_4,
       union power_supply_propval *VAR_5)
{
 int VAR_6 = 0;
 uint8_t VAR_7;

 switch (VAR_4) {
 case 128:
  VAR_6 = FUNC_0(VAR_1, ((void*)0), 0, &VAR_7, 1);
  if (VAR_6)
   return VAR_6;

  VAR_5->intval = !!(VAR_7 & VAR_0);
  break;
 default:
  VAR_6 = -VAR_2;
  break;
 }
 return VAR_6;
}
