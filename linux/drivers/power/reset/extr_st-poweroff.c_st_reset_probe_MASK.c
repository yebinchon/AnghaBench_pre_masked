
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reset_syscfg {int regmap; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct of_device_id {scalar_t__ data; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*) ;
 struct of_device_id* FUNC_3 (int ,struct device*) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 struct reset_syscfg* VAR_3 ;
 int FUNC_5 (struct device_node*,char*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_4)
{
 struct device_node *VAR_5 = VAR_4->dev.of_node;
 const struct of_device_id *VAR_6;
 struct device *VAR_7 = &VAR_4->dev;

 VAR_6 = FUNC_3(VAR_1, VAR_7);
 if (!VAR_6)
  return -VAR_0;

 VAR_3 = (struct reset_syscfg *)VAR_6->data;

 VAR_3->regmap =
  FUNC_5(VAR_5, "st,syscfg");
 if (FUNC_0(VAR_3->regmap)) {
  FUNC_2(VAR_7, "No syscfg phandle specified\n");
  return FUNC_1(VAR_3->regmap);
 }

 return FUNC_4(&VAR_2);
}
