
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_supply_alias_match {char const* id; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,struct regulator_supply_alias_match*) ;
 struct regulator_supply_alias_match* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (struct regulator_supply_alias_match*) ;
 int FUNC_3 (struct device*,char const*,struct device*,char const*) ;

int FUNC_4(struct device *VAR_3, const char *VAR_4,
      struct device *VAR_5,
      const char *VAR_6)
{
 struct regulator_supply_alias_match *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_1(VAR_2,
      sizeof(struct regulator_supply_alias_match),
      VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->dev = VAR_3;
 VAR_7->id = VAR_4;

 VAR_8 = FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6);
 if (VAR_8 < 0) {
  FUNC_2(VAR_7);
  return VAR_8;
 }

 FUNC_0(VAR_3, VAR_7);

 return 0;
}
