
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct tps65090_regulator_plat_data {scalar_t__ enable_ext_control; int * reg_init_data; scalar_t__ gpiod; int overcurrent_wait; scalar_t__ overcurrent_wait_valid; } ;
struct tps65090_regulator {scalar_t__ overcurrent_wait_valid; struct tps65090_platform_data* rdev; TYPE_2__* desc; int overcurrent_wait; TYPE_3__* dev; } ;
struct tps65090_platform_data {struct tps65090_regulator_plat_data** reg_pdata; } ;
struct tps65090 {int rmap; TYPE_1__* dev; } ;
struct regulator_dev {struct tps65090_regulator_plat_data** reg_pdata; } ;
struct regulator_config {scalar_t__ ena_gpiod; int * of_node; int * init_data; int regmap; struct tps65090_regulator* driver_data; int dev; } ;
struct TYPE_11__ {int parent; } ;
struct platform_device {TYPE_3__ dev; } ;
struct of_regulator_match {int * of_node; } ;
struct TYPE_10__ {int name; int * ops; } ;
struct TYPE_9__ {scalar_t__ of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct tps65090_platform_data*) ;
 scalar_t__ FUNC_1 (struct tps65090_platform_data*) ;
 int FUNC_2 (struct tps65090_platform_data*) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_3__*,char*) ;
 int FUNC_4 (TYPE_3__*,char*,...) ;
 struct tps65090* FUNC_5 (int ) ;
 struct tps65090_platform_data* FUNC_6 (int ) ;
 int FUNC_7 (TYPE_3__*,scalar_t__) ;
 struct tps65090_regulator* FUNC_8 (TYPE_3__*,int,int,int ) ;
 struct tps65090_platform_data* FUNC_9 (TYPE_3__*,TYPE_2__*,struct regulator_config*) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (struct platform_device*,struct tps65090_regulator*) ;
 int FUNC_12 (struct tps65090_regulator*,int) ;
 int VAR_4 ;
 struct tps65090_platform_data* FUNC_13 (struct platform_device*,struct of_regulator_match**) ;
 int FUNC_14 (struct tps65090_regulator*,struct tps65090_platform_data*) ;
 TYPE_2__* VAR_5 ;
 int FUNC_15 (struct tps65090_regulator*,struct tps65090_regulator_plat_data*) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_6)
{
 struct tps65090 *VAR_7 = FUNC_5(VAR_6->dev.parent);
 struct tps65090_regulator *VAR_8 = ((void*)0);
 struct regulator_config VAR_9 = { };
 struct regulator_dev *VAR_10;
 struct tps65090_regulator_plat_data *VAR_11;
 struct tps65090_regulator *VAR_12;
 struct tps65090_platform_data *VAR_13;
 struct of_regulator_match *VAR_14 = ((void*)0);
 int VAR_15;
 int VAR_16;

 FUNC_3(&VAR_6->dev, "Probing regulator\n");

 VAR_13 = FUNC_6(VAR_6->dev.parent);
 if (!VAR_13 && VAR_7->dev->of_node)
  VAR_13 = FUNC_13(VAR_6,
     &VAR_14);
 if (FUNC_1(VAR_13)) {
  FUNC_4(&VAR_6->dev, "Platform data missing\n");
  return VAR_13 ? FUNC_2(VAR_13) : -VAR_0;
 }

 VAR_12 = FUNC_8(&VAR_6->dev,
       VAR_3, sizeof(*VAR_12),
       VAR_2);
 if (!VAR_12)
  return -VAR_1;

 for (VAR_15 = 0; VAR_15 < VAR_3; VAR_15++) {
  VAR_11 = VAR_13->reg_pdata[VAR_15];

  VAR_8 = &VAR_12[VAR_15];
  VAR_8->dev = &VAR_6->dev;
  VAR_8->desc = &VAR_5[VAR_15];
  if (VAR_11) {
   VAR_8->overcurrent_wait_valid =
    VAR_11->overcurrent_wait_valid;
   VAR_8->overcurrent_wait = VAR_11->overcurrent_wait;
  }





  if (VAR_11 && FUNC_10(VAR_15) && VAR_11->reg_init_data) {
   if (VAR_11->enable_ext_control) {
    VAR_9.ena_gpiod = VAR_11->gpiod;
    VAR_8->desc->ops = &VAR_4;
   } else {
    VAR_16 = FUNC_15(
      VAR_8, VAR_11);
    if (VAR_16 < 0) {
     FUNC_4(&VAR_6->dev,
      "failed disable ext control\n");
     return VAR_16;
    }
   }
  }

  VAR_9.dev = VAR_6->dev.parent;
  VAR_9.driver_data = VAR_8;
  VAR_9.regmap = VAR_7->rmap;
  if (VAR_11)
   VAR_9.init_data = VAR_11->reg_init_data;
  else
   VAR_9.init_data = ((void*)0);
  if (VAR_14)
   VAR_9.of_node = VAR_14[VAR_15].of_node;
  else
   VAR_9.of_node = ((void*)0);





  if (VAR_9.ena_gpiod)
   FUNC_7(&VAR_6->dev, VAR_9.ena_gpiod);
  VAR_10 = FUNC_9(&VAR_6->dev, VAR_8->desc, &VAR_9);
  if (FUNC_0(VAR_10)) {
   FUNC_4(&VAR_6->dev, "failed to register regulator %s\n",
    VAR_8->desc->name);
   return FUNC_2(VAR_10);
  }
  VAR_8->rdev = VAR_10;

  if (VAR_8->overcurrent_wait_valid) {
   VAR_16 = FUNC_14(VAR_8, VAR_10);
   if (VAR_16 < 0)
    return VAR_16;
  }


  if (VAR_11 && FUNC_10(VAR_15) && VAR_11->reg_init_data &&
    VAR_11->enable_ext_control) {
   VAR_16 = FUNC_12(VAR_8, 1);
   if (VAR_16 < 0)
    return VAR_16;
  }
 }

 FUNC_11(VAR_6, VAR_12);
 return 0;
}
