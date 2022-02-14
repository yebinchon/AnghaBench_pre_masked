
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_supply_alias_match {scalar_t__ dev; int id; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_0, void *VAR_1,
          void *VAR_2)
{
 struct regulator_supply_alias_match *VAR_3 = VAR_1;
 struct regulator_supply_alias_match *VAR_4 = VAR_2;

 return VAR_3->dev == VAR_4->dev && FUNC_0(VAR_3->id, VAR_4->id) == 0;
}
