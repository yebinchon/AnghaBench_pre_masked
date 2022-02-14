
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct spi_device {int mode; int bits_per_word; int irq; int dev; } ;
struct regmap_config {int reg_bits; int val_bits; int write_flag_mask; } ;
struct nvmem_config {char* name; int word_size; int stride; struct ds1343_priv* priv; int reg_write; int reg_read; int size; } ;
struct ds1343_priv {int irq; TYPE_1__* rtc; TYPE_1__* map; int mutex; struct spi_device* spi; } ;
struct TYPE_9__ {int nvram_old_abi; int * ops; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 struct ds1343_priv* FUNC_5 (int *,int,int ) ;
 TYPE_1__* FUNC_6 (struct spi_device*,struct regmap_config*) ;
 int FUNC_7 (int *,int,int *,int ,int ,char*,struct ds1343_priv*) ;
 TYPE_1__* FUNC_8 (int *) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_9 (int *) ;
 int VAR_19 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_1__*,int ,unsigned int*) ;
 int FUNC_12 (TYPE_1__*,int ,unsigned int) ;
 int FUNC_13 (TYPE_1__*,struct nvmem_config*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (struct spi_device*,struct ds1343_priv*) ;
 int FUNC_16 (struct spi_device*) ;

__attribute__((used)) static int FUNC_17(struct spi_device *VAR_20)
{
 struct ds1343_priv *VAR_21;
 struct regmap_config VAR_22 = { .reg_bits = 8, .val_bits = 8,
     .write_flag_mask = 0x80, };
 unsigned int VAR_23;
 int VAR_24;
 struct nvmem_config VAR_25 = {
  .name = "ds1343-",
  .word_size = 1,
  .stride = 1,
  .size = VAR_7,
  .reg_read = VAR_16,
  .reg_write = VAR_17,
 };

 VAR_21 = FUNC_5(&VAR_20->dev, sizeof(struct ds1343_priv), VAR_12);
 if (!VAR_21)
  return -VAR_11;

 VAR_21->spi = VAR_20;
 FUNC_10(&VAR_21->mutex);




 VAR_20->mode = VAR_15 | VAR_14;
 VAR_20->bits_per_word = 8;
 VAR_24 = FUNC_16(VAR_20);
 if (VAR_24)
  return VAR_24;

 FUNC_15(VAR_20, VAR_21);

 VAR_21->map = FUNC_6(VAR_20, &VAR_22);

 if (FUNC_0(VAR_21->map)) {
  FUNC_2(&VAR_20->dev, "spi regmap init failed for rtc ds1343\n");
  return FUNC_1(VAR_21->map);
 }

 VAR_24 = FUNC_11(VAR_21->map, VAR_9, &VAR_23);
 if (VAR_24)
  return VAR_24;

 FUNC_11(VAR_21->map, VAR_2, &VAR_23);
 VAR_23 |= VAR_4;
 VAR_23 &= ~(VAR_3 | VAR_1 | VAR_0);
 FUNC_12(VAR_21->map, VAR_2, VAR_23);

 FUNC_11(VAR_21->map, VAR_10, &VAR_23);
 VAR_23 &= ~(VAR_8 | VAR_6 | VAR_5);
 FUNC_12(VAR_21->map, VAR_10, VAR_23);

 VAR_21->rtc = FUNC_8(&VAR_20->dev);
 if (FUNC_0(VAR_21->rtc))
  return FUNC_1(VAR_21->rtc);

 VAR_21->rtc->nvram_old_abi = 1;
 VAR_21->rtc->ops = &VAR_18;

 VAR_24 = FUNC_14(VAR_21->rtc);
 if (VAR_24)
  return VAR_24;

 VAR_25.priv = VAR_21;
 FUNC_13(VAR_21->rtc, &VAR_25);

 VAR_21->irq = VAR_20->irq;

 if (VAR_21->irq >= 0) {
  VAR_24 = FUNC_7(&VAR_20->dev, VAR_20->irq, ((void*)0),
      VAR_19, VAR_13,
      "ds1343", VAR_21);
  if (VAR_24) {
   VAR_21->irq = -1;
   FUNC_2(&VAR_20->dev,
    "unable to request irq for rtc ds1343\n");
  } else {
   FUNC_4(&VAR_20->dev, 1);
   FUNC_3(&VAR_20->dev, VAR_20->irq);
  }
 }

 VAR_24 = FUNC_9(&VAR_20->dev);
 if (VAR_24)
  FUNC_2(&VAR_20->dev,
   "unable to create sysfs entries for rtc ds1343\n");

 return 0;
}
