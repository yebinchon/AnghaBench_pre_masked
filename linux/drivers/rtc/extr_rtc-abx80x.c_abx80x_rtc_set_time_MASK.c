
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int tm_year; int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; unsigned char tm_wday; } ;
struct i2c_client {int dev; } ;
struct device {int dummy; } ;
typedef int buf ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned char FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (struct i2c_client*,int ,int) ;
 int FUNC_4 (struct i2c_client*,size_t,int,unsigned char*) ;
 struct i2c_client* FUNC_5 (struct device*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_12, struct rtc_time *VAR_13)
{
 struct i2c_client *VAR_14 = FUNC_5(VAR_12);
 unsigned char VAR_15[8];
 int VAR_16, VAR_17;

 if (VAR_13->tm_year < 100)
  return -VAR_10;

 VAR_15[VAR_3] = 0;
 VAR_15[VAR_7] = FUNC_0(VAR_13->tm_sec);
 VAR_15[VAR_4] = FUNC_0(VAR_13->tm_min);
 VAR_15[VAR_2] = FUNC_0(VAR_13->tm_hour);
 VAR_15[VAR_1] = FUNC_0(VAR_13->tm_mday);
 VAR_15[VAR_5] = FUNC_0(VAR_13->tm_mon + 1);
 VAR_15[VAR_9] = FUNC_0(VAR_13->tm_year - 100);
 VAR_15[VAR_8] = VAR_13->tm_wday;

 VAR_16 = FUNC_4(VAR_14, VAR_3,
          sizeof(VAR_15), VAR_15);
 if (VAR_16 < 0) {
  FUNC_1(&VAR_14->dev, "Unable to write to date registers\n");
  return -VAR_11;
 }


 VAR_17 = FUNC_2(VAR_14, VAR_6);
 if (VAR_17 < 0)
  return VAR_17;

 VAR_16 = FUNC_3(VAR_14, VAR_6,
     VAR_17 & ~VAR_0);
 if (VAR_16 < 0) {
  FUNC_1(&VAR_14->dev, "Unable to write oscillator status register\n");
  return VAR_16;
 }

 return 0;
}
