
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device_node* of_node; } ;
struct regulator_dev {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (struct device_node*,char*,int *) ;

int FUNC_1(struct regulator_dev *VAR_0)
{
 struct device_node *VAR_1 = VAR_0->dev.of_node;
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1,
      "regulator-coupled-with",
      ((void*)0));

 return (VAR_2 > 0) ? VAR_2 : 0;
}
