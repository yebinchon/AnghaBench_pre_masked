
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int name; } ;
struct tps6586x_regulator {TYPE_4__ desc; } ;
struct tps6586x_platform_data {struct regulator_init_data** reg_init_data; } ;
struct regulator_init_data {int dummy; } ;
struct regulator_dev {int dummy; } ;
struct regulator_config {int of_node; struct tps6586x_regulator* driver_data; struct regulator_init_data* init_data; TYPE_1__* dev; } ;
struct TYPE_9__ {TYPE_1__* parent; } ;
struct platform_device {TYPE_3__ dev; } ;
struct of_regulator_match {int of_node; } ;
struct TYPE_8__ {scalar_t__ of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_3__*,char*) ;
 int FUNC_3 (TYPE_3__*,char*,...) ;
 struct tps6586x_platform_data* FUNC_4 (TYPE_1__*) ;
 struct regulator_dev* FUNC_5 (TYPE_3__*,TYPE_4__*,struct regulator_config*) ;
 struct tps6586x_regulator* FUNC_6 (int,int) ;
 int FUNC_7 (struct platform_device*,struct regulator_dev*) ;
 int FUNC_8 (TYPE_1__*) ;
 struct tps6586x_platform_data* FUNC_9 (struct platform_device*,struct of_regulator_match**) ;
 int FUNC_10 (TYPE_1__*,struct tps6586x_regulator*) ;
 int FUNC_11 (struct platform_device*,int,struct regulator_init_data*) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_3)
{
 struct tps6586x_regulator *VAR_4 = ((void*)0);
 struct regulator_config VAR_5 = { };
 struct regulator_dev *VAR_6;
 struct regulator_init_data *VAR_7;
 struct tps6586x_platform_data *VAR_8;
 struct of_regulator_match *VAR_9 = ((void*)0);
 int VAR_10;
 int VAR_11;
 int VAR_12;

 FUNC_2(&VAR_3->dev, "Probing regulator\n");

 VAR_8 = FUNC_4(VAR_3->dev.parent);
 if ((!VAR_8) && (VAR_3->dev.parent->of_node))
  VAR_8 = FUNC_9(VAR_3,
     &VAR_9);

 if (!VAR_8) {
  FUNC_3(&VAR_3->dev, "Platform data not available, exiting\n");
  return -VAR_1;
 }

 VAR_10 = FUNC_8(VAR_3->dev.parent);

 for (VAR_11 = 0; VAR_11 < VAR_2; ++VAR_11) {
  VAR_7 = VAR_8->reg_init_data[VAR_11];

  VAR_4 = FUNC_6(VAR_11, VAR_10);

  if (!VAR_4) {
   FUNC_3(&VAR_3->dev, "invalid regulator ID specified\n");
   return -VAR_0;
  }

  VAR_12 = FUNC_10(VAR_3->dev.parent, VAR_4);
  if (VAR_12) {
   FUNC_3(&VAR_3->dev,
    "regulator %d preinit failed, e %d\n", VAR_11, VAR_12);
   return VAR_12;
  }

  VAR_5.dev = VAR_3->dev.parent;
  VAR_5.init_data = VAR_7;
  VAR_5.driver_data = VAR_4;

  if (VAR_9)
   VAR_5.of_node = VAR_9[VAR_11].of_node;

  VAR_6 = FUNC_5(&VAR_3->dev, &VAR_4->desc, &VAR_5);
  if (FUNC_0(VAR_6)) {
   FUNC_3(&VAR_3->dev, "failed to register regulator %s\n",
     VAR_4->desc.name);
   return FUNC_1(VAR_6);
  }

  if (VAR_7) {
   VAR_12 = FUNC_11(VAR_3, VAR_11,
     VAR_7);
   if (VAR_12 < 0) {
    FUNC_3(&VAR_3->dev,
     "Slew rate config failed, e %d\n", VAR_12);
    return VAR_12;
   }
  }
 }

 FUNC_7(VAR_3, VAR_6);
 return 0;
}
