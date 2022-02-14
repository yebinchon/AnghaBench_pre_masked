
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int*,int,int*,int) ;

__attribute__((used)) static int FUNC_1(union power_supply_propval *VAR_5)
{
 uint8_t VAR_6;
 int VAR_7;

 VAR_6 = VAR_0;
 VAR_7 = FUNC_0(VAR_1, &VAR_6, 1, &VAR_6, 1);
 if (VAR_7)
  return VAR_7;

 switch (VAR_6 & 0xf) {
 case 1:
  VAR_5->intval = VAR_3;
  break;
 case 2:
  VAR_5->intval = VAR_2;
  break;
 default:
  VAR_5->intval = VAR_4;
  break;
 }

 return VAR_7;
}
