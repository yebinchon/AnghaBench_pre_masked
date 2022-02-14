
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {char* strval; } ;
typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int*,int,int*,int) ;

__attribute__((used)) static int FUNC_1(union power_supply_propval *VAR_2)
{
 uint8_t VAR_3;
 int VAR_4;

 VAR_3 = VAR_0;
 VAR_4 = FUNC_0(VAR_1, &VAR_3, 1, &VAR_3, 1);
 if (VAR_4)
  return VAR_4;

 switch (VAR_3 >> 4) {
 case 1:
  VAR_2->strval = "Gold Peak";
  break;
 case 2:
  VAR_2->strval = "BYD";
  break;
 default:
  VAR_2->strval = "Unknown";
  break;
 }

 return VAR_4;
}
