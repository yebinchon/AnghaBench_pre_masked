
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device_node* of_node; } ;
struct regulator_dev {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;


 struct regulator_dev* FUNC_0 (struct device_node*) ;
 int FUNC_1 (struct device_node*) ;
 struct device_node* FUNC_2 (struct device_node*,char*,int) ;

struct regulator_dev *FUNC_3(struct regulator_dev *VAR_0,
       int VAR_1)
{
 struct device_node *VAR_2 = VAR_0->dev.of_node;
 struct device_node *VAR_3;
 struct regulator_dev *VAR_4;

 VAR_3 = FUNC_2(VAR_2, "regulator-coupled-with", VAR_1);
 if (!VAR_3)
  return ((void*)0);

 VAR_4 = FUNC_0(VAR_3);

 FUNC_1(VAR_3);

 return VAR_4;
}
