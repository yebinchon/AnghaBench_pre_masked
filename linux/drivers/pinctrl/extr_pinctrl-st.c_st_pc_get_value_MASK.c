
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap_field {int dummy; } ;
struct regmap {int dummy; } ;
struct reg_field {int dummy; } ;
struct device {int dummy; } ;


 struct reg_field FUNC_0 (int,int,int) ;
 struct regmap_field* FUNC_1 (struct device*,struct regmap*,struct reg_field) ;

__attribute__((used)) static struct regmap_field *FUNC_2(struct device *VAR_0,
         struct regmap *VAR_1, int VAR_2,
         int VAR_3, int VAR_4, int VAR_5)
{
 struct reg_field VAR_6 = FUNC_0((VAR_3 + VAR_2) * 4, VAR_4, VAR_5);

 if (VAR_3 < 0)
  return ((void*)0);

 return FUNC_1(VAR_0, VAR_1, VAR_6);
}
