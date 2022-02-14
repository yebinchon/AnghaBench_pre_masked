
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_init_data {int dummy; } ;
struct regulator_config {void* driver_data; struct regulator_init_data* init_data; int regmap; int * dev; } ;
struct pv88060 {int * rdev; int * dev; int regmap; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int irq; int dev; } ;
struct TYPE_2__ {int desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int *,char*,...) ;
 struct regulator_init_data* FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;
 struct pv88060* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (struct i2c_client*,int *) ;
 int FUNC_7 (int *,int *,struct regulator_config*) ;
 int FUNC_8 (int *,int ,int *,int ,int,char*,struct pv88060*) ;
 int FUNC_9 (struct i2c_client*,struct pv88060*) ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_1__* VAR_12 ;
 int FUNC_10 (int ,int ,int,int ) ;
 int FUNC_11 (int ,int ,int) ;

__attribute__((used)) static int FUNC_12(struct i2c_client *VAR_13,
  const struct i2c_device_id *VAR_14)
{
 struct regulator_init_data *VAR_15 = FUNC_3(&VAR_13->dev);
 struct pv88060 *VAR_16;
 struct regulator_config VAR_17 = { };
 int VAR_18, VAR_19, VAR_20 = 0;

 VAR_16 = FUNC_5(&VAR_13->dev, sizeof(struct pv88060), VAR_1);
 if (!VAR_16)
  return -VAR_0;

 VAR_16->dev = &VAR_13->dev;
 VAR_16->regmap = FUNC_6(VAR_13, &VAR_11);
 if (FUNC_0(VAR_16->regmap)) {
  VAR_18 = FUNC_1(VAR_16->regmap);
  FUNC_2(VAR_16->dev, "Failed to allocate register map: %d\n",
   VAR_18);
  return VAR_18;
 }

 FUNC_9(VAR_13, VAR_16);

 if (VAR_13->irq != 0) {
  VAR_20 = FUNC_11(VAR_16->regmap, VAR_7, 0xFF);
  if (VAR_20 < 0) {
   FUNC_2(VAR_16->dev,
    "Failed to mask A reg: %d\n", VAR_20);
   return VAR_20;
  }

  VAR_20 = FUNC_11(VAR_16->regmap, VAR_8, 0xFF);
  if (VAR_20 < 0) {
   FUNC_2(VAR_16->dev,
    "Failed to mask B reg: %d\n", VAR_20);
   return VAR_20;
  }

  VAR_20 = FUNC_11(VAR_16->regmap, VAR_9, 0xFF);
  if (VAR_20 < 0) {
   FUNC_2(VAR_16->dev,
    "Failed to mask C reg: %d\n", VAR_20);
   return VAR_20;
  }

  VAR_20 = FUNC_8(&VAR_13->dev, VAR_13->irq, ((void*)0),
     VAR_10,
     VAR_3|VAR_2,
     "pv88060", VAR_16);
  if (VAR_20 != 0) {
   FUNC_2(VAR_16->dev, "Failed to request IRQ: %d\n",
    VAR_13->irq);
   return VAR_20;
  }

  VAR_20 = FUNC_10(VAR_16->regmap, VAR_7,
   VAR_6 | VAR_5, 0);
  if (VAR_20 < 0) {
   FUNC_2(VAR_16->dev,
    "Failed to update mask reg: %d\n", VAR_20);
   return VAR_20;
  }

 } else {
  FUNC_4(VAR_16->dev, "No IRQ configured\n");
 }

 VAR_17.dev = VAR_16->dev;
 VAR_17.regmap = VAR_16->regmap;

 for (VAR_19 = 0; VAR_19 < VAR_4; VAR_19++) {
  if (VAR_15)
   VAR_17.init_data = &VAR_15[VAR_19];

  VAR_17.driver_data = (void *)&VAR_12[VAR_19];
  VAR_16->rdev[VAR_19] = FUNC_7(VAR_16->dev,
   &VAR_12[VAR_19].desc, &VAR_17);
  if (FUNC_0(VAR_16->rdev[VAR_19])) {
   FUNC_2(VAR_16->dev,
    "Failed to register PV88060 regulator\n");
   return FUNC_1(VAR_16->rdev[VAR_19]);
  }
 }

 return 0;
}
