
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct i2c_device_id {int dummy; } ;
struct i2c_client {int adapter; int irq; int dev; } ;
struct da9150_pdata {int irq_base; int fg_pdata; } ;
struct da9150_fg_pdata {int dummy; } ;
struct da9150 {int irq_base; struct i2c_client* core_qif; int regmap_irq_data; int irq; int * dev; struct i2c_client* regmap; } ;
struct TYPE_4__ {int pdata_size; int platform_data; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*) ;
 TYPE_1__* VAR_8 ;
 int FUNC_3 (struct da9150*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int *,char*,...) ;
 struct da9150_pdata* FUNC_5 (int *) ;
 struct da9150* FUNC_6 (int *,int,int ) ;
 struct i2c_client* FUNC_7 (struct i2c_client*,int *) ;
 int FUNC_8 (int ) ;
 struct i2c_client* FUNC_9 (int ,int) ;
 int FUNC_10 (struct i2c_client*,struct da9150*) ;
 int FUNC_11 (struct i2c_client*) ;
 int FUNC_12 (int *,int,TYPE_1__*,int ,int *,int,int *) ;
 int FUNC_13 (struct i2c_client*,int ,int,int,int *,int *) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ) ;

__attribute__((used)) static int FUNC_16(struct i2c_client *VAR_11,
   const struct i2c_device_id *VAR_12)
{
 struct da9150 *VAR_13;
 struct da9150_pdata *VAR_14 = FUNC_5(&VAR_11->dev);
 int VAR_15;
 int VAR_16;

 VAR_13 = FUNC_6(&VAR_11->dev, sizeof(*VAR_13), VAR_5);
 if (!VAR_13)
  return -VAR_4;

 VAR_13->dev = &VAR_11->dev;
 VAR_13->irq = VAR_11->irq;
 FUNC_10(VAR_11, VAR_13);

 VAR_13->regmap = FUNC_7(VAR_11, &VAR_9);
 if (FUNC_1(VAR_13->regmap)) {
  VAR_16 = FUNC_2(VAR_13->regmap);
  FUNC_4(VAR_13->dev, "Failed to allocate register map: %d\n",
   VAR_16);
  return VAR_16;
 }


 VAR_15 = FUNC_3(VAR_13, VAR_0);
 VAR_15 = (VAR_15 & VAR_1) >> 1;
 VAR_15 |= VAR_3;
 VAR_13->core_qif = FUNC_9(VAR_11->adapter, VAR_15);
 if (FUNC_1(VAR_13->core_qif)) {
  FUNC_4(VAR_13->dev, "Failed to attach QIF client\n");
  return FUNC_2(VAR_13->core_qif);
 }

 FUNC_10(VAR_13->core_qif, VAR_13);

 if (VAR_14) {
  VAR_13->irq_base = VAR_14->irq_base;

  VAR_8[VAR_2].platform_data = VAR_14->fg_pdata;
  VAR_8[VAR_2].pdata_size =
   sizeof(struct da9150_fg_pdata);
 } else {
  VAR_13->irq_base = -1;
 }

 VAR_16 = FUNC_13(VAR_13->regmap, VAR_13->irq,
      VAR_7 | VAR_6,
      VAR_13->irq_base, &VAR_10,
      &VAR_13->regmap_irq_data);
 if (VAR_16) {
  FUNC_4(VAR_13->dev, "Failed to add regmap irq chip: %d\n",
   VAR_16);
  goto regmap_irq_fail;
 }


 VAR_13->irq_base = FUNC_15(VAR_13->regmap_irq_data);

 FUNC_8(VAR_13->irq);

 VAR_16 = FUNC_12(VAR_13->dev, -1, VAR_8,
         FUNC_0(VAR_8), ((void*)0),
         VAR_13->irq_base, ((void*)0));
 if (VAR_16) {
  FUNC_4(VAR_13->dev, "Failed to add child devices: %d\n", VAR_16);
  goto mfd_fail;
 }

 return 0;

mfd_fail:
 FUNC_14(VAR_13->irq, VAR_13->regmap_irq_data);
regmap_irq_fail:
 FUNC_11(VAR_13->core_qif);

 return VAR_16;
}
