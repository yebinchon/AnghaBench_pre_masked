
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
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct da9150_charger *VAR_11,
      union power_supply_propval *VAR_12)
{
 u8 VAR_13;


 VAR_13 = FUNC_0(VAR_11->da9150, VAR_1);

 if (((VAR_13 & VAR_3) == VAR_4) ||
     ((VAR_13 & VAR_3) == VAR_5)) {
  VAR_12->intval = VAR_7;

  return 0;
 }

 VAR_13 = FUNC_0(VAR_11->da9150, VAR_2);


 switch (VAR_13 & VAR_0) {
 case 137:
 case 131:
 case 135:
 case 134:
  VAR_12->intval = VAR_6;
  break;
 case 132:
 case 130:
 case 129:
 case 128:
 case 136:
  VAR_12->intval = VAR_9;
  break;
 case 133:
  VAR_12->intval = VAR_8;
  break;
 default:
  VAR_12->intval = VAR_10;
  break;
 }

 return 0;
}
