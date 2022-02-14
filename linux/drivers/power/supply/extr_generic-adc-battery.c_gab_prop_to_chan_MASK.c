
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;
typedef enum gab_chan_type { ____Placeholder_gab_chan_type } gab_chan_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (int) ;

__attribute__((used)) static enum gab_chan_type FUNC_1(enum power_supply_property VAR_3)
{
 switch (VAR_3) {
 case 129:
  return VAR_1;
 case 128:
  return VAR_2;
 case 130:
  return VAR_0;
 default:
  FUNC_0(1);
  break;
 }
 return VAR_1;
}
