
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serdes_am654 {struct device_node* of_node; } ;
struct platform_device {int dev; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (struct device_node*) ;
 struct serdes_am654* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct serdes_am654 *VAR_1 = FUNC_1(VAR_0);
 struct device_node *VAR_2 = VAR_1->of_node;

 FUNC_2(&VAR_0->dev);
 FUNC_0(VAR_2);

 return 0;
}
