
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct regulator_init_data {int dummy; } ;
struct regulator_config {void* driver_data; struct regulator_init_data* init_data; int regmap; int * dev; } ;
struct pv88090 {int * rdev; int * dev; int regmap; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int irq; int dev; } ;
struct TYPE_6__ {int min_uV; int uV_step; int n_voltages; } ;
struct TYPE_5__ {int min_uV; int uV_step; int max_uV; } ;
struct TYPE_4__ {TYPE_3__ desc; int conf2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (int *,char*,...) ;
 struct regulator_init_data* FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;
 struct pv88090* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (struct i2c_client*,int *) ;
 int FUNC_7 (int *,TYPE_3__*,struct regulator_config*) ;
 int FUNC_8 (int *,int ,int *,int ,int,char*,struct pv88090*) ;
 int FUNC_9 (struct i2c_client*,struct pv88090*) ;
 TYPE_2__* VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 TYPE_1__* VAR_20 ;
 int FUNC_10 (int ,int ,unsigned int*) ;
 int FUNC_11 (int ,int ,int,int ) ;
 int FUNC_12 (int ,int ,int) ;

__attribute__((used)) static int FUNC_13(struct i2c_client *VAR_21,
  const struct i2c_device_id *VAR_22)
{
 struct regulator_init_data *VAR_23 = FUNC_3(&VAR_21->dev);
 struct pv88090 *VAR_24;
 struct regulator_config VAR_25 = { };
 int VAR_26, VAR_27, VAR_28 = 0;
 unsigned int VAR_29, VAR_30, VAR_31;

 VAR_24 = FUNC_5(&VAR_21->dev, sizeof(struct pv88090), VAR_2);
 if (!VAR_24)
  return -VAR_1;

 VAR_24->dev = &VAR_21->dev;
 VAR_24->regmap = FUNC_6(VAR_21, &VAR_19);
 if (FUNC_0(VAR_24->regmap)) {
  VAR_26 = FUNC_1(VAR_24->regmap);
  FUNC_2(VAR_24->dev, "Failed to allocate register map: %d\n",
   VAR_26);
  return VAR_26;
 }

 FUNC_9(VAR_21, VAR_24);

 if (VAR_21->irq != 0) {
  VAR_28 = FUNC_12(VAR_24->regmap, VAR_15, 0xFF);
  if (VAR_28 < 0) {
   FUNC_2(VAR_24->dev,
    "Failed to mask A reg: %d\n", VAR_28);
   return VAR_28;
  }

  VAR_28 = FUNC_12(VAR_24->regmap, VAR_16, 0xFF);
  if (VAR_28 < 0) {
   FUNC_2(VAR_24->dev,
    "Failed to mask B reg: %d\n", VAR_28);
   return VAR_28;
  }

  VAR_28 = FUNC_8(&VAR_21->dev, VAR_21->irq, ((void*)0),
     VAR_18,
     VAR_4|VAR_3,
     "pv88090", VAR_24);
  if (VAR_28 != 0) {
   FUNC_2(VAR_24->dev, "Failed to request IRQ: %d\n",
    VAR_21->irq);
   return VAR_28;
  }

  VAR_28 = FUNC_11(VAR_24->regmap, VAR_15,
   VAR_13 | VAR_12, 0);
  if (VAR_28 < 0) {
   FUNC_2(VAR_24->dev,
    "Failed to update mask reg: %d\n", VAR_28);
   return VAR_28;
  }

 } else {
  FUNC_4(VAR_24->dev, "No IRQ configured\n");
 }

 VAR_25.dev = VAR_24->dev;
 VAR_25.regmap = VAR_24->regmap;

 for (VAR_27 = 0; VAR_27 < VAR_11; VAR_27++) {
  if (VAR_23)
   VAR_25.init_data = &VAR_23[VAR_27];

  if (VAR_27 == VAR_9 || VAR_27 == VAR_10) {
   VAR_28 = FUNC_10(VAR_24->regmap,
    VAR_20[VAR_27].conf2, &VAR_29);
   if (VAR_28 < 0)
    return VAR_28;

   VAR_29 = (VAR_29 >> VAR_6) &
    VAR_5;

   VAR_28 = FUNC_10(VAR_24->regmap,
    VAR_14, &VAR_30);
   if (VAR_28 < 0)
    return VAR_28;

   VAR_30 = (VAR_30 >>
     (VAR_8 + VAR_27 - 1)) &
    VAR_7;
   VAR_31 = ((VAR_30 << 1) | VAR_29);
   if (VAR_31 > VAR_10) {
    FUNC_2(VAR_24->dev,
     "Invalid index(%d)\n", VAR_31);
    return -VAR_0;
   }

   VAR_20[VAR_27].desc.min_uV
    = VAR_17[VAR_31].min_uV;
   VAR_20[VAR_27].desc.uV_step
    = VAR_17[VAR_31].uV_step;
   VAR_20[VAR_27].desc.n_voltages
    = ((VAR_17[VAR_31].max_uV)
    - (VAR_17[VAR_31].min_uV))
    /(VAR_17[VAR_31].uV_step) + 1;
  }

  VAR_25.driver_data = (void *)&VAR_20[VAR_27];
  VAR_24->rdev[VAR_27] = FUNC_7(VAR_24->dev,
   &VAR_20[VAR_27].desc, &VAR_25);
  if (FUNC_0(VAR_24->rdev[VAR_27])) {
   FUNC_2(VAR_24->dev,
    "Failed to register PV88090 regulator\n");
   return FUNC_1(VAR_24->rdev[VAR_27]);
  }
 }

 return 0;
}
