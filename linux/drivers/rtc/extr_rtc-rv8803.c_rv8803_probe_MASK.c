
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct rv8803_data {int type; TYPE_2__* rtc; struct i2c_client* client; int flags_lock; } ;
struct nvmem_config {char* name; int word_size; int stride; int size; struct i2c_client* priv; int reg_write; int reg_read; } ;
struct i2c_device_id {int driver_data; } ;
struct TYPE_15__ {scalar_t__ of_node; } ;
struct i2c_client {scalar_t__ irq; TYPE_4__ dev; struct i2c_adapter* adapter; } ;
struct i2c_adapter {TYPE_4__ dev; } ;
typedef enum rv8803_type { ____Placeholder_rv8803_type } rv8803_type ;
struct TYPE_14__ {int nvram_old_abi; int max_user_freq; int range_max; int range_min; TYPE_1__* ops; } ;
struct TYPE_13__ {int alarm_irq_enable; int set_alarm; int read_alarm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (TYPE_4__*,char*) ;
 int FUNC_3 (TYPE_4__*,char*) ;
 struct rv8803_data* FUNC_4 (TYPE_4__*,int,int ) ;
 int FUNC_5 (TYPE_4__*,scalar_t__,int *,int ,int,char*,struct i2c_client*) ;
 TYPE_2__* FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (struct i2c_adapter*,int) ;
 int FUNC_8 (struct i2c_client*,struct rv8803_data*) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (TYPE_2__*,struct nvmem_config*) ;
 int FUNC_12 (TYPE_2__*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_13 (struct i2c_client*,int ) ;
 TYPE_1__ VAR_20 ;
 int VAR_21 ;
 int FUNC_14 (struct i2c_client*,int ,int ) ;
 int FUNC_15 (struct rv8803_data*) ;

__attribute__((used)) static int FUNC_16(struct i2c_client *VAR_22,
   const struct i2c_device_id *VAR_23)
{
 struct i2c_adapter *VAR_24 = VAR_22->adapter;
 struct rv8803_data *VAR_25;
 int VAR_26, VAR_27;
 struct nvmem_config VAR_28 = {
  .name = "rv8803_nvram",
  .word_size = 1,
  .stride = 1,
  .size = 1,
  .reg_read = VAR_18,
  .reg_write = VAR_19,
  .priv = VAR_22,
 };

 if (!FUNC_7(VAR_24, VAR_3 |
         VAR_4)) {
  FUNC_2(&VAR_24->dev, "doesn't support I2C_FUNC_SMBUS_BYTE_DATA | I2C_FUNC_SMBUS_I2C_BLOCK\n");
  return -VAR_0;
 }

 VAR_25 = FUNC_4(&VAR_22->dev, sizeof(struct rv8803_data),
         VAR_2);
 if (!VAR_25)
  return -VAR_1;

 FUNC_9(&VAR_25->flags_lock);
 VAR_25->client = VAR_22;
 if (VAR_22->dev.of_node)
  VAR_25->type = (enum rv8803_type)
   FUNC_10(&VAR_22->dev);
 else
  VAR_25->type = VAR_23->driver_data;
 FUNC_8(VAR_22, VAR_25);

 VAR_27 = FUNC_13(VAR_22, VAR_11);
 if (VAR_27 < 0)
  return VAR_27;

 if (VAR_27 & VAR_13)
  FUNC_3(&VAR_22->dev, "Voltage low, temperature compensation stopped.\n");

 if (VAR_27 & VAR_14)
  FUNC_3(&VAR_22->dev, "Voltage low, data loss detected.\n");

 if (VAR_27 & VAR_12)
  FUNC_3(&VAR_22->dev, "An alarm maybe have been missed.\n");

 VAR_25->rtc = FUNC_6(&VAR_22->dev);
 if (FUNC_0(VAR_25->rtc))
  return FUNC_1(VAR_25->rtc);

 if (VAR_22->irq > 0) {
  VAR_26 = FUNC_5(&VAR_22->dev, VAR_22->irq,
      ((void*)0), VAR_17,
      VAR_6 | VAR_5,
      "rv8803", VAR_22);
  if (VAR_26) {
   FUNC_3(&VAR_22->dev, "unable to request IRQ, alarms disabled\n");
   VAR_22->irq = 0;
  } else {
   VAR_20.read_alarm = VAR_16;
   VAR_20.set_alarm = VAR_21;
   VAR_20.alarm_irq_enable = VAR_15;
  }
 }

 VAR_26 = FUNC_14(VAR_25->client, VAR_9, VAR_10);
 if (VAR_26)
  return VAR_26;

 VAR_26 = FUNC_15(VAR_25);
 if (VAR_26) {
  FUNC_2(&VAR_22->dev, "failed to init charger\n");
  return VAR_26;
 }

 VAR_25->rtc->ops = &VAR_20;
 VAR_25->rtc->nvram_old_abi = 1;
 VAR_25->rtc->range_min = VAR_7;
 VAR_25->rtc->range_max = VAR_8;
 VAR_26 = FUNC_12(VAR_25->rtc);
 if (VAR_26)
  return VAR_26;

 FUNC_11(VAR_25->rtc, &VAR_28);

 VAR_25->rtc->max_user_freq = 1;

 return 0;
}
