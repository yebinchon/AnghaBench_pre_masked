
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 struct regmap* FUNC_0 (int ) ;
 struct regmap* FUNC_1 (struct device_node*,int) ;
 int FUNC_2 (struct device_node*,char*) ;

struct regmap *FUNC_3(struct device_node *VAR_1)
{
 if (!FUNC_2(VAR_1, "syscon"))
  return FUNC_0(-VAR_0);

 return FUNC_1(VAR_1, 1);
}
