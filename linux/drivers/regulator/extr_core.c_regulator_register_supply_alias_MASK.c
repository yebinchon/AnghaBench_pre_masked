
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_supply_alias {char const* src_supply; char const* alias_supply; int list; struct device* alias_dev; struct device* src_dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*) ;
 struct regulator_supply_alias* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (char*,char const*,int ,char const*,int ) ;
 struct regulator_supply_alias* FUNC_4 (struct device*,char const*) ;
 int VAR_3 ;

int FUNC_5(struct device *VAR_4, const char *VAR_5,
        struct device *VAR_6,
        const char *VAR_7)
{
 struct regulator_supply_alias *VAR_8;

 VAR_8 = FUNC_4(VAR_4, VAR_5);
 if (VAR_8)
  return -VAR_0;

 VAR_8 = FUNC_1(sizeof(struct regulator_supply_alias), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_8->src_dev = VAR_4;
 VAR_8->src_supply = VAR_5;
 VAR_8->alias_dev = VAR_6;
 VAR_8->alias_supply = VAR_7;

 FUNC_2(&VAR_8->list, &VAR_3);

 FUNC_3("Adding alias for supply %s,%s -> %s,%s\n",
  VAR_5, FUNC_0(VAR_4), VAR_7, FUNC_0(VAR_6));

 return 0;
}
