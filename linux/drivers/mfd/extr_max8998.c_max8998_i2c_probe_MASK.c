
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ of_node; } ;
struct max8998_platform_data {TYPE_1__ dev; int adapter; int wakeup; int irq_base; int ono; int irq; } ;
struct max8998_dev {int type; struct max8998_platform_data* rtc; TYPE_1__* dev; int wakeup; int iolock; int irq_base; int ono; struct max8998_platform_data* pdata; int irq; struct max8998_platform_data* i2c; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {TYPE_1__ dev; int adapter; int wakeup; int irq_base; int ono; int irq; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct max8998_platform_data*) ;
 int FUNC_3 (struct max8998_platform_data*) ;
 int VAR_4 ;


 int FUNC_4 (TYPE_1__*,char*) ;
 struct max8998_platform_data* FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 struct max8998_dev* FUNC_7 (TYPE_1__*,int,int ) ;
 struct max8998_platform_data* FUNC_8 (int ,int ) ;
 int FUNC_9 (struct max8998_platform_data*,struct max8998_dev*) ;
 int FUNC_10 (struct max8998_platform_data*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_11 (struct max8998_platform_data*,struct i2c_device_id const*) ;
 struct max8998_platform_data* FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (struct max8998_dev*) ;
 int FUNC_14 (struct max8998_dev*) ;
 int FUNC_15 (TYPE_1__*,int,int ,int ,int *,int ,int *) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_19(struct i2c_client *VAR_7,
       const struct i2c_device_id *VAR_8)
{
 struct max8998_platform_data *VAR_9 = FUNC_5(&VAR_7->dev);
 struct max8998_dev *VAR_10;
 int VAR_11 = 0;

 VAR_10 = FUNC_7(&VAR_7->dev, sizeof(struct max8998_dev),
    VAR_3);
 if (VAR_10 == ((void*)0))
  return -VAR_2;

 if (FUNC_1(VAR_0) && VAR_7->dev.of_node) {
  VAR_9 = FUNC_12(&VAR_7->dev);
  if (FUNC_2(VAR_9))
   return FUNC_3(VAR_9);
 }

 FUNC_9(VAR_7, VAR_10);
 VAR_10->dev = &VAR_7->dev;
 VAR_10->i2c = VAR_7;
 VAR_10->irq = VAR_7->irq;
 VAR_10->type = FUNC_11(VAR_7, VAR_8);
 VAR_10->pdata = VAR_9;
 if (VAR_9) {
  VAR_10->ono = VAR_9->ono;
  VAR_10->irq_base = VAR_9->irq_base;
  VAR_10->wakeup = VAR_9->wakeup;
 }
 FUNC_17(&VAR_10->iolock);

 VAR_10->rtc = FUNC_8(VAR_7->adapter, VAR_4);
 if (FUNC_2(VAR_10->rtc)) {
  FUNC_4(&VAR_7->dev, "Failed to allocate I2C device for RTC\n");
  return FUNC_3(VAR_10->rtc);
 }
 FUNC_9(VAR_10->rtc, VAR_10);

 FUNC_14(VAR_10);

 FUNC_18(VAR_10->dev);

 switch (VAR_10->type) {
 case 129:
  VAR_11 = FUNC_15(VAR_10->dev, -1,
          VAR_5, FUNC_0(VAR_5),
          ((void*)0), 0, ((void*)0));
  break;
 case 128:
  VAR_11 = FUNC_15(VAR_10->dev, -1,
          VAR_6, FUNC_0(VAR_6),
          ((void*)0), 0, ((void*)0));
  break;
 default:
  VAR_11 = -VAR_1;
 }

 if (VAR_11 < 0)
  goto err;

 FUNC_6(VAR_10->dev, VAR_10->wakeup);

 return VAR_11;

err:
 FUNC_16(VAR_10->dev);
 FUNC_13(VAR_10);
 FUNC_10(VAR_10->rtc);
 return VAR_11;
}
