
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; int tm_year; int tm_wday; } ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct i2c_client*,int*) ;
 struct i2c_client* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_9, struct rtc_time *VAR_10)
{
 struct i2c_client *VAR_11 = FUNC_2(VAR_9);
 int VAR_12;
 u8 VAR_13[VAR_4];

 VAR_12 = FUNC_1(VAR_11, VAR_13);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_10->tm_sec = FUNC_0(VAR_13[VAR_7]);
 VAR_10->tm_min = FUNC_0(VAR_13[VAR_5]);
 VAR_10->tm_hour = FUNC_0(VAR_13[VAR_3] & 0x3f);
 VAR_10->tm_mday = FUNC_0(VAR_13[VAR_1]);
 VAR_10->tm_mon = FUNC_0(VAR_13[VAR_6]) - 1;
 VAR_10->tm_year = FUNC_0(VAR_13[VAR_8]) +
        FUNC_0(VAR_13[VAR_0]) * 100 - 1900;
 VAR_10->tm_wday = FUNC_0(VAR_13[VAR_2]);

 return 0;
}
