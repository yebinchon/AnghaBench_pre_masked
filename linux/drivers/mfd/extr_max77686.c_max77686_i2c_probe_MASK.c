
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap_irq_chip {int dummy; } ;
struct regmap_config {int dummy; } ;
struct mfd_cell {int dummy; } ;
struct max77686_dev {unsigned long type; int * dev; int irq_data; int irq; int regmap; struct i2c_client* i2c; } ;
struct i2c_client {int dev; int irq; } ;


 int FUNC_0 (struct mfd_cell*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 unsigned long VAR_7 ;
 int FUNC_3 (int *,char*,...) ;
 struct max77686_dev* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int *,int,struct mfd_cell const*,int,int *,int ,int *) ;
 int FUNC_6 (int *,int ,int ,int,int ,struct regmap_irq_chip const*,int *) ;
 int FUNC_7 (struct i2c_client*,struct regmap_config const*) ;
 int FUNC_8 (struct i2c_client*,struct max77686_dev*) ;
 struct mfd_cell* VAR_8 ;
 struct regmap_irq_chip VAR_9 ;
 struct regmap_config VAR_10 ;
 struct mfd_cell* VAR_11 ;
 struct regmap_irq_chip VAR_12 ;
 struct regmap_config VAR_13 ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_11(struct i2c_client *VAR_14)
{
 struct max77686_dev *VAR_15 = ((void*)0);
 unsigned int VAR_16;
 int VAR_17 = 0;
 const struct regmap_config *VAR_18;
 const struct regmap_irq_chip *VAR_19;
 const struct mfd_cell *VAR_20;
 int VAR_21;

 VAR_15 = FUNC_4(&VAR_14->dev,
    sizeof(struct max77686_dev), VAR_2);
 if (!VAR_15)
  return -VAR_1;

 FUNC_8(VAR_14, VAR_15);
 VAR_15->type = (unsigned long)FUNC_9(&VAR_14->dev);
 VAR_15->dev = &VAR_14->dev;
 VAR_15->i2c = VAR_14;

 VAR_15->irq = VAR_14->irq;

 if (VAR_15->type == VAR_7) {
  VAR_18 = &VAR_10;
  VAR_19 = &VAR_9;
  VAR_20 = VAR_8;
  VAR_21 = FUNC_0(VAR_8);
 } else {
  VAR_18 = &VAR_13;
  VAR_19 = &VAR_12;
  VAR_20 = VAR_11;
  VAR_21 = FUNC_0(VAR_11);
 }

 VAR_15->regmap = FUNC_7(VAR_14, VAR_18);
 if (FUNC_1(VAR_15->regmap)) {
  VAR_17 = FUNC_2(VAR_15->regmap);
  FUNC_3(VAR_15->dev, "Failed to allocate register map: %d\n",
    VAR_17);
  return VAR_17;
 }

 VAR_17 = FUNC_10(VAR_15->regmap, VAR_6, &VAR_16);
 if (VAR_17 < 0) {
  FUNC_3(VAR_15->dev,
   "device not found on this channel (this is not an error)\n");
  return -VAR_0;
 }

 VAR_17 = FUNC_6(&VAR_14->dev, VAR_15->regmap,
           VAR_15->irq,
           VAR_5 | VAR_3 |
           VAR_4, 0, VAR_19,
           &VAR_15->irq_data);
 if (VAR_17 < 0) {
  FUNC_3(&VAR_14->dev, "failed to add PMIC irq chip: %d\n", VAR_17);
  return VAR_17;
 }

 VAR_17 = FUNC_5(VAR_15->dev, -1, VAR_20, VAR_21, ((void*)0),
       0, ((void*)0));
 if (VAR_17 < 0) {
  FUNC_3(&VAR_14->dev, "failed to add MFD devices: %d\n", VAR_17);
  return VAR_17;
 }

 return 0;
}
