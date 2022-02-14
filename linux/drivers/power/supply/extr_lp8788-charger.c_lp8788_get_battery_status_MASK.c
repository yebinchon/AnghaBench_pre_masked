
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
typedef int u8 ;
struct lp8788_charger {int lp; } ;
typedef enum lp8788_charging_state { ____Placeholder_lp8788_charging_state } lp8788_charging_state ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_1(struct lp8788_charger *VAR_7,
    union power_supply_propval *VAR_8)
{
 enum lp8788_charging_state VAR_9;
 u8 VAR_10;
 int VAR_11;

 VAR_11 = FUNC_0(VAR_7->lp, VAR_2, &VAR_10);
 if (VAR_11)
  return VAR_11;

 VAR_9 = (VAR_10 & VAR_0) >> VAR_1;
 switch (VAR_9) {
 case 129:
  VAR_8->intval = VAR_4;
  break;
 case 128:
 case 133:
 case 132:
 case 131:
  VAR_8->intval = VAR_3;
  break;
 case 130:
  VAR_8->intval = VAR_5;
  break;
 default:
  VAR_8->intval = VAR_6;
  break;
 }

 return 0;
}
