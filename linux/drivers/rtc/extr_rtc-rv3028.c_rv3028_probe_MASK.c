
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct rv3028_data {TYPE_2__* rtc; int regmap; } ;
struct nvmem_config {char* name; int word_size; int stride; int size; int priv; int reg_write; int reg_read; int type; } ;
struct i2c_client {scalar_t__ irq; int dev; } ;
struct TYPE_9__ {int max_user_freq; TYPE_1__* ops; int range_max; int range_min; } ;
struct TYPE_8__ {int alarm_irq_enable; int set_alarm; int read_alarm; } ;


 int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*,scalar_t__*) ;
 struct rv3028_data* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (struct i2c_client*,int *) ;
 int FUNC_7 (int *,scalar_t__,int *,int ,int,char*,struct rv3028_data*) ;
 TYPE_2__* FUNC_8 (int *) ;
 int FUNC_9 (struct i2c_client*,struct rv3028_data*) ;
 int VAR_19 ;
 int FUNC_10 (int ,int ,int*) ;
 int FUNC_11 (int ,int ,int,int) ;
 int FUNC_12 (TYPE_2__*,int *) ;
 int FUNC_13 (TYPE_2__*,struct nvmem_config*) ;
 int FUNC_14 (TYPE_2__*) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 TYPE_1__ VAR_28 ;
 int VAR_29 ;
 scalar_t__* VAR_30 ;

__attribute__((used)) static int FUNC_15(struct i2c_client *VAR_31)
{
 struct rv3028_data *VAR_32;
 int VAR_33, VAR_34;
 u32 VAR_35;
 struct nvmem_config VAR_36 = {
  .name = "rv3028_nvram",
  .word_size = 1,
  .stride = 1,
  .size = 2,
  .type = VAR_4,
  .reg_read = VAR_26,
  .reg_write = VAR_27,
 };
 struct nvmem_config VAR_37 = {
  .name = "rv3028_eeprom",
  .word_size = 1,
  .stride = 1,
  .size = 43,
  .type = VAR_5,
  .reg_read = VAR_22,
  .reg_write = VAR_23,
 };

 VAR_32 = FUNC_5(&VAR_31->dev, sizeof(struct rv3028_data),
         VAR_1);
 if (!VAR_32)
  return -VAR_0;

 VAR_32->regmap = FUNC_6(VAR_31, &VAR_19);

 FUNC_9(VAR_31, VAR_32);

 VAR_33 = FUNC_10(VAR_32->regmap, VAR_16, &VAR_34);
 if (VAR_33 < 0)
  return VAR_33;

 if (VAR_34 & VAR_18)
  FUNC_3(&VAR_31->dev, "Voltage low, data loss detected.\n");

 if (VAR_34 & VAR_17)
  FUNC_3(&VAR_31->dev, "An alarm may have been missed.\n");

 VAR_32->rtc = FUNC_8(&VAR_31->dev);
 if (FUNC_1(VAR_32->rtc))
  return FUNC_2(VAR_32->rtc);

 if (VAR_31->irq > 0) {
  VAR_33 = FUNC_7(&VAR_31->dev, VAR_31->irq,
      ((void*)0), VAR_25,
      VAR_3 | VAR_2,
      "rv3028", VAR_32);
  if (VAR_33) {
   FUNC_3(&VAR_31->dev, "unable to request IRQ, alarms disabled\n");
   VAR_31->irq = 0;
  } else {
   VAR_28.read_alarm = VAR_24;
   VAR_28.set_alarm = VAR_29;
   VAR_28.alarm_irq_enable = VAR_20;
  }
 }

 VAR_33 = FUNC_11(VAR_32->regmap, VAR_11,
     VAR_12, VAR_12);
 if (VAR_33)
  return VAR_33;


 VAR_33 = FUNC_11(VAR_32->regmap, VAR_13,
     VAR_14 | VAR_15,
     VAR_14 | VAR_15);
 if (VAR_33)
  return VAR_33;


 if (!FUNC_4(&VAR_31->dev, "trickle-resistor-ohms",
          &VAR_35)) {
  int VAR_38;

  for (VAR_38 = 0; VAR_38 < FUNC_0(VAR_30); VAR_38++)
   if (VAR_35 == VAR_30[VAR_38])
    break;

  if (VAR_38 < FUNC_0(VAR_30)) {
   VAR_33 = FUNC_11(VAR_32->regmap, VAR_8,
       VAR_9 |
       VAR_10,
       VAR_9 | VAR_38);
   if (VAR_33)
    return VAR_33;
  } else {
   FUNC_3(&VAR_31->dev, "invalid trickle resistor value\n");
  }
 }

 VAR_33 = FUNC_12(VAR_32->rtc, &VAR_21);
 if (VAR_33)
  return VAR_33;

 VAR_32->rtc->range_min = VAR_6;
 VAR_32->rtc->range_max = VAR_7;
 VAR_32->rtc->ops = &VAR_28;
 VAR_33 = FUNC_14(VAR_32->rtc);
 if (VAR_33)
  return VAR_33;

 VAR_36.priv = VAR_32->regmap;
 FUNC_13(VAR_32->rtc, &VAR_36);
 VAR_37.priv = VAR_32->regmap;
 FUNC_13(VAR_32->rtc, &VAR_37);

 VAR_32->rtc->max_user_freq = 1;

 return 0;
}
