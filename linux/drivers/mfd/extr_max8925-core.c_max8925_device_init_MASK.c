
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct max8925_platform_data {scalar_t__ touch; scalar_t__ backlight; scalar_t__ power; } ;
struct max8925_chip {int dev; int tsc_irq; int irq_base; TYPE_6__* rtc; TYPE_6__* adc; TYPE_6__* i2c; } ;
struct max8925_backlight_pdata {int dummy; } ;
struct TYPE_11__ {int irq; } ;
struct TYPE_10__ {int pdata_size; scalar_t__* platform_data; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct max8925_chip*,struct max8925_platform_data*) ;
 int FUNC_3 (struct max8925_chip*,int ,struct max8925_platform_data*) ;
 int FUNC_4 (TYPE_6__*,int ) ;
 int FUNC_5 (TYPE_6__*,int ,int,int) ;
 int FUNC_6 (int ,int ,TYPE_1__*,int ,int *,int ,int *) ;
 int FUNC_7 (int ) ;
 TYPE_1__* VAR_7 ;
 TYPE_1__* VAR_8 ;
 TYPE_1__* VAR_9 ;
 TYPE_1__* VAR_10 ;

int FUNC_8(struct max8925_chip *VAR_11,
      struct max8925_platform_data *VAR_12)
{
 int VAR_13;

 FUNC_3(VAR_11, VAR_11->i2c->irq, VAR_12);

 if (VAR_12 && (VAR_12->power || VAR_12->touch)) {

  FUNC_5(VAR_11->i2c, VAR_3, 1, 1);

  FUNC_5(VAR_11->adc, VAR_4, 3, 2);

  do {
   VAR_13 = FUNC_4(VAR_11->adc, VAR_5);
  } while (VAR_13 & VAR_2);

  FUNC_5(VAR_11->adc, VAR_0, 3, 2);
 }


 FUNC_5(VAR_11->rtc, VAR_1, 1 << 4, 1 << 4);

 VAR_13 = FUNC_6(VAR_11->dev, 0, &VAR_9[0],
         FUNC_0(VAR_9),
         ((void*)0), VAR_11->irq_base, ((void*)0));
 if (VAR_13 < 0) {
  FUNC_1(VAR_11->dev, "Failed to add rtc subdev\n");
  goto out;
 }

 VAR_13 = FUNC_6(VAR_11->dev, 0, &VAR_7[0],
         FUNC_0(VAR_7),
         ((void*)0), VAR_11->irq_base, ((void*)0));
 if (VAR_13 < 0) {
  FUNC_1(VAR_11->dev, "Failed to add onkey subdev\n");
  goto out_dev;
 }

 FUNC_2(VAR_11, VAR_12);

 if (VAR_12 && VAR_12->backlight) {
  VAR_6[0].platform_data = &VAR_12->backlight;
  VAR_6[0].pdata_size = sizeof(struct max8925_backlight_pdata);
 }
 VAR_13 = FUNC_6(VAR_11->dev, 0, VAR_6, FUNC_0(VAR_6),
         ((void*)0), 0, ((void*)0));
 if (VAR_13 < 0) {
  FUNC_1(VAR_11->dev, "Failed to add backlight subdev\n");
  goto out_dev;
 }

 VAR_13 = FUNC_6(VAR_11->dev, 0, &VAR_8[0],
         FUNC_0(VAR_8),
         ((void*)0), 0, ((void*)0));
 if (VAR_13 < 0) {
  FUNC_1(VAR_11->dev,
   "Failed to add power supply subdev, err = %d\n", VAR_13);
  goto out_dev;
 }

 if (VAR_12 && VAR_12->touch) {
  VAR_13 = FUNC_6(VAR_11->dev, 0, &VAR_10[0],
          FUNC_0(VAR_10),
          ((void*)0), VAR_11->tsc_irq, ((void*)0));
  if (VAR_13 < 0) {
   FUNC_1(VAR_11->dev, "Failed to add touch subdev\n");
   goto out_dev;
  }
 }

 return 0;
out_dev:
 FUNC_7(VAR_11->dev);
out:
 return VAR_13;
}
