
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 struct regmap* FUNC_0 (int ) ;
 int FUNC_1 (struct device_node*) ;
 struct device_node* FUNC_2 (struct device_node*,char const*,int ) ;
 struct regmap* FUNC_3 (struct device_node*) ;

struct regmap *FUNC_4(struct device_node *VAR_1,
     const char *VAR_2)
{
 struct device_node *VAR_3;
 struct regmap *VAR_4;

 if (VAR_2)
  VAR_3 = FUNC_2(VAR_1, VAR_2, 0);
 else
  VAR_3 = VAR_1;

 if (!VAR_3)
  return FUNC_0(-VAR_0);

 VAR_4 = FUNC_3(VAR_3);
 FUNC_1(VAR_3);

 return VAR_4;
}
