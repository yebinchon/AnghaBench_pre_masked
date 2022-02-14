
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device_node*,char*,int *) ;
 int FUNC_1 (struct platform_device*,struct device_node*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_1)
{
 struct device_node *VAR_2 = VAR_1->dev.of_node;




 if (!FUNC_0(VAR_2, "user", ((void*)0)))
  return -VAR_0;

 return FUNC_1(VAR_1, VAR_2);
}
