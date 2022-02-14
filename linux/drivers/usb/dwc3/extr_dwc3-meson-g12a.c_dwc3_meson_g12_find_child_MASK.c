
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct device_node {int dummy; } ;


 struct platform_device* FUNC_0 (struct device_node*) ;
 struct device_node* FUNC_1 (int ,char const*) ;
 int FUNC_2 (struct device_node*) ;

__attribute__((used)) static struct device *FUNC_3(struct device *VAR_0,
      const char *VAR_1)
{
 struct platform_device *VAR_2;
 struct device_node *VAR_3;

 VAR_3 = FUNC_1(VAR_0->of_node, VAR_1);
 if (!VAR_3)
  return ((void*)0);

 VAR_2 = FUNC_0(VAR_3);
 FUNC_2(VAR_3);
 if (!VAR_2)
  return ((void*)0);

 return &VAR_2->dev;
}
