
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; int tm_wday; int tm_year; } ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*,int *) ;
 struct i2c_client* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_11, struct rtc_time *VAR_12)
{
 struct i2c_client *VAR_13 = FUNC_3(VAR_11);
 u8 VAR_14[VAR_6];
 int VAR_15;

 VAR_15 = FUNC_1(VAR_13);
 if (VAR_15 < 0)
  return VAR_15;

 VAR_14[VAR_9] = FUNC_0(VAR_12->tm_sec);
 VAR_14[VAR_7] = FUNC_0(VAR_12->tm_min);
 VAR_14[VAR_5] = FUNC_0(VAR_12->tm_hour);
 VAR_14[VAR_3] = FUNC_0(VAR_12->tm_mday);
 VAR_14[VAR_8] = FUNC_0(VAR_12->tm_mon + 1);
 VAR_14[VAR_4] = FUNC_0(VAR_12->tm_wday);
 VAR_14[VAR_10] = FUNC_0(VAR_12->tm_year % 100);
 VAR_14[VAR_0] = FUNC_0((VAR_12->tm_year + 1900) / 100);

 VAR_14[VAR_1] = VAR_2;

 VAR_15 = FUNC_2(VAR_13, VAR_14);
 if (VAR_15 < 0)
  return VAR_15;

 return 0;
}
