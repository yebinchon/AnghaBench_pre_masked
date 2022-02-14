
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 struct regmap* FUNC_0 (int ) ;
 struct device_node* FUNC_1 (int *,int *,char const*) ;
 int FUNC_2 (struct device_node*) ;
 struct regmap* FUNC_3 (struct device_node*) ;

struct regmap *FUNC_4(const char *VAR_1)
{
 struct device_node *VAR_2;
 struct regmap *VAR_3;

 VAR_2 = FUNC_1(((void*)0), ((void*)0), VAR_1);
 if (!VAR_2)
  return FUNC_0(-VAR_0);

 VAR_3 = FUNC_3(VAR_2);
 FUNC_2(VAR_2);

 return VAR_3;
}
