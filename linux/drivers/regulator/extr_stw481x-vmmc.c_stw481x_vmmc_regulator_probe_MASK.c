
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct stw481x {int map; } ;
struct regulator_dev {int dummy; } ;
struct regulator_config {int init_data; int of_node; int regmap; struct stw481x* driver_data; TYPE_1__* dev; } ;
struct TYPE_6__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;


 scalar_t__ FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*,char*) ;
 struct stw481x* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 struct regulator_dev* FUNC_5 (TYPE_1__*,int *,struct regulator_config*) ;
 int FUNC_6 (TYPE_1__*,int ,int *) ;
 int FUNC_7 (int ,int ,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_3)
{
 struct stw481x *VAR_4 = FUNC_3(&VAR_3->dev);
 struct regulator_config VAR_5 = { };
 struct regulator_dev *VAR_6;
 int VAR_7;


 VAR_7 = FUNC_7(VAR_4->map, VAR_0,
     VAR_1, 0);
 if (VAR_7) {
  FUNC_2(&VAR_3->dev, "could not disable external VMMC\n");
  return VAR_7;
 }


 VAR_5.dev = &VAR_3->dev;
 VAR_5.driver_data = VAR_4;
 VAR_5.regmap = VAR_4->map;
 VAR_5.of_node = VAR_3->dev.of_node;
 VAR_5.init_data = FUNC_6(&VAR_3->dev,
            VAR_3->dev.of_node,
            &VAR_2);

 VAR_6 = FUNC_5(&VAR_3->dev, &VAR_2, &VAR_5);
 if (FUNC_0(VAR_6)) {
  FUNC_2(&VAR_3->dev,
   "error initializing STw481x VMMC regulator\n");
  return FUNC_1(VAR_6);
 }

 FUNC_4(&VAR_3->dev, "initialized STw481x VMMC regulator\n");
 return 0;
}
