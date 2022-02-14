
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {unsigned char tm_wday; void* tm_year; void* tm_mon; void* tm_mday; void* tm_hour; void* tm_min; void* tm_sec; } ;
struct device {int dummy; } ;
struct i2c_client {struct device dev; } ;
typedef int buf ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct i2c_client*) ;
 void* FUNC_1 (unsigned char) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct i2c_client*,int ) ;
 int FUNC_4 (struct i2c_client*,int ,int,unsigned char*) ;
 struct i2c_client* FUNC_5 (struct device*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_12, struct rtc_time *VAR_13)
{
 struct i2c_client *VAR_14 = FUNC_5(VAR_12);
 unsigned char VAR_15[8];
 int VAR_16, VAR_17, VAR_18 = 0;


 VAR_18 = FUNC_0(VAR_14);
 if (VAR_18 < 0)
  return VAR_18;

 if (!VAR_18) {
  VAR_17 = FUNC_3(VAR_14, VAR_6);
  if (VAR_17 < 0)
   return VAR_17;

  if (VAR_17 & VAR_0) {
   FUNC_2(VAR_12, "Oscillator failure, data is invalid.\n");
   return -VAR_10;
  }
 }

 VAR_16 = FUNC_4(VAR_14, VAR_3,
         sizeof(VAR_15), VAR_15);
 if (VAR_16 < 0) {
  FUNC_2(&VAR_14->dev, "Unable to read date\n");
  return -VAR_11;
 }

 VAR_13->tm_sec = FUNC_1(VAR_15[VAR_7] & 0x7F);
 VAR_13->tm_min = FUNC_1(VAR_15[VAR_4] & 0x7F);
 VAR_13->tm_hour = FUNC_1(VAR_15[VAR_2] & 0x3F);
 VAR_13->tm_wday = VAR_15[VAR_8] & 0x7;
 VAR_13->tm_mday = FUNC_1(VAR_15[VAR_1] & 0x3F);
 VAR_13->tm_mon = FUNC_1(VAR_15[VAR_5] & 0x1F) - 1;
 VAR_13->tm_year = FUNC_1(VAR_15[VAR_9]) + 100;

 return 0;
}
