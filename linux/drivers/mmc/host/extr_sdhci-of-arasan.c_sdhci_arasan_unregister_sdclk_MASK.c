
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;


 int FUNC_0 (struct device_node*) ;
 int FUNC_1 (struct device_node*,char*,int *) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_0)
{
 struct device_node *VAR_1 = VAR_0->of_node;

 if (!FUNC_1(VAR_1, "#clock-cells", ((void*)0)))
  return;

 FUNC_0(VAR_0->of_node);
}
