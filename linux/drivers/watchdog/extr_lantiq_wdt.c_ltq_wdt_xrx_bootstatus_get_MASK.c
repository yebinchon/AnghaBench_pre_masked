
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct regmap {int dummy; } ;
struct device {int of_node; } ;


 scalar_t__ FUNC_0 (struct regmap*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct regmap*) ;
 int VAR_2 ;
 int FUNC_2 (struct regmap*,int ,int*) ;
 struct regmap* FUNC_3 (int ,char*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_3)
{
 struct regmap *VAR_4;
 u32 VAR_5;
 int VAR_6;

 VAR_4 = FUNC_3(VAR_3->of_node, "regmap");
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_6 = FUNC_2(VAR_4, VAR_0, &VAR_5);
 if (VAR_6)
  return VAR_6;

 if (VAR_5 & VAR_1)
  return VAR_2;

 return 0;
}
