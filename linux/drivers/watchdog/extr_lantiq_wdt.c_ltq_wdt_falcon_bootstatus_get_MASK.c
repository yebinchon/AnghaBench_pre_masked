
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
 int VAR_2 ;
 int FUNC_1 (struct regmap*) ;
 int VAR_3 ;
 int FUNC_2 (struct regmap*,int ,int*) ;
 struct regmap* FUNC_3 (int ,char*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_4)
{
 struct regmap *VAR_5;
 u32 VAR_6;
 int VAR_7;

 VAR_5 = FUNC_3(VAR_4->of_node,
           "lantiq,rcu");
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 VAR_7 = FUNC_2(VAR_5, VAR_0, &VAR_6);
 if (VAR_7)
  return VAR_7;

 if ((VAR_6 & VAR_1) == VAR_2)
  return VAR_3;

 return 0;
}
