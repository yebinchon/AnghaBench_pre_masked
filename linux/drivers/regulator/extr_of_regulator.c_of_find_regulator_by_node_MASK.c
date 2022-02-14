
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;


 struct device* FUNC_0 (int *,struct device_node*) ;
 struct regulator_dev* FUNC_1 (struct device*) ;
 int VAR_0 ;

struct regulator_dev *FUNC_2(struct device_node *VAR_1)
{
 struct device *VAR_2;

 VAR_2 = FUNC_0(&VAR_0, VAR_1);

 return VAR_2 ? FUNC_1(VAR_2) : ((void*)0);
}
