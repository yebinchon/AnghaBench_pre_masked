
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max77693_dev {int irq_data_topsys; int irq; int * dev; int regmap; int type; struct i2c_client* i2c; } ;
struct i2c_device_id {int driver_data; } ;
struct i2c_client {int dev; int irq; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*,unsigned int) ;
 int FUNC_5 (int *,int) ;
 struct max77693_dev* FUNC_6 (int *,int,int ) ;
 int FUNC_7 (struct i2c_client*,int *) ;
 int FUNC_8 (struct i2c_client*,struct max77693_dev*) ;
 int FUNC_9 (struct max77693_dev*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_10 (int *,int,int ,int ,int *,int ,int *) ;
 int FUNC_11 (int ,int ,int,int ,int *,int *) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ,unsigned int*) ;
 int FUNC_14 (int ,int ,scalar_t__,unsigned int) ;

__attribute__((used)) static int FUNC_15(struct i2c_client *VAR_11,
     const struct i2c_device_id *VAR_12)
{
 struct max77693_dev *VAR_13;
 unsigned int VAR_14;
 int VAR_15;

 VAR_13 = FUNC_6(&VAR_11->dev, sizeof(*VAR_13), VAR_1);
 if (!VAR_13)
  return -VAR_0;

 FUNC_8(VAR_11, VAR_13);
 VAR_13->dev = &VAR_11->dev;
 VAR_13->i2c = VAR_11;
 VAR_13->irq = VAR_11->irq;
 VAR_13->type = VAR_12->driver_data;

 VAR_13->regmap = FUNC_7(VAR_11,
   &VAR_10);
 if (FUNC_1(VAR_13->regmap)) {
  FUNC_3(&VAR_11->dev, "Failed to allocate topsys register map\n");
  return FUNC_2(VAR_13->regmap);
 }

 VAR_15 = FUNC_11(VAR_13->regmap, VAR_13->irq,
   VAR_4 | VAR_2 | VAR_3,
   0, &VAR_9, &VAR_13->irq_data_topsys);
 if (VAR_15) {
  FUNC_3(&VAR_11->dev, "Failed to add TOPSYS IRQ chip\n");
  return VAR_15;
 }

 VAR_15 = FUNC_13(VAR_13->regmap,
   VAR_7, &VAR_14);
 if (VAR_15 < 0) {
  FUNC_3(&VAR_11->dev, "Failed to read PMIC ID\n");
  goto err_pmic_id;
 }
 FUNC_4(&VAR_11->dev, "device ID: 0x%x\n", VAR_14);

 VAR_15 = FUNC_9(VAR_13);
 if (VAR_15) {
  FUNC_3(&VAR_11->dev, "Failed to init Charger\n");
  goto err_pmic_id;
 }

 VAR_15 = FUNC_14(VAR_13->regmap,
     VAR_6,
     VAR_5,
     (unsigned int)~VAR_5);
 if (VAR_15 < 0) {
  FUNC_3(&VAR_11->dev, "Failed to unmask interrupt source\n");
  goto err_pmic_id;
 }

 VAR_15 = FUNC_10(VAR_13->dev, -1, VAR_8,
         FUNC_0(VAR_8), ((void*)0), 0, ((void*)0));
 if (VAR_15 < 0) {
  FUNC_3(&VAR_11->dev, "Failed to add mfd device\n");
  goto err_pmic_id;
 }

 FUNC_5(VAR_13->dev, 1);

 return 0;

err_pmic_id:
 FUNC_12(VAR_13->irq, VAR_13->irq_data_topsys);

 return VAR_15;
}
