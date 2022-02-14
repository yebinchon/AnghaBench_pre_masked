
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct regulator_init_data {int dummy; } ;
struct regulator_config {void* driver_data; struct regulator_init_data* init_data; void* regmap; TYPE_4__* dev; } ;
struct pv88080_compatible_regmap {int hvbuck_vsel_mask; int hvbuck_vsel_reg; int hvbuck_enable_mask; int hvbuck_enable_reg; TYPE_1__* buck_regmap; } ;
struct pv88080 {unsigned long type; void** rdev; TYPE_4__* dev; void* regmap; struct pv88080_compatible_regmap* regmap_config; } ;
struct of_device_id {scalar_t__ data; } ;
struct i2c_device_id {unsigned long driver_data; } ;
struct TYPE_14__ {scalar_t__ of_node; } ;
struct i2c_client {int irq; TYPE_4__ dev; } ;
struct TYPE_15__ {unsigned int min_uV; unsigned int uV_step; unsigned int n_voltages; int vsel_mask; int vsel_reg; int enable_mask; int enable_reg; int csel_mask; int csel_reg; } ;
struct TYPE_13__ {unsigned int min_uV; unsigned int uV_step; unsigned int max_uV; } ;
struct TYPE_12__ {TYPE_6__ desc; int conf5; int conf2; int mode_reg; } ;
struct TYPE_11__ {int buck_vsel_mask; int buck_vsel_reg; int buck_enable_mask; int buck_enable_reg; int buck_vrange_gain_reg; int buck_vdac_range_reg; int buck_mode_reg; int buck_limit_mask; int buck_limit_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;


 int FUNC_2 (TYPE_4__*,char*,...) ;
 struct regulator_init_data* FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,char*) ;
 struct pv88080* FUNC_5 (TYPE_4__*,int,int ) ;
 void* FUNC_6 (struct i2c_client*,int *) ;
 void* FUNC_7 (TYPE_4__*,TYPE_6__*,struct regulator_config*) ;
 int FUNC_8 (TYPE_4__*,int ,int *,int ,int,char*,struct pv88080*) ;
 int FUNC_9 (struct i2c_client*,struct pv88080*) ;
 struct of_device_id* FUNC_10 (int ,scalar_t__) ;
 struct pv88080_compatible_regmap VAR_16 ;
 struct pv88080_compatible_regmap VAR_17 ;
 TYPE_3__* VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 TYPE_2__* VAR_22 ;
 int FUNC_11 (void*,int ,unsigned int*) ;
 int FUNC_12 (void*,int ,int,int ) ;
 int FUNC_13 (void*,int ,int) ;

__attribute__((used)) static int FUNC_14(struct i2c_client *VAR_23,
  const struct i2c_device_id *VAR_24)
{
 struct regulator_init_data *VAR_25 = FUNC_3(&VAR_23->dev);
 struct pv88080 *VAR_26;
 const struct pv88080_compatible_regmap *VAR_27;
 const struct of_device_id *VAR_28;
 struct regulator_config VAR_29 = { };
 int VAR_30, VAR_31, VAR_32;
 unsigned int VAR_33, VAR_34;

 VAR_26 = FUNC_5(&VAR_23->dev, sizeof(struct pv88080), VAR_2);
 if (!VAR_26)
  return -VAR_1;

 VAR_26->dev = &VAR_23->dev;
 VAR_26->regmap = FUNC_6(VAR_23, &VAR_21);
 if (FUNC_0(VAR_26->regmap)) {
  VAR_31 = FUNC_1(VAR_26->regmap);
  FUNC_2(VAR_26->dev, "Failed to allocate register map: %d\n",
   VAR_31);
  return VAR_31;
 }

 if (VAR_23->dev.of_node) {
  VAR_28 = FUNC_10(VAR_19, VAR_23->dev.of_node);
  if (!VAR_28) {
   FUNC_2(VAR_26->dev, "Failed to get of_match_node\n");
   return -VAR_0;
  }
  VAR_26->type = (unsigned long)VAR_28->data;
 } else {
  VAR_26->type = VAR_24->driver_data;
 }

 FUNC_9(VAR_23, VAR_26);

 if (VAR_23->irq != 0) {
  VAR_32 = FUNC_13(VAR_26->regmap, VAR_13, 0xFF);
  if (VAR_32 < 0) {
   FUNC_2(VAR_26->dev,
    "Failed to mask A reg: %d\n", VAR_32);
   return VAR_32;
  }
  VAR_32 = FUNC_13(VAR_26->regmap, VAR_14, 0xFF);
  if (VAR_32 < 0) {
   FUNC_2(VAR_26->dev,
    "Failed to mask B reg: %d\n", VAR_32);
   return VAR_32;
  }
  VAR_32 = FUNC_13(VAR_26->regmap, VAR_15, 0xFF);
  if (VAR_32 < 0) {
   FUNC_2(VAR_26->dev,
    "Failed to mask C reg: %d\n", VAR_32);
   return VAR_32;
  }

  VAR_32 = FUNC_8(&VAR_23->dev, VAR_23->irq, ((void*)0),
     VAR_20,
     VAR_4|VAR_3,
     "pv88080", VAR_26);
  if (VAR_32 != 0) {
   FUNC_2(VAR_26->dev, "Failed to request IRQ: %d\n",
    VAR_23->irq);
   return VAR_32;
  }

  VAR_32 = FUNC_12(VAR_26->regmap, VAR_13,
   VAR_12 | VAR_11, 0);
  if (VAR_32 < 0) {
   FUNC_2(VAR_26->dev,
    "Failed to update mask reg: %d\n", VAR_32);
   return VAR_32;
  }
 } else {
  FUNC_4(VAR_26->dev, "No IRQ configured\n");
 }

 switch (VAR_26->type) {
 case 129:
  VAR_26->regmap_config = &VAR_16;
  break;
 case 128:
  VAR_26->regmap_config = &VAR_17;
  break;
 }

 VAR_27 = VAR_26->regmap_config;
 VAR_29.dev = VAR_26->dev;
 VAR_29.regmap = VAR_26->regmap;


 for (VAR_30 = 0; VAR_30 < VAR_10-1; VAR_30++) {
  if (VAR_25)
   VAR_29.init_data = &VAR_25[VAR_30];

  VAR_22[VAR_30].desc.csel_reg
   = VAR_27->buck_regmap[VAR_30].buck_limit_reg;
  VAR_22[VAR_30].desc.csel_mask
   = VAR_27->buck_regmap[VAR_30].buck_limit_mask;
  VAR_22[VAR_30].mode_reg
   = VAR_27->buck_regmap[VAR_30].buck_mode_reg;
  VAR_22[VAR_30].conf2
   = VAR_27->buck_regmap[VAR_30].buck_vdac_range_reg;
  VAR_22[VAR_30].conf5
   = VAR_27->buck_regmap[VAR_30].buck_vrange_gain_reg;
  VAR_22[VAR_30].desc.enable_reg
   = VAR_27->buck_regmap[VAR_30].buck_enable_reg;
  VAR_22[VAR_30].desc.enable_mask
   = VAR_27->buck_regmap[VAR_30].buck_enable_mask;
  VAR_22[VAR_30].desc.vsel_reg
   = VAR_27->buck_regmap[VAR_30].buck_vsel_reg;
  VAR_22[VAR_30].desc.vsel_mask
   = VAR_27->buck_regmap[VAR_30].buck_vsel_mask;

  VAR_32 = FUNC_11(VAR_26->regmap,
    VAR_22[VAR_30].conf2, &VAR_33);
  if (VAR_32 < 0)
   return VAR_32;
  VAR_33 = ((VAR_33 >> VAR_6) &
   VAR_5);

  VAR_32 = FUNC_11(VAR_26->regmap,
    VAR_22[VAR_30].conf5, &VAR_34);
  if (VAR_32 < 0)
   return VAR_32;
  VAR_34 = ((VAR_34 >> VAR_8) &
   VAR_7);

  VAR_22[VAR_30].desc.min_uV =
   VAR_18[VAR_33].min_uV * (VAR_34+1);
  VAR_22[VAR_30].desc.uV_step =
   VAR_18[VAR_33].uV_step * (VAR_34+1);
  VAR_22[VAR_30].desc.n_voltages =
   ((VAR_18[VAR_33].max_uV * (VAR_34+1))
   - (VAR_22[VAR_30].desc.min_uV))
   /(VAR_22[VAR_30].desc.uV_step) + 1;

  VAR_29.driver_data = (void *)&VAR_22[VAR_30];
  VAR_26->rdev[VAR_30] = FUNC_7(VAR_26->dev,
   &VAR_22[VAR_30].desc, &VAR_29);
  if (FUNC_0(VAR_26->rdev[VAR_30])) {
   FUNC_2(VAR_26->dev,
    "Failed to register PV88080 regulator\n");
   return FUNC_1(VAR_26->rdev[VAR_30]);
  }
 }

 VAR_22[VAR_9].desc.enable_reg
  = VAR_27->hvbuck_enable_reg;
 VAR_22[VAR_9].desc.enable_mask
  = VAR_27->hvbuck_enable_mask;
 VAR_22[VAR_9].desc.vsel_reg
  = VAR_27->hvbuck_vsel_reg;
 VAR_22[VAR_9].desc.vsel_mask
  = VAR_27->hvbuck_vsel_mask;


 if (VAR_25)
  VAR_29.init_data = &VAR_25[VAR_9];

 VAR_29.driver_data = (void *)&VAR_22[VAR_9];
 VAR_26->rdev[VAR_9] = FUNC_7(VAR_26->dev,
  &VAR_22[VAR_9].desc, &VAR_29);
 if (FUNC_0(VAR_26->rdev[VAR_9])) {
  FUNC_2(VAR_26->dev, "Failed to register PV88080 regulator\n");
  return FUNC_1(VAR_26->rdev[VAR_9]);
 }

 return 0;
}
