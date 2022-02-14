
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct power_supply {int dummy; } ;
struct gab {int bat_work; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 struct gab* FUNC_2 (struct power_supply*) ;

__attribute__((used)) static void FUNC_3(struct power_supply *VAR_0)
{
 struct gab *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(&VAR_1->bat_work, FUNC_0(0));
}
