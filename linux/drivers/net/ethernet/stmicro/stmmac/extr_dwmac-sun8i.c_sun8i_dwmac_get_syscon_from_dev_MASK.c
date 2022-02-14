
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct platform_device {int dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct regmap* FUNC_0 (int ) ;
 struct regmap* FUNC_1 (int *,int *) ;
 struct platform_device* FUNC_2 (struct device_node*) ;
 int FUNC_3 (struct device_node*) ;
 struct device_node* FUNC_4 (struct device_node*,char*,int ) ;
 int FUNC_5 (struct platform_device*) ;

__attribute__((used)) static struct regmap *FUNC_6(struct device_node *VAR_3)
{
 struct device_node *VAR_4;
 struct platform_device *VAR_5;
 struct regmap *VAR_6 = ((void*)0);

 VAR_4 = FUNC_4(VAR_3, "syscon", 0);
 if (!VAR_4)
  return FUNC_0(-VAR_1);

 VAR_5 = FUNC_2(VAR_4);
 if (!VAR_5) {

  VAR_6 = FUNC_0(-VAR_2);
  goto out_put_node;
 }


 VAR_6 = FUNC_1(&VAR_5->dev, ((void*)0));
 if (!VAR_6)
  VAR_6 = FUNC_0(-VAR_0);

 FUNC_5(VAR_5);
out_put_node:
 FUNC_3(VAR_4);
 return VAR_6;
}
