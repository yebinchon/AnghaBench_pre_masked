
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct z2_charger {int bat_work; } ;
struct power_supply {int dummy; } ;


 struct z2_charger* FUNC_0 (struct power_supply*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct power_supply *VAR_0)
{
 struct z2_charger *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(&VAR_1->bat_work);
}
