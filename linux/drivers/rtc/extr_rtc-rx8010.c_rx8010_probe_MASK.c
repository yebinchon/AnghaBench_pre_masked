
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct rx8010_data {TYPE_2__* rtc; struct i2c_client* client; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {scalar_t__ irq; int dev; int name; struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dev; } ;
struct TYPE_7__ {int max_user_freq; } ;
struct TYPE_6__ {int alarm_irq_enable; int set_alarm; int read_alarm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_7 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,scalar_t__) ;
 struct rx8010_data* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int *,scalar_t__,int *,int ,int,char*,struct i2c_client*) ;
 TYPE_2__* FUNC_6 (int *,int ,TYPE_1__*,int ) ;
 int FUNC_7 (struct i2c_adapter*,int) ;
 int FUNC_8 (struct i2c_client*,struct rx8010_data*) ;
 int VAR_8 ;
 int FUNC_9 (struct i2c_client*) ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_1__ VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static int FUNC_10(struct i2c_client *VAR_13,
   const struct i2c_device_id *VAR_14)
{
 struct i2c_adapter *VAR_15 = VAR_13->adapter;
 struct rx8010_data *VAR_16;
 int VAR_17 = 0;

 if (!FUNC_7(VAR_15, VAR_3
  | VAR_4)) {
  FUNC_2(&VAR_15->dev, "doesn't support required functionality\n");
  return -VAR_0;
 }

 VAR_16 = FUNC_4(&VAR_13->dev, sizeof(struct rx8010_data),
         VAR_2);
 if (!VAR_16)
  return -VAR_1;

 VAR_16->client = VAR_13;
 FUNC_8(VAR_13, VAR_16);

 VAR_17 = FUNC_9(VAR_13);
 if (VAR_17)
  return VAR_17;

 if (VAR_13->irq > 0) {
  FUNC_3(&VAR_13->dev, "IRQ %d supplied\n", VAR_13->irq);
  VAR_17 = FUNC_5(&VAR_13->dev, VAR_13->irq, ((void*)0),
      VAR_9,
      VAR_6 | VAR_5,
      "rx8010", VAR_13);

  if (VAR_17) {
   FUNC_2(&VAR_13->dev, "unable to request IRQ\n");
   VAR_13->irq = 0;
  } else {
   VAR_11.read_alarm = VAR_10;
   VAR_11.set_alarm = VAR_12;
   VAR_11.alarm_irq_enable = VAR_8;
  }
 }

 VAR_16->rtc = FUNC_6(&VAR_13->dev, VAR_13->name,
  &VAR_11, VAR_7);

 if (FUNC_0(VAR_16->rtc)) {
  FUNC_2(&VAR_13->dev, "unable to register the class device\n");
  return FUNC_1(VAR_16->rtc);
 }

 VAR_16->rtc->max_user_freq = 1;

 return VAR_17;
}
