
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
typedef int u8 ;
struct da9150_charger {int da9150; } ;



 int VAR_0 ;


 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct da9150_charger *VAR_8,
      union power_supply_propval *VAR_9)
{
 u8 VAR_10;

 VAR_10 = FUNC_0(VAR_8->da9150, VAR_2);


 switch (VAR_10 & VAR_1) {
 case 128:
  VAR_9->intval = VAR_3;
  return 0;
 case 129:
  VAR_9->intval = VAR_6;
  return 0;
 default:
  break;
 }


 switch (VAR_10 & VAR_0) {
 case 132:
 case 131:
  VAR_9->intval = VAR_4;
  break;
 case 130:
  VAR_9->intval = VAR_7;
  break;
 default:
  VAR_9->intval = VAR_5;
  break;
 }

 return 0;
}
