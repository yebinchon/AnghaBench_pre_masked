
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_supply_alias {int list; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct regulator_supply_alias*) ;
 int FUNC_1 (int *) ;
 struct regulator_supply_alias* FUNC_2 (struct device*,char const*) ;

void FUNC_3(struct device *VAR_0, const char *VAR_1)
{
 struct regulator_supply_alias *VAR_2;

 VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (VAR_2) {
  FUNC_1(&VAR_2->list);
  FUNC_0(VAR_2);
 }
}
