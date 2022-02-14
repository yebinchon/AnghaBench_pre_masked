
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtc_time {int tm_wday; void* tm_year; void* tm_mon; void* tm_mday; void* tm_hour; void* tm_min; void* tm_sec; } ;
struct i2c_msg {int len; int* buf; scalar_t__ flags; int addr; } ;
struct i2c_client {int adapter; int addr; } ;
struct device {int dummy; } ;
typedef int regs ;


 int FUNC_0 (struct i2c_msg*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (int ,struct i2c_msg*,int ) ;
 int FUNC_4 (struct i2c_client*) ;
 struct i2c_client* FUNC_5 (struct device*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_4, struct rtc_time *VAR_5)
{
 struct i2c_client *VAR_6 = FUNC_5(VAR_4);
 u8 VAR_7 = VAR_2, VAR_8[7];
 struct i2c_msg VAR_9[2];
 int VAR_10;

 VAR_10 = FUNC_4(VAR_6);
 if (VAR_10 < 0) {
  return VAR_10;
 } else if (VAR_10 > 0) {
  FUNC_2(VAR_4, "low voltage detected, time is unreliable\n");
  return -VAR_0;
 }

 VAR_9[0].addr = VAR_6->addr;
 VAR_9[0].flags = 0;
 VAR_9[0].len = 1;
 VAR_9[0].buf = &VAR_7;

 VAR_9[1].addr = VAR_6->addr;
 VAR_9[1].flags = VAR_1;
 VAR_9[1].len = sizeof(VAR_8);
 VAR_9[1].buf = VAR_8;

 VAR_10 = FUNC_3(VAR_6->adapter, VAR_9, FUNC_0(VAR_9));
 if (VAR_10 < 0)
  return VAR_10;

 if (VAR_8[0] & VAR_3)
  return -VAR_0;

 VAR_5->tm_sec = FUNC_1(VAR_8[0] & 0x7f);
 VAR_5->tm_min = FUNC_1(VAR_8[1] & 0x7f);
 VAR_5->tm_hour = FUNC_1(VAR_8[2] & 0x3f);
 VAR_5->tm_mday = FUNC_1(VAR_8[3] & 0x3f);
 VAR_5->tm_wday = VAR_8[4] & 0x7;
 VAR_5->tm_mon = FUNC_1(VAR_8[5] & 0x1f) - 1;
 VAR_5->tm_year = FUNC_1(VAR_8[6]) + 100;

 return 0;
}
