
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_device_id {int dummy; } ;
struct i2c_client {scalar_t__ irq; int dev; int name; } ;
struct ds1374 {int rtc; int mutex; int work; struct i2c_client* client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int) ;
 struct ds1374* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int *,scalar_t__,int ,int ,char*,struct i2c_client*) ;
 int FUNC_7 (int *,int ,int *,int ) ;
 int FUNC_8 (struct i2c_client*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (int) ;
 int VAR_7 ;
 int FUNC_10 (struct i2c_client*,struct ds1374*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 struct i2c_client* VAR_8 ;

__attribute__((used)) static int FUNC_15(struct i2c_client *VAR_9,
   const struct i2c_device_id *VAR_10)
{
 struct ds1374 *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_5(&VAR_9->dev, sizeof(struct ds1374), VAR_1);
 if (!VAR_11)
  return -VAR_0;

 VAR_11->client = VAR_9;
 FUNC_10(VAR_9, VAR_11);

 FUNC_0(&VAR_11->work, VAR_7);
 FUNC_13(&VAR_11->mutex);

 VAR_12 = FUNC_8(VAR_9);
 if (VAR_12)
  return VAR_12;

 if (VAR_9->irq > 0) {
  VAR_12 = FUNC_6(&VAR_9->dev, VAR_9->irq, VAR_3, 0,
     "ds1374", VAR_9);
  if (VAR_12) {
   FUNC_3(&VAR_9->dev, "unable to request IRQ\n");
   return VAR_12;
  }

  FUNC_4(&VAR_9->dev, 1);
 }

 VAR_11->rtc = FUNC_7(&VAR_9->dev, VAR_9->name,
      &VAR_5, VAR_2);
 if (FUNC_1(VAR_11->rtc)) {
  FUNC_3(&VAR_9->dev, "unable to register the class device\n");
  return FUNC_2(VAR_11->rtc);
 }
 return 0;
}
