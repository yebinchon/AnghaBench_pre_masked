
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct i2c_device_id {int dummy; } ;
struct TYPE_6__ {scalar_t__ platform_data; } ;
struct i2c_client {int irq; TYPE_1__ dev; } ;
struct da9211 {int chip_irq; TYPE_1__* dev; scalar_t__ pdata; int chip_id; scalar_t__ regmap; } ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int VAR_10 ;
 int FUNC_3 (struct da9211*) ;
 int FUNC_4 (TYPE_1__*,char*,...) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 struct da9211* FUNC_6 (TYPE_1__*,int,int ) ;
 scalar_t__ FUNC_7 (struct i2c_client*,int *) ;
 int FUNC_8 (TYPE_1__*,int,int *,int ,int,char*,struct da9211*) ;
 int FUNC_9 (struct i2c_client*,struct da9211*) ;
 int FUNC_10 (scalar_t__,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_11(struct i2c_client *VAR_11,
  const struct i2c_device_id *VAR_12)
{
 struct da9211 *VAR_13;
 int VAR_14, VAR_15;
 unsigned int VAR_16;

 VAR_13 = FUNC_6(&VAR_11->dev, sizeof(struct da9211), VAR_6);
 if (!VAR_13)
  return -VAR_5;

 VAR_13->dev = &VAR_11->dev;
 VAR_13->regmap = FUNC_7(VAR_11, &VAR_10);
 if (FUNC_0(VAR_13->regmap)) {
  VAR_14 = FUNC_1(VAR_13->regmap);
  FUNC_4(VAR_13->dev, "Failed to allocate register map: %d\n",
   VAR_14);
  return VAR_14;
 }

 FUNC_9(VAR_11, VAR_13);

 VAR_13->pdata = VAR_11->dev.platform_data;

 VAR_15 = FUNC_10(VAR_13->regmap, VAR_1, &VAR_16);
 if (VAR_15 < 0) {
  FUNC_4(VAR_13->dev, "Failed to read DEVICE_ID reg: %d\n", VAR_15);
  return VAR_15;
 }

 switch (VAR_16) {
 case 130:
  VAR_13->chip_id = VAR_0;
  break;
 case 129:
  VAR_13->chip_id = VAR_2;
  break;
 case 128:
  VAR_13->chip_id = VAR_3;
  break;
 default:
  FUNC_4(VAR_13->dev, "Unsupported device id = 0x%x.\n", VAR_16);
  return -VAR_4;
 }

 if (!VAR_13->pdata)
  VAR_13->pdata = FUNC_2(VAR_13->dev);

 if (FUNC_0(VAR_13->pdata)) {
  FUNC_4(VAR_13->dev, "No regulators defined for the platform\n");
  return FUNC_1(VAR_13->pdata);
 }

 VAR_13->chip_irq = VAR_11->irq;

 if (VAR_13->chip_irq != 0) {
  VAR_15 = FUNC_8(VAR_13->dev, VAR_13->chip_irq, ((void*)0),
     VAR_9,
     VAR_8|VAR_7,
     "da9211", VAR_13);
  if (VAR_15 != 0) {
   FUNC_4(VAR_13->dev, "Failed to request IRQ: %d\n",
    VAR_13->chip_irq);
   return VAR_15;
  }
 } else {
  FUNC_5(VAR_13->dev, "No IRQ configured\n");
 }

 VAR_15 = FUNC_3(VAR_13);

 if (VAR_15 < 0)
  FUNC_4(VAR_13->dev, "Failed to initialize regulator: %d\n", VAR_15);

 return VAR_15;
}
