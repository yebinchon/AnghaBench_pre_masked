
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_supply_alias_match {char const* id; struct device* dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct device*,int ,int ,struct regulator_supply_alias_match*) ;

void FUNC_2(struct device *VAR_2, const char *VAR_3)
{
 struct regulator_supply_alias_match VAR_4;
 int VAR_5;

 VAR_4.dev = VAR_2;
 VAR_4.id = VAR_3;

 VAR_5 = FUNC_1(VAR_2, VAR_0,
       VAR_1, &VAR_4);
 if (VAR_5 != 0)
  FUNC_0(VAR_5);
}
