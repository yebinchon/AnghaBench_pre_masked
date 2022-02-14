
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct max8907_platform_data {int pm_off; } ;
struct max8907 {struct i2c_client* i2c_rtc; int irqc_chg; struct i2c_client* i2c_gen; int irqc_on_off; int irqc_rtc; TYPE_1__* dev; struct i2c_client* regmap_rtc; struct i2c_client* regmap_gen; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_6__ {scalar_t__ of_node; } ;
struct i2c_client {int irq; TYPE_1__ dev; int adapter; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct i2c_client*) ;
 int VAR_5 ;
 int FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (TYPE_1__*,char*,int) ;
 struct max8907_platform_data* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,struct max8907*) ;
 struct max8907* FUNC_6 (TYPE_1__*,int,int ) ;
 void* FUNC_7 (struct i2c_client*,int *) ;
 int FUNC_8 (int ) ;
 struct i2c_client* FUNC_9 (int ,int ) ;
 int FUNC_10 (struct i2c_client*,struct max8907*) ;
 int FUNC_11 (struct i2c_client*) ;
 int FUNC_12 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct max8907* VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_13 (TYPE_1__*,int,int ,int ,int *,int ,int *) ;
 int FUNC_14 (scalar_t__,char*) ;
 scalar_t__ VAR_14 ;
 int FUNC_15 (struct i2c_client*,int ,int,int,int *,int *) ;
 int FUNC_16 (int ,int ) ;

__attribute__((used)) static int FUNC_17(struct i2c_client *VAR_15,
           const struct i2c_device_id *VAR_16)
{
 struct max8907 *VAR_17;
 int VAR_18;
 struct max8907_platform_data *VAR_19 = FUNC_4(&VAR_15->dev);
 bool VAR_20 = 0;

 if (VAR_19)
  VAR_20 = VAR_19->pm_off;
 else if (VAR_15->dev.of_node)
  VAR_20 = FUNC_14(VAR_15->dev.of_node,
     "maxim,system-power-controller");

 VAR_17 = FUNC_6(&VAR_15->dev, sizeof(struct max8907), VAR_1);
 if (!VAR_17) {
  VAR_18 = -VAR_0;
  goto err_alloc_drvdata;
 }

 VAR_17->dev = &VAR_15->dev;
 FUNC_5(VAR_17->dev, VAR_17);

 VAR_17->i2c_gen = VAR_15;
 FUNC_10(VAR_15, VAR_17);
 VAR_17->regmap_gen = FUNC_7(VAR_15,
      &VAR_11);
 if (FUNC_1(VAR_17->regmap_gen)) {
  VAR_18 = FUNC_2(VAR_17->regmap_gen);
  FUNC_3(&VAR_15->dev, "gen regmap init failed: %d\n", VAR_18);
  goto err_regmap_gen;
 }

 VAR_17->i2c_rtc = FUNC_9(VAR_15->adapter, VAR_5);
 if (FUNC_1(VAR_17->i2c_rtc)) {
  VAR_18 = FUNC_2(VAR_17->i2c_rtc);
  goto err_dummy_rtc;
 }
 FUNC_10(VAR_17->i2c_rtc, VAR_17);
 VAR_17->regmap_rtc = FUNC_7(VAR_17->i2c_rtc,
      &VAR_12);
 if (FUNC_1(VAR_17->regmap_rtc)) {
  VAR_18 = FUNC_2(VAR_17->regmap_rtc);
  FUNC_3(&VAR_15->dev, "rtc regmap init failed: %d\n", VAR_18);
  goto err_regmap_rtc;
 }

 FUNC_12(VAR_17->i2c_gen->irq, VAR_4);

 VAR_18 = FUNC_15(VAR_17->regmap_gen, VAR_17->i2c_gen->irq,
      VAR_2 | VAR_3, -1,
      &VAR_7,
      &VAR_17->irqc_chg);
 if (VAR_18 != 0) {
  FUNC_3(&VAR_15->dev, "failed to add chg irq chip: %d\n", VAR_18);
  goto err_irqc_chg;
 }
 VAR_18 = FUNC_15(VAR_17->regmap_gen, VAR_17->i2c_gen->irq,
      VAR_2 | VAR_3, -1,
      &VAR_8,
      &VAR_17->irqc_on_off);
 if (VAR_18 != 0) {
  FUNC_3(&VAR_15->dev, "failed to add on off irq chip: %d\n", VAR_18);
  goto err_irqc_on_off;
 }
 VAR_18 = FUNC_15(VAR_17->regmap_rtc, VAR_17->i2c_gen->irq,
      VAR_2 | VAR_3, -1,
      &VAR_13,
      &VAR_17->irqc_rtc);
 if (VAR_18 != 0) {
  FUNC_3(&VAR_15->dev, "failed to add rtc irq chip: %d\n", VAR_18);
  goto err_irqc_rtc;
 }

 FUNC_8(VAR_17->i2c_gen->irq);

 VAR_18 = FUNC_13(VAR_17->dev, -1, VAR_6,
         FUNC_0(VAR_6), ((void*)0), 0, ((void*)0));
 if (VAR_18 != 0) {
  FUNC_3(&VAR_15->dev, "failed to add MFD devices %d\n", VAR_18);
  goto err_add_devices;
 }

 if (VAR_20 && !VAR_14) {
  VAR_9 = VAR_17;
  VAR_14 = VAR_10;
 }

 return 0;

err_add_devices:
 FUNC_16(VAR_17->i2c_gen->irq, VAR_17->irqc_rtc);
err_irqc_rtc:
 FUNC_16(VAR_17->i2c_gen->irq, VAR_17->irqc_on_off);
err_irqc_on_off:
 FUNC_16(VAR_17->i2c_gen->irq, VAR_17->irqc_chg);
err_irqc_chg:
err_regmap_rtc:
 FUNC_11(VAR_17->i2c_rtc);
err_dummy_rtc:
err_regmap_gen:
err_alloc_drvdata:
 return VAR_18;
}
