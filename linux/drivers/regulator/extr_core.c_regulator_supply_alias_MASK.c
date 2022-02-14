
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_supply_alias {char* alias_supply; struct device* alias_dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,char const*,char*,int ) ;
 int FUNC_1 (struct device*) ;
 struct regulator_supply_alias* FUNC_2 (struct device*,char const*) ;

__attribute__((used)) static void FUNC_3(struct device **VAR_0, const char **VAR_1)
{
 struct regulator_supply_alias *VAR_2;

 VAR_2 = FUNC_2(*VAR_0, *VAR_1);
 if (VAR_2) {
  FUNC_0(*VAR_0, "Mapping supply %s to %s,%s\n",
    *VAR_1, VAR_2->alias_supply,
    FUNC_1(VAR_2->alias_dev));
  *VAR_0 = VAR_2->alias_dev;
  *VAR_1 = VAR_2->alias_supply;
 }
}
