
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ of_node; } ;
struct max8997_platform_data {int adapter; int ono; int irq; TYPE_1__ dev; } ;
struct max8997_dev {struct max8997_platform_data* rtc; struct max8997_platform_data* haptic; struct max8997_platform_data* muic; TYPE_1__* dev; int iolock; int ono; struct max8997_platform_data* pdata; int irq; int type; struct max8997_platform_data* i2c; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int adapter; int ono; int irq; TYPE_1__ dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct max8997_platform_data*) ;
 int FUNC_3 (struct max8997_platform_data*) ;
 int FUNC_4 (TYPE_1__*,char*,...) ;
 struct max8997_platform_data* FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int) ;
 struct max8997_dev* FUNC_7 (TYPE_1__*,int,int ) ;
 void* FUNC_8 (int ,int ) ;
 int FUNC_9 (struct max8997_platform_data*,struct max8997_dev*) ;
 int FUNC_10 (struct max8997_platform_data*) ;
 int VAR_6 ;
 int FUNC_11 (struct max8997_platform_data*,struct i2c_device_id const*) ;
 struct max8997_platform_data* FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (struct max8997_dev*) ;
 int FUNC_14 (TYPE_1__*,int,int ,int ,int *,int ,int *) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_18(struct i2c_client *VAR_7,
       const struct i2c_device_id *VAR_8)
{
 struct max8997_dev *VAR_9;
 struct max8997_platform_data *VAR_10 = FUNC_5(&VAR_7->dev);
 int VAR_11 = 0;

 VAR_9 = FUNC_7(&VAR_7->dev, sizeof(struct max8997_dev),
    VAR_2);
 if (VAR_9 == ((void*)0))
  return -VAR_1;

 FUNC_9(VAR_7, VAR_9);
 VAR_9->dev = &VAR_7->dev;
 VAR_9->i2c = VAR_7;
 VAR_9->type = FUNC_11(VAR_7, VAR_8);
 VAR_9->irq = VAR_7->irq;

 if (FUNC_1(VAR_0) && VAR_9->dev->of_node) {
  VAR_10 = FUNC_12(VAR_9->dev);
  if (FUNC_2(VAR_10))
   return FUNC_3(VAR_10);
 }

 if (!VAR_10)
  return VAR_11;

 VAR_9->pdata = VAR_10;
 VAR_9->ono = VAR_10->ono;

 FUNC_16(&VAR_9->iolock);

 VAR_9->rtc = FUNC_8(VAR_7->adapter, VAR_5);
 if (FUNC_2(VAR_9->rtc)) {
  FUNC_4(VAR_9->dev, "Failed to allocate I2C device for RTC\n");
  return FUNC_3(VAR_9->rtc);
 }
 FUNC_9(VAR_9->rtc, VAR_9);

 VAR_9->haptic = FUNC_8(VAR_7->adapter, VAR_3);
 if (FUNC_2(VAR_9->haptic)) {
  FUNC_4(VAR_9->dev, "Failed to allocate I2C device for Haptic\n");
  VAR_11 = FUNC_3(VAR_9->haptic);
  goto err_i2c_haptic;
 }
 FUNC_9(VAR_9->haptic, VAR_9);

 VAR_9->muic = FUNC_8(VAR_7->adapter, VAR_4);
 if (FUNC_2(VAR_9->muic)) {
  FUNC_4(VAR_9->dev, "Failed to allocate I2C device for MUIC\n");
  VAR_11 = FUNC_3(VAR_9->muic);
  goto err_i2c_muic;
 }
 FUNC_9(VAR_9->muic, VAR_9);

 FUNC_17(VAR_9->dev);

 FUNC_13(VAR_9);

 VAR_11 = FUNC_14(VAR_9->dev, -1, VAR_6,
   FUNC_0(VAR_6),
   ((void*)0), 0, ((void*)0));
 if (VAR_11 < 0) {
  FUNC_4(VAR_9->dev, "failed to add MFD devices %d\n", VAR_11);
  goto err_mfd;
 }







 FUNC_6(VAR_9->dev, 1);

 return VAR_11;

err_mfd:
 FUNC_15(VAR_9->dev);
 FUNC_10(VAR_9->muic);
err_i2c_muic:
 FUNC_10(VAR_9->haptic);
err_i2c_haptic:
 FUNC_10(VAR_9->rtc);
 return VAR_11;
}
