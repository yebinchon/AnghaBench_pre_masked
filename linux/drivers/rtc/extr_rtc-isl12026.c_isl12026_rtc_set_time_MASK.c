
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; int tm_year; int tm_wday; } ;
struct i2c_msg {int len; int* buf; int flags; int addr; } ;
struct i2c_client {int dev; int adapter; int addr; } ;
struct device {int dummy; } ;
typedef int op ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int ,struct i2c_msg*,int) ;
 int FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (struct i2c_client*) ;
 struct i2c_client* FUNC_5 (struct device*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_3, struct rtc_time *VAR_4)
{
 struct i2c_client *VAR_5 = FUNC_5(VAR_3);
 int VAR_6;
 u8 VAR_7[10];
 struct i2c_msg VAR_8 = {
  .addr = VAR_5->addr,
  .flags = 0,
  .len = sizeof(VAR_7),
  .buf = VAR_7
 };

 VAR_6 = FUNC_3(VAR_5);
 if (VAR_6)
  return VAR_6;


 VAR_7[0] = 0;
 VAR_7[1] = VAR_2;
 VAR_7[2] = FUNC_0(VAR_4->tm_sec);
 VAR_7[3] = FUNC_0(VAR_4->tm_min);
 VAR_7[4] = FUNC_0(VAR_4->tm_hour) | VAR_1;
 VAR_7[5] = FUNC_0(VAR_4->tm_mday);
 VAR_7[6] = FUNC_0(VAR_4->tm_mon + 1);
 VAR_7[7] = FUNC_0(VAR_4->tm_year % 100);
 VAR_7[8] = FUNC_0(VAR_4->tm_wday & 7);
 VAR_7[9] = FUNC_0(VAR_4->tm_year >= 100 ? 20 : 19);
 VAR_6 = FUNC_2(VAR_5->adapter, &VAR_8, 1);
 if (VAR_6 != 1) {
  FUNC_1(&VAR_5->dev, "write error CCR, ret=%d\n", VAR_6);
  VAR_6 = VAR_6 < 0 ? VAR_6 : -VAR_0;
  goto out;
 }

 VAR_6 = FUNC_4(VAR_5);
out:
 return VAR_6;
}
