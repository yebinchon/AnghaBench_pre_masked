
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct rx8025_data {TYPE_1__* rtc; struct i2c_client* client; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {scalar_t__ irq; int dev; int name; struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dev; } ;
struct TYPE_4__ {int max_user_freq; int uie_unsupported; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_6 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,scalar_t__) ;
 struct rx8025_data* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int *,scalar_t__,int *,int ,int ,char*,struct i2c_client*) ;
 TYPE_1__* FUNC_6 (int *,int ,int *,int ) ;
 int FUNC_7 (struct i2c_adapter*,int) ;
 int FUNC_8 (struct i2c_client*,struct rx8025_data*) ;
 int VAR_7 ;
 int FUNC_9 (struct i2c_client*) ;
 int VAR_8 ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct i2c_client *VAR_9,
   const struct i2c_device_id *VAR_10)
{
 struct i2c_adapter *VAR_11 = VAR_9->adapter;
 struct rx8025_data *VAR_12;
 int VAR_13 = 0;

 if (!FUNC_7(VAR_11, VAR_3
         | VAR_4)) {
  FUNC_2(&VAR_11->dev,
   "doesn't support required functionality\n");
  return -VAR_0;
 }

 VAR_12 = FUNC_4(&VAR_9->dev, sizeof(*VAR_12), VAR_2);
 if (!VAR_12)
  return -VAR_1;

 VAR_12->client = VAR_9;
 FUNC_8(VAR_9, VAR_12);

 VAR_13 = FUNC_9(VAR_9);
 if (VAR_13)
  return VAR_13;

 VAR_12->rtc = FUNC_6(&VAR_9->dev, VAR_9->name,
       &VAR_8, VAR_6);
 if (FUNC_0(VAR_12->rtc)) {
  FUNC_2(&VAR_9->dev, "unable to register the class device\n");
  return FUNC_1(VAR_12->rtc);
 }

 if (VAR_9->irq > 0) {
  FUNC_3(&VAR_9->dev, "IRQ %d supplied\n", VAR_9->irq);
  VAR_13 = FUNC_5(&VAR_9->dev, VAR_9->irq, ((void*)0),
      VAR_7,
      VAR_5,
      "rx8025", VAR_9);
  if (VAR_13) {
   FUNC_2(&VAR_9->dev, "unable to request IRQ, alarms disabled\n");
   VAR_9->irq = 0;
  }
 }

 VAR_12->rtc->max_user_freq = 1;


 VAR_12->rtc->uie_unsupported = 1;

 VAR_13 = FUNC_10(&VAR_9->dev);
 return VAR_13;
}
