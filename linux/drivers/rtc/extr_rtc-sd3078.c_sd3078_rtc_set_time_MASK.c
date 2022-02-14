
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd3078 {int regmap; } ;
struct rtc_time {int tm_wday; scalar_t__ tm_year; scalar_t__ tm_mon; scalar_t__ tm_mday; scalar_t__ tm_hour; scalar_t__ tm_min; scalar_t__ tm_sec; } ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct device*,char*,int) ;
 struct sd3078* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (int ,size_t,unsigned char*,int) ;
 int FUNC_4 (struct sd3078*) ;
 int FUNC_5 (struct sd3078*) ;
 struct i2c_client* FUNC_6 (struct device*) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_8, struct rtc_time *VAR_9)
{
 unsigned char VAR_10[VAR_0];
 struct i2c_client *VAR_11 = FUNC_6(VAR_8);
 struct sd3078 *VAR_12 = FUNC_2(VAR_11);
 int VAR_13;

 VAR_10[VAR_6] = FUNC_0(VAR_9->tm_sec);
 VAR_10[VAR_4] = FUNC_0(VAR_9->tm_min);
 VAR_10[VAR_3] = FUNC_0(VAR_9->tm_hour) | 0x80;
 VAR_10[VAR_1] = FUNC_0(VAR_9->tm_mday);
 VAR_10[VAR_2] = VAR_9->tm_wday & 0x07;
 VAR_10[VAR_5] = FUNC_0(VAR_9->tm_mon) + 1;
 VAR_10[VAR_7] = FUNC_0(VAR_9->tm_year - 100);





 VAR_13 = FUNC_3(VAR_12->regmap, VAR_6, VAR_10,
    VAR_0);
 if (VAR_13 < 0) {
  FUNC_1(VAR_8, "writing to RTC failed with err:%d\n", VAR_13);
  return VAR_13;
 }





 return 0;
}
