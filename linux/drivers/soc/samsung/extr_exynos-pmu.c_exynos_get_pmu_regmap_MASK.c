
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 struct regmap* FUNC_0 (int ) ;
 int VAR_1 ;
 struct device_node* FUNC_1 (int *,int ) ;
 struct regmap* FUNC_2 (struct device_node*) ;

struct regmap *FUNC_3(void)
{
 struct device_node *VAR_2 = FUNC_1(((void*)0),
            VAR_1);
 if (VAR_2)
  return FUNC_2(VAR_2);
 return FUNC_0(-VAR_0);
}
