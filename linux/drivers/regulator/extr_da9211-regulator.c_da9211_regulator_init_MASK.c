
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_config {int * ena_gpiod; int of_node; int regmap; struct da9211* driver_data; int dev; int init_data; } ;
struct da9211 {int num_regulator; scalar_t__ chip_irq; int dev; int regmap; int * rdev; TYPE_1__* pdata; } ;
struct TYPE_2__ {int num_buck; int ** gpiod_ren; int * reg_node; int * init_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_5 ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *,struct regulator_config*) ;
 int FUNC_5 (int ,int ,unsigned int*) ;
 int FUNC_6 (int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_7(struct da9211 *VAR_6)
{
 struct regulator_config VAR_7 = { };
 int VAR_8, VAR_9;
 unsigned int VAR_10;

 VAR_9 = FUNC_5(VAR_6->regmap, VAR_1, &VAR_10);
 if (VAR_9 < 0) {
  FUNC_2(VAR_6->dev, "Failed to read CONFIG_E reg: %d\n", VAR_9);
  return VAR_9;
 }

 VAR_10 &= VAR_3;



 if (VAR_6->pdata->num_buck == 1 && VAR_10 == 0x00)
  VAR_6->num_regulator = 1;
 else if (VAR_6->pdata->num_buck == 2 && VAR_10 != 0x00)
  VAR_6->num_regulator = 2;
 else {
  FUNC_2(VAR_6->dev, "Configuration is mismatched\n");
  return -VAR_4;
 }

 for (VAR_8 = 0; VAR_8 < VAR_6->num_regulator; VAR_8++) {
  VAR_7.init_data = VAR_6->pdata->init_data[VAR_8];
  VAR_7.dev = VAR_6->dev;
  VAR_7.driver_data = VAR_6;
  VAR_7.regmap = VAR_6->regmap;
  VAR_7.of_node = VAR_6->pdata->reg_node[VAR_8];

  if (VAR_6->pdata->gpiod_ren[VAR_8])
   VAR_7.ena_gpiod = VAR_6->pdata->gpiod_ren[VAR_8];
  else
   VAR_7.ena_gpiod = ((void*)0);





  if (VAR_7.ena_gpiod)
   FUNC_3(VAR_6->dev, VAR_7.ena_gpiod);
  VAR_6->rdev[VAR_8] = FUNC_4(VAR_6->dev,
   &VAR_5[VAR_8], &VAR_7);
  if (FUNC_0(VAR_6->rdev[VAR_8])) {
   FUNC_2(VAR_6->dev,
    "Failed to register DA9211 regulator\n");
   return FUNC_1(VAR_6->rdev[VAR_8]);
  }

  if (VAR_6->chip_irq != 0) {
   VAR_9 = FUNC_6(VAR_6->regmap,
    VAR_2, VAR_0 << VAR_8, 0);
   if (VAR_9 < 0) {
    FUNC_2(VAR_6->dev,
     "Failed to update mask reg: %d\n", VAR_9);
    return VAR_9;
   }
  }
 }

 return 0;
}
