
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int dummy; } ;
struct rtc_wkalrm {scalar_t__ enabled; struct rtc_time time; } ;
struct i2c_client {scalar_t__ irq; } ;
struct ds1374 {int mutex; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct device*,struct rtc_time*) ;
 int FUNC_1 (struct i2c_client*,unsigned long,int ,int) ;
 struct ds1374* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (struct i2c_client*,int ) ;
 int FUNC_4 (struct i2c_client*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct rtc_time*,unsigned long*) ;
 scalar_t__ FUNC_8 (unsigned long,unsigned long) ;
 struct i2c_client* FUNC_9 (struct device*) ;

__attribute__((used)) static int FUNC_10(struct device *VAR_6, struct rtc_wkalrm *VAR_7)
{
 struct i2c_client *VAR_8 = FUNC_9(VAR_6);
 struct ds1374 *VAR_9 = FUNC_2(VAR_8);
 struct rtc_time VAR_10;
 unsigned long VAR_11, VAR_12;
 int VAR_13;
 int VAR_14 = 0;

 if (VAR_8->irq <= 0)
  return -VAR_5;

 VAR_14 = FUNC_0(VAR_6, &VAR_10);
 if (VAR_14 < 0)
  return VAR_14;

 FUNC_7(&VAR_7->time, &VAR_11);
 FUNC_7(&VAR_10, &VAR_12);







 if (FUNC_8(VAR_11, VAR_12))
  VAR_11 = 1;
 else
  VAR_11 -= VAR_12;

 FUNC_5(&VAR_9->mutex);

 VAR_14 = VAR_13 = FUNC_3(VAR_8, VAR_0);
 if (VAR_14 < 0)
  goto out;



 VAR_13 &= ~VAR_2;

 VAR_14 = FUNC_4(VAR_8, VAR_0, VAR_13);
 if (VAR_14 < 0)
  goto out;

 VAR_14 = FUNC_1(VAR_8, VAR_11, VAR_4, 3);
 if (VAR_14)
  goto out;

 if (VAR_7->enabled) {
  VAR_13 |= VAR_2 | VAR_1;
  VAR_13 &= ~VAR_3;

  VAR_14 = FUNC_4(VAR_8, VAR_0, VAR_13);
 }

out:
 FUNC_6(&VAR_9->mutex);
 return VAR_14;
}
