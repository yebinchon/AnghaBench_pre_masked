
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; scalar_t__ irq; } ;
struct TYPE_3__ {unsigned int chip_type; int * dev; int regmap; } ;
struct bd718xx {int irq_data; TYPE_1__ chip; scalar_t__ chip_irq; } ;
struct TYPE_4__ {int irq; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct bd718xx*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_2__ VAR_9 ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,struct bd718xx*) ;
 struct bd718xx* FUNC_6 (int *,int,int ) ;
 int FUNC_7 (int *,int ,int ,int ,int *,int ,int ) ;
 int FUNC_8 (int *,int ,scalar_t__,int ,int ,int *,int *) ;
 int FUNC_9 (struct i2c_client*,int *) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ) ;

__attribute__((used)) static int FUNC_13(struct i2c_client *VAR_10,
       const struct i2c_device_id *VAR_11)
{
 struct bd718xx *VAR_12;
 int VAR_13;

 if (!VAR_10->irq) {
  FUNC_4(&VAR_10->dev, "No IRQ configured\n");
  return -VAR_1;
 }

 VAR_12 = FUNC_6(&VAR_10->dev, sizeof(struct bd718xx), VAR_3);

 if (!VAR_12)
  return -VAR_2;

 VAR_12->chip_irq = VAR_10->irq;
 VAR_12->chip.chip_type = (unsigned int)(uintptr_t)
    FUNC_10(&VAR_10->dev);
 VAR_12->chip.dev = &VAR_10->dev;
 FUNC_5(&VAR_10->dev, VAR_12);

 VAR_12->chip.regmap = FUNC_9(VAR_10,
          &VAR_8);
 if (FUNC_1(VAR_12->chip.regmap)) {
  FUNC_4(&VAR_10->dev, "regmap initialization failed\n");
  return FUNC_2(VAR_12->chip.regmap);
 }

 VAR_13 = FUNC_8(&VAR_10->dev, VAR_12->chip.regmap,
           VAR_12->chip_irq, VAR_4, 0,
           &VAR_6, &VAR_12->irq_data);
 if (VAR_13) {
  FUNC_4(&VAR_10->dev, "Failed to add irq_chip\n");
  return VAR_13;
 }

 VAR_13 = FUNC_3(VAR_12);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_12(VAR_12->irq_data, VAR_0);

 if (VAR_13 < 0) {
  FUNC_4(&VAR_10->dev, "Failed to get the IRQ\n");
  return VAR_13;
 }

 VAR_9.irq = VAR_13;

 VAR_13 = FUNC_7(VAR_12->chip.dev, VAR_5,
       VAR_7,
       FUNC_0(VAR_7), ((void*)0), 0,
       FUNC_11(VAR_12->irq_data));
 if (VAR_13)
  FUNC_4(&VAR_10->dev, "Failed to create subdevices\n");

 return VAR_13;
}
