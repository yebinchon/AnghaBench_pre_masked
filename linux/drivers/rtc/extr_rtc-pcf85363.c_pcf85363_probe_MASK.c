
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct pcf85x63_config {int num_nvram; int regmap; } ;
struct pcf85363 {TYPE_1__* rtc; TYPE_1__* regmap; } ;
struct nvmem_config {char* name; int word_size; int stride; int size; struct pcf85363* priv; int reg_write; int reg_read; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {scalar_t__ irq; int dev; } ;
struct TYPE_9__ {int * ops; int range_max; int range_min; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;

 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*) ;
 struct pcf85363* FUNC_4 (int *,int,int ) ;
 TYPE_1__* FUNC_5 (struct i2c_client*,int *) ;
 int FUNC_6 (int *,scalar_t__,int *,int ,int,char*,struct i2c_client*) ;
 TYPE_1__* FUNC_7 (int *) ;
 int FUNC_8 (struct i2c_client*,struct pcf85363*) ;
 void* FUNC_9 (int *) ;


 int VAR_10 ;


 struct pcf85x63_config VAR_11 ;
 int FUNC_10 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_11 (TYPE_1__*,int ,int ) ;
 int FUNC_12 (TYPE_1__*,struct nvmem_config*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_13 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_14(struct i2c_client *VAR_14,
     const struct i2c_device_id *VAR_15)
{
 struct pcf85363 *VAR_16;
 const struct pcf85x63_config *VAR_17 = &VAR_11;
 const void *VAR_18 = FUNC_9(&VAR_14->dev);
 static struct nvmem_config VAR_19[] = {
  {
   .name = "pcf85x63-",
   .word_size = 1,
   .stride = 1,
   .size = 1,
   .reg_read = 129,
   .reg_write = 128,
  }, {
   .name = "pcf85363-",
   .word_size = 1,
   .stride = 1,
   .size = 132,
   .reg_read = 131,
   .reg_write = 130,
  },
 };
 int VAR_20, VAR_21;

 if (VAR_18)
  VAR_17 = VAR_18;

 VAR_16 = FUNC_4(&VAR_14->dev, sizeof(struct pcf85363),
    VAR_3);
 if (!VAR_16)
  return -VAR_2;

 VAR_16->regmap = FUNC_5(VAR_14, &VAR_17->regmap);
 if (FUNC_0(VAR_16->regmap)) {
  FUNC_2(&VAR_14->dev, "regmap allocation failed\n");
  return FUNC_1(VAR_16->regmap);
 }

 FUNC_8(VAR_14, VAR_16);

 VAR_16->rtc = FUNC_7(&VAR_14->dev);
 if (FUNC_0(VAR_16->rtc))
  return FUNC_1(VAR_16->rtc);

 VAR_16->rtc->ops = &VAR_12;
 VAR_16->rtc->range_min = VAR_8;
 VAR_16->rtc->range_max = VAR_9;

 if (VAR_14->irq > 0) {
  FUNC_11(VAR_16->regmap, VAR_0, 0);
  FUNC_10(VAR_16->regmap, VAR_1,
       VAR_7, VAR_6);
  VAR_20 = FUNC_6(&VAR_14->dev, VAR_14->irq,
      ((void*)0), VAR_10,
      VAR_5 | VAR_4,
      "pcf85363", VAR_14);
  if (VAR_20)
   FUNC_3(&VAR_14->dev, "unable to request IRQ, alarms disabled\n");
  else
   VAR_16->rtc->ops = &VAR_13;
 }

 VAR_20 = FUNC_13(VAR_16->rtc);

 for (VAR_21 = 0; VAR_21 < VAR_17->num_nvram; VAR_21++) {
  VAR_19[VAR_21].priv = VAR_16;
  FUNC_12(VAR_16->rtc, &VAR_19[VAR_21]);
 }

 return VAR_20;
}
