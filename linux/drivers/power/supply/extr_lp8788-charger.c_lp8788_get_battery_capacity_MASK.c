
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
typedef int u8 ;
struct lp8788_charger_platform_data {unsigned int max_vbatt_mv; } ;
struct lp8788_charger {struct lp8788_charger_platform_data* pdata; struct lp8788* lp; } ;
struct lp8788 {int dummy; } ;
typedef enum lp8788_charging_state { ____Placeholder_lp8788_charging_state } lp8788_charging_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct lp8788_charger*,int*) ;
 int FUNC_1 (struct lp8788*,int ,int*) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct lp8788_charger *VAR_6,
    union power_supply_propval *VAR_7)
{
 struct lp8788 *VAR_8 = VAR_6->lp;
 struct lp8788_charger_platform_data *VAR_9 = VAR_6->pdata;
 unsigned int VAR_10;
 int VAR_11;
 enum lp8788_charging_state VAR_12;
 u8 VAR_13;
 int VAR_14;

 if (!VAR_9)
  return -VAR_0;

 VAR_10 = VAR_9->max_vbatt_mv;
 if (VAR_10 == 0)
  return -VAR_0;

 VAR_14 = FUNC_1(VAR_8, VAR_3, &VAR_13);
 if (VAR_14)
  return VAR_14;

 VAR_12 = (VAR_13 & VAR_1) >> VAR_2;

 if (VAR_12 == VAR_4) {
  VAR_7->intval = VAR_5;
 } else {
  VAR_14 = FUNC_0(VAR_6, &VAR_11);
  if (VAR_14)
   return VAR_14;

  VAR_7->intval = (VAR_11 * VAR_5) / VAR_10;
  VAR_7->intval = FUNC_2(VAR_7->intval, VAR_5);
 }

 return 0;
}
