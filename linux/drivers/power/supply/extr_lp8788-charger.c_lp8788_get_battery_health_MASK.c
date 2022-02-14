
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
typedef int u8 ;
struct lp8788_charger {int lp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_1(struct lp8788_charger *VAR_6,
    union power_supply_propval *VAR_7)
{
 u8 VAR_8;
 int VAR_9;

 VAR_9 = FUNC_0(VAR_6->lp, VAR_1, &VAR_8);
 if (VAR_9)
  return VAR_9;

 if (VAR_8 & VAR_2)
  VAR_7->intval = VAR_5;
 else if (VAR_8 & VAR_0)
  VAR_7->intval = VAR_3;
 else
  VAR_7->intval = VAR_4;

 return 0;
}
