
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {unsigned char tm_year; unsigned char tm_wday; void* tm_mon; void* tm_mday; void* tm_hour; void* tm_min; void* tm_sec; } ;
struct i2c_msg {int len; unsigned char* buf; int flags; int addr; } ;
struct i2c_client {int adapter; int addr; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (unsigned char) ;
 int FUNC_1 (int ,struct i2c_msg*,int) ;
 int FUNC_2 (unsigned char*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_2, struct rtc_time *VAR_3)
{
 unsigned char VAR_4[8], VAR_5[1] = { 1 };
 struct i2c_msg VAR_6[2] = {
  {
   .addr = VAR_2->addr,
   .flags = 0,
   .len = 1,
   .buf = VAR_5,
  }, {
   .addr = VAR_2->addr,
   .flags = VAR_1,
   .len = 6,
   .buf = VAR_4,
  }
 };
 int VAR_7;

 FUNC_2(VAR_4, 0, sizeof(VAR_4));

 VAR_7 = FUNC_1(VAR_2->adapter, VAR_6, 2);
 if (VAR_7 == 2) {
  VAR_3->tm_year = VAR_4[4] >> 6;
  VAR_3->tm_wday = VAR_4[5] >> 5;

  VAR_4[4] &= 0x3f;
  VAR_4[5] &= 0x1f;

  VAR_3->tm_sec = FUNC_0(VAR_4[1]);
  VAR_3->tm_min = FUNC_0(VAR_4[2]);
  VAR_3->tm_hour = FUNC_0(VAR_4[3]);
  VAR_3->tm_mday = FUNC_0(VAR_4[4]);
  VAR_3->tm_mon = FUNC_0(VAR_4[5]) - 1;
 }

 return VAR_7 == 2 ? 0 : -VAR_0;
}
