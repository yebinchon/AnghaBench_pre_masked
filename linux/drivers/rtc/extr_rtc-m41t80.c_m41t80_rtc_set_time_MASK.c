
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int tm_year; int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; unsigned char tm_wday; } ;
struct m41t80_data {int features; } ;
struct i2c_client {int dev; } ;
struct device {int dummy; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 unsigned char FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;
 struct m41t80_data* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (struct i2c_client*,size_t) ;
 int FUNC_4 (struct i2c_client*,size_t,int) ;
 int FUNC_5 (struct i2c_client*,size_t,int,unsigned char*) ;
 struct i2c_client* FUNC_6 (struct device*) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_12, struct rtc_time *VAR_13)
{
 struct i2c_client *VAR_14 = FUNC_6(VAR_12);
 struct m41t80_data *VAR_15 = FUNC_2(VAR_14);
 unsigned char VAR_16[8];
 int VAR_17, VAR_18;

 if (VAR_13->tm_year < 100 || VAR_13->tm_year > 199)
  return -VAR_0;

 VAR_16[VAR_9] = 0;
 VAR_16[VAR_8] = FUNC_0(VAR_13->tm_sec);
 VAR_16[VAR_6] = FUNC_0(VAR_13->tm_min);
 VAR_16[VAR_5] = FUNC_0(VAR_13->tm_hour);
 VAR_16[VAR_3] = FUNC_0(VAR_13->tm_mday);
 VAR_16[VAR_7] = FUNC_0(VAR_13->tm_mon + 1);
 VAR_16[VAR_11] = FUNC_0(VAR_13->tm_year - 100);
 VAR_16[VAR_10] = VAR_13->tm_wday;


 if (VAR_15->features & VAR_1) {
  int VAR_19;

  VAR_19 = FUNC_3(VAR_14, VAR_10);
  if (VAR_19 < 0)
   return VAR_19;

  VAR_16[VAR_10] |= (VAR_19 & 0xf0);
 }

 VAR_17 = FUNC_5(VAR_14, VAR_9,
          sizeof(VAR_16), VAR_16);
 if (VAR_17 < 0) {
  FUNC_1(&VAR_14->dev, "Unable to write to date registers\n");
  return VAR_17;
 }


 VAR_18 = FUNC_3(VAR_14, VAR_4);
 if (VAR_18 < 0)
  return VAR_18;

 VAR_17 = FUNC_4(VAR_14, VAR_4,
     VAR_18 & ~VAR_2);
 if (VAR_17 < 0) {
  FUNC_1(&VAR_14->dev, "Unable to write flags register\n");
  return VAR_17;
 }

 return VAR_17;
}
