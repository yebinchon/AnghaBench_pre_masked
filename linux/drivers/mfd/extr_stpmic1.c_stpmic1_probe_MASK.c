
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stpmic1 {scalar_t__ irq; int irq_data; int regmap; struct device* dev; } ;
struct i2c_device_id {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct i2c_client {struct device dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct device*,char*,int ) ;
 struct stpmic1* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*,int ,int,int,int ,int *,int *) ;
 int FUNC_7 (struct i2c_client*,int *) ;
 int FUNC_8 (struct i2c_client*,struct stpmic1*) ;
 scalar_t__ FUNC_9 (struct device_node*,int ) ;
 int FUNC_10 (int ,int ,int *) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_11(struct i2c_client *VAR_8,
    const struct i2c_device_id *VAR_9)
{
 struct stpmic1 *VAR_10;
 struct device *VAR_11 = &VAR_8->dev;
 int VAR_12;
 struct device_node *VAR_13 = VAR_11->of_node;
 u32 VAR_14;

 VAR_10 = FUNC_4(VAR_11, sizeof(struct stpmic1), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 FUNC_8(VAR_8, VAR_10);
 VAR_10->dev = VAR_11;

 VAR_10->regmap = FUNC_7(VAR_8, &VAR_6);
 if (FUNC_0(VAR_10->regmap))
  return FUNC_1(VAR_10->regmap);

 VAR_10->irq = FUNC_9(VAR_13, VAR_4);
 if (VAR_10->irq < 0) {
  FUNC_2(VAR_11, "Failed to get main IRQ: %d\n", VAR_10->irq);
  return VAR_10->irq;
 }

 VAR_12 = FUNC_10(VAR_10->regmap, VAR_5, &VAR_14);
 if (VAR_12) {
  FUNC_2(VAR_11, "Unable to read PMIC version\n");
  return VAR_12;
 }
 FUNC_3(VAR_11, "PMIC Chip Version: 0x%x\n", VAR_14);


 VAR_12 = FUNC_6(VAR_11, VAR_10->regmap, VAR_10->irq,
           VAR_2 | VAR_3,
           0, &VAR_7,
           &VAR_10->irq_data);
 if (VAR_12) {
  FUNC_2(VAR_11, "IRQ Chip registration failed: %d\n", VAR_12);
  return VAR_12;
 }

 return FUNC_5(VAR_11);
}
