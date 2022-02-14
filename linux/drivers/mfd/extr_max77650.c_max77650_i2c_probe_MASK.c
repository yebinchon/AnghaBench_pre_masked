
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap_irq_chip_data {int dummy; } ;
struct regmap {int dummy; } ;
struct irq_domain {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {int irq; struct device dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct regmap*) ;




 int FUNC_2 (unsigned int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct regmap*) ;
 int FUNC_4 (struct device*,char*,...) ;
 int FUNC_5 (struct device*,int ,int ,int ,int *,int ,struct irq_domain*) ;
 int FUNC_6 (struct device*,struct regmap*,int ,int,int ,int *,struct regmap_irq_chip_data**) ;
 struct regmap* FUNC_7 (struct i2c_client*,int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct irq_domain* FUNC_8 (struct regmap_irq_chip_data*) ;
 int FUNC_9 (struct regmap*,int ,unsigned int*) ;
 int FUNC_10 (struct regmap*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_11(struct i2c_client *VAR_11)
{
 struct regmap_irq_chip_data *VAR_12;
 struct device *VAR_13 = &VAR_11->dev;
 struct irq_domain *VAR_14;
 struct regmap *VAR_15;
 unsigned int VAR_16;
 int VAR_17, VAR_18;

 VAR_15 = FUNC_7(VAR_11, &VAR_10);
 if (FUNC_1(VAR_15)) {
  FUNC_4(VAR_13, "Unable to initialise I2C Regmap\n");
  return FUNC_3(VAR_15);
 }

 VAR_17 = FUNC_9(VAR_15, VAR_3, &VAR_16);
 if (VAR_17) {
  FUNC_4(VAR_13, "Unable to read Chip ID\n");
  return VAR_17;
 }

 VAR_18 = FUNC_2(VAR_16);
 switch (VAR_18) {
 case 131:
 case 130:
 case 129:
 case 128:
  break;
 default:
  FUNC_4(VAR_13, "Chip not supported - ID: 0x%02x\n", VAR_18);
  return -VAR_0;
 }







 VAR_17 = FUNC_10(VAR_15,
    VAR_4,
    VAR_6,
    VAR_5);
 if (VAR_17) {
  FUNC_4(VAR_13, "Unable to change the power mode\n");
  return VAR_17;
 }

 VAR_17 = FUNC_6(VAR_13, VAR_15, VAR_11->irq,
          VAR_1 | VAR_2, 0,
          &VAR_9, &VAR_12);
 if (VAR_17) {
  FUNC_4(VAR_13, "Unable to add Regmap IRQ chip\n");
  return VAR_17;
 }

 VAR_14 = FUNC_8(VAR_12);

 return FUNC_5(VAR_13, VAR_7,
        VAR_8, FUNC_0(VAR_8),
        ((void*)0), 0, VAR_14);
}
