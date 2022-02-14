
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct pcf50633_platform_data {int (* probe_done ) (struct pcf50633*) ;int * reg_init_data; } ;
struct pcf50633 {struct platform_device** regulator_pdev; TYPE_2__* dev; int bl_pdev; int adc_pdev; int mbc_pdev; int rtc_pdev; int input_pdev; int regmap; int lock; struct pcf50633_platform_data* pdata; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_8__ {int kobj; } ;
struct i2c_client {TYPE_2__ dev; int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,char*,...) ;
 struct pcf50633_platform_data* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,char*,int,int) ;
 int FUNC_5 (TYPE_2__*,char*) ;
 struct pcf50633* FUNC_6 (TYPE_2__*,int,int ) ;
 int FUNC_7 (struct i2c_client*,int *) ;
 int FUNC_8 (struct i2c_client*,struct pcf50633*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct pcf50633*,char*,int *) ;
 int FUNC_11 (struct pcf50633*,int ) ;
 int FUNC_12 (struct pcf50633*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_13 (struct platform_device*) ;
 int FUNC_14 (struct platform_device*,int *,int) ;
 struct platform_device* FUNC_15 (char*,int) ;
 int FUNC_16 (struct platform_device*) ;
 int FUNC_17 (struct pcf50633*) ;
 int FUNC_18 (int *,int *) ;

__attribute__((used)) static int FUNC_19(struct i2c_client *VAR_7,
    const struct i2c_device_id *VAR_8)
{
 struct pcf50633 *VAR_9;
 struct platform_device *VAR_10;
 struct pcf50633_platform_data *VAR_11 = FUNC_3(&VAR_7->dev);
 int VAR_12, VAR_13, VAR_14;
 int VAR_15, VAR_16;

 if (!VAR_7->irq) {
  FUNC_2(&VAR_7->dev, "Missing IRQ\n");
  return -VAR_1;
 }

 VAR_9 = FUNC_6(&VAR_7->dev, sizeof(*VAR_9), VAR_3);
 if (!VAR_9)
  return -VAR_2;

 FUNC_8(VAR_7, VAR_9);
 VAR_9->dev = &VAR_7->dev;
 VAR_9->pdata = VAR_11;

 FUNC_9(&VAR_9->lock);

 VAR_9->regmap = FUNC_7(VAR_7, &VAR_5);
 if (FUNC_0(VAR_9->regmap)) {
  VAR_14 = FUNC_1(VAR_9->regmap);
  FUNC_2(VAR_9->dev, "Failed to allocate register map: %d\n", VAR_14);
  return VAR_14;
 }

 VAR_15 = FUNC_12(VAR_9, 0);
 VAR_16 = FUNC_12(VAR_9, 1);
 if (VAR_15 < 0 || VAR_16 < 0) {
  FUNC_2(VAR_9->dev, "Unable to probe pcf50633\n");
  VAR_14 = -VAR_0;
  return VAR_14;
 }

 FUNC_4(VAR_9->dev, "Probed device version %d variant %d\n",
       VAR_15, VAR_16);

 FUNC_11(VAR_9, VAR_7->irq);


 FUNC_10(VAR_9, "pcf50633-input", &VAR_9->input_pdev);
 FUNC_10(VAR_9, "pcf50633-rtc", &VAR_9->rtc_pdev);
 FUNC_10(VAR_9, "pcf50633-mbc", &VAR_9->mbc_pdev);
 FUNC_10(VAR_9, "pcf50633-adc", &VAR_9->adc_pdev);
 FUNC_10(VAR_9, "pcf50633-backlight", &VAR_9->bl_pdev);


 for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++) {
  VAR_10 = FUNC_15("pcf50633-regulator", VAR_12);
  if (!VAR_10) {
   VAR_14 = -VAR_2;
   goto err2;
  }

  VAR_10->dev.parent = VAR_9->dev;
  VAR_14 = FUNC_14(VAR_10, &VAR_11->reg_init_data[VAR_12],
            sizeof(VAR_11->reg_init_data[VAR_12]));
  if (VAR_14)
   goto err;

  VAR_14 = FUNC_13(VAR_10);
  if (VAR_14)
   goto err;

  VAR_9->regulator_pdev[VAR_12] = VAR_10;
 }

 VAR_14 = FUNC_18(&VAR_7->dev.kobj, &VAR_6);
 if (VAR_14)
  FUNC_5(VAR_9->dev, "error creating sysfs entries\n");

 if (VAR_11->probe_done)
  VAR_11->probe_done(VAR_9);

 return 0;

err:
 FUNC_16(VAR_10);
err2:
 for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++)
  FUNC_16(VAR_9->regulator_pdev[VAR_13]);

 return VAR_14;
}
