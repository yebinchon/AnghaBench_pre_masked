
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct device_node* of_node; int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct of_regulator_match {int of_node; int init_data; } ;
struct device_node {int dummy; } ;
struct ab8500 {int dummy; } ;
struct TYPE_5__ {int info_size; struct of_regulator_match* match; int match_size; } ;


 int VAR_0 ;
 int FUNC_0 (struct platform_device*,int ,int,int ) ;
 int FUNC_1 (struct ab8500*) ;
 TYPE_3__ VAR_1 ;
 int FUNC_2 (TYPE_1__*,char*,...) ;
 struct ab8500* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,struct device_node*,struct of_regulator_match*,int ) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_2)
{
 struct ab8500 *VAR_3 = FUNC_3(VAR_2->dev.parent);
 struct device_node *VAR_4 = VAR_2->dev.of_node;
 struct of_regulator_match *VAR_5;
 int VAR_6, VAR_7;

 if (!VAR_3) {
  FUNC_2(&VAR_2->dev, "null mfd parent\n");
  return -VAR_0;
 }

 FUNC_1(VAR_3);

 VAR_6 = FUNC_4(&VAR_2->dev, VAR_4,
     VAR_1.match,
     VAR_1.match_size);
 if (VAR_6 < 0) {
  FUNC_2(&VAR_2->dev,
   "Error parsing regulator init data: %d\n", VAR_6);
  return VAR_6;
 }

 VAR_5 = VAR_1.match;
 for (VAR_7 = 0; VAR_7 < VAR_1.info_size; VAR_7++) {
  VAR_6 = FUNC_0(VAR_2, VAR_5[VAR_7].init_data, VAR_7,
      VAR_5[VAR_7].of_node);
  if (VAR_6)
   return VAR_6;
 }

 return 0;
}
