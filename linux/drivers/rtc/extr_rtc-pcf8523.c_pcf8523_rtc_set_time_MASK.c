
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtc_time {int tm_year; int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; int tm_wday; } ;
struct i2c_msg {int len; int * buf; scalar_t__ flags; int addr; } ;
struct i2c_client {int adapter; int addr; } ;
struct device {int dummy; } ;
typedef int regs ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct i2c_msg*,int) ;
 int FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (struct i2c_client*) ;
 struct i2c_client* FUNC_4 (struct device*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_2, struct rtc_time *VAR_3)
{
 struct i2c_client *VAR_4 = FUNC_4(VAR_2);
 struct i2c_msg VAR_5;
 u8 VAR_6[8];
 int VAR_7;
 if (VAR_3->tm_year < 100 || VAR_3->tm_year >= 200)
  return -VAR_0;

 VAR_7 = FUNC_3(VAR_4);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_6[0] = VAR_1;

 VAR_6[1] = FUNC_0(VAR_3->tm_sec);
 VAR_6[2] = FUNC_0(VAR_3->tm_min);
 VAR_6[3] = FUNC_0(VAR_3->tm_hour);
 VAR_6[4] = FUNC_0(VAR_3->tm_mday);
 VAR_6[5] = VAR_3->tm_wday;
 VAR_6[6] = FUNC_0(VAR_3->tm_mon + 1);
 VAR_6[7] = FUNC_0(VAR_3->tm_year - 100);

 VAR_5.addr = VAR_4->addr;
 VAR_5.flags = 0;
 VAR_5.len = sizeof(VAR_6);
 VAR_5.buf = VAR_6;

 VAR_7 = FUNC_1(VAR_4->adapter, &VAR_5, 1);
 if (VAR_7 < 0) {





  FUNC_2(VAR_4);
  return VAR_7;
 }

 return FUNC_2(VAR_4);
}
