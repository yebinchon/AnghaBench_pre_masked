
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct s2mps11_info {scalar_t__ dev_type; } ;
struct TYPE_5__ {TYPE_1__* parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct of_regulator_match {int dummy; } ;
struct device_node {int dummy; } ;
struct TYPE_4__ {int of_node; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 struct device_node* FUNC_1 (int ,char*) ;
 int FUNC_2 (struct device_node*) ;
 int FUNC_3 (TYPE_2__*,struct device_node*,struct of_regulator_match*,unsigned int) ;
 int FUNC_4 (struct platform_device*,struct of_regulator_match*,struct s2mps11_info*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_2,
  struct of_regulator_match *VAR_3, struct s2mps11_info *VAR_4,
  unsigned int VAR_5)
{
 struct device_node *VAR_6;

 VAR_6 = FUNC_1(VAR_2->dev.parent->of_node, "regulators");
 if (!VAR_6) {
  FUNC_0(&VAR_2->dev, "could not find regulators sub-node\n");
  return -VAR_0;
 }

 FUNC_3(&VAR_2->dev, VAR_6, VAR_3, VAR_5);
 if (VAR_4->dev_type == VAR_1)
  FUNC_4(VAR_2, VAR_3, VAR_4);

 FUNC_2(VAR_6);

 return 0;
}
