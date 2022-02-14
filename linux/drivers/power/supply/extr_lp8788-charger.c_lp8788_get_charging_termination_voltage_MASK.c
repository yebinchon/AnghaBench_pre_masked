
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {scalar_t__ intval; } ;
typedef int u8 ;
struct lp8788_charger {int lp; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_1(struct lp8788_charger *VAR_4,
    union power_supply_propval *VAR_5)
{
 u8 VAR_6;

 FUNC_0(VAR_4->lp, VAR_0, &VAR_6);
 VAR_6 &= VAR_1;
 VAR_5->intval = VAR_2 + VAR_3 * VAR_6;

 return 0;
}
