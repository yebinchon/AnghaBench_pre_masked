
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (union power_supply_propval*) ;
 int FUNC_1 (int ,int*,int,int*,int) ;

__attribute__((used)) static int FUNC_2(union power_supply_propval *VAR_3)
{
 uint8_t VAR_4;
 union power_supply_propval VAR_5;
 int VAR_6, VAR_7;

 VAR_6 = FUNC_0(&VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_4 = VAR_0;
 VAR_6 = FUNC_1(VAR_1, &VAR_4, 1, &VAR_4, 1);
 if (VAR_6)
  return VAR_6;

 VAR_7 = VAR_4 >> 4;

 switch (VAR_5.intval) {
 case 128:
  switch (VAR_7) {
  case 1:
   VAR_3->intval = 3000000*.8;
   break;
  default:
   return -VAR_2;
  }
  break;

 case 129:
  switch (VAR_7) {
  case 1:
  case 2:
   VAR_3->intval = 2800000;
   break;
  default:
   return -VAR_2;
  }
  break;

 default:
  return -VAR_2;
 }

 return VAR_6;
}
