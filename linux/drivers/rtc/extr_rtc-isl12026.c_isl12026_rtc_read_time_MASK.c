
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; int tm_year; int tm_wday; } ;
struct i2c_msg {int len; int* buf; int flags; int addr; } ;
struct i2c_client {int dev; int adapter; int addr; } ;
struct device {int dummy; } ;
typedef int ccr ;
typedef int addr ;


 int FUNC_0 (struct i2c_msg*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int ,struct i2c_msg*,int) ;
 struct i2c_client* FUNC_5 (struct device*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_7, struct rtc_time *VAR_8)
{
 struct i2c_client *VAR_9 = FUNC_5(VAR_7);
 u8 VAR_10[8];
 u8 VAR_11[2];
 u8 VAR_12;
 int VAR_13;
 struct i2c_msg VAR_14[] = {
  {
   .addr = VAR_9->addr,
   .flags = 0,
   .len = sizeof(VAR_11),
   .buf = VAR_11
  }, {
   .addr = VAR_9->addr,
   .flags = VAR_1,
  }
 };


 VAR_11[0] = 0;
 VAR_11[1] = VAR_4;
 VAR_14[1].len = 1;
 VAR_14[1].buf = &VAR_12;

 VAR_13 = FUNC_4(VAR_9->adapter, VAR_14, FUNC_0(VAR_14));
 if (VAR_13 != FUNC_0(VAR_14)) {
  FUNC_2(&VAR_9->dev, "read error, ret=%d\n", VAR_13);
  VAR_13 = VAR_13 < 0 ? VAR_13 : -VAR_0;
  goto out;
 }

 if (VAR_12 & VAR_6)
  FUNC_3(&VAR_9->dev, "Real-Time Clock Failure on read\n");
 if (VAR_12 & VAR_5)
  FUNC_3(&VAR_9->dev, "Oscillator Failure on read\n");


 VAR_11[0] = 0;
 VAR_11[1] = VAR_3;
 VAR_14[1].len = sizeof(VAR_10);
 VAR_14[1].buf = VAR_10;

 VAR_13 = FUNC_4(VAR_9->adapter, VAR_14, FUNC_0(VAR_14));
 if (VAR_13 != FUNC_0(VAR_14)) {
  FUNC_2(&VAR_9->dev, "read error, ret=%d\n", VAR_13);
  VAR_13 = VAR_13 < 0 ? VAR_13 : -VAR_0;
  goto out;
 }

 VAR_8->tm_sec = FUNC_1(VAR_10[0] & 0x7F);
 VAR_8->tm_min = FUNC_1(VAR_10[1] & 0x7F);
 if (VAR_10[2] & VAR_2)
  VAR_8->tm_hour = FUNC_1(VAR_10[2] & 0x3F);
 else
  VAR_8->tm_hour = FUNC_1(VAR_10[2] & 0x1F) +
   ((VAR_10[2] & 0x20) ? 12 : 0);
 VAR_8->tm_mday = FUNC_1(VAR_10[3] & 0x3F);
 VAR_8->tm_mon = FUNC_1(VAR_10[4] & 0x1F) - 1;
 VAR_8->tm_year = FUNC_1(VAR_10[5]);
 if (FUNC_1(VAR_10[7]) == 20)
  VAR_8->tm_year += 100;
 VAR_8->tm_wday = VAR_10[6] & 0x07;

 VAR_13 = 0;
out:
 return VAR_13;
}
