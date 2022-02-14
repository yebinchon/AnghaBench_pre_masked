
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
typedef int u8 ;
struct lp8788_charger {int lp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_1(struct lp8788_charger *VAR_2,
    union power_supply_propval *VAR_3)
{
 u8 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2->lp, VAR_0, &VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_3->intval = !(VAR_4 & VAR_1);
 return 0;
}
