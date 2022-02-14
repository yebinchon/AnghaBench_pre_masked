
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
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct da9150_charger *VAR_5,
           union power_supply_propval *VAR_6)
{
 u8 VAR_7;

 VAR_7 = FUNC_0(VAR_5->da9150, VAR_1);

 switch (VAR_7 & VAR_0) {
 case 130:
  VAR_6->intval = VAR_2;
  break;
 case 131:
 case 128:
 case 129:
  VAR_6->intval = VAR_4;
  break;
 default:
  VAR_6->intval = VAR_3;
  break;
 }

 return 0;
}
