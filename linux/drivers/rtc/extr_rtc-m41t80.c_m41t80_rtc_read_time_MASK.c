
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {unsigned char tm_wday; void* tm_year; void* tm_mon; void* tm_mday; void* tm_hour; void* tm_min; void* tm_sec; } ;
struct i2c_client {int dev; } ;
struct device {int dummy; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 void* FUNC_0 (unsigned char) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (struct i2c_client*,int ,int,unsigned char*) ;
 struct i2c_client* FUNC_4 (struct device*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_11, struct rtc_time *VAR_12)
{
 struct i2c_client *VAR_13 = FUNC_4(VAR_11);
 unsigned char VAR_14[8];
 int VAR_15, VAR_16;

 VAR_16 = FUNC_2(VAR_13, VAR_3);
 if (VAR_16 < 0)
  return VAR_16;

 if (VAR_16 & VAR_1) {
  FUNC_1(&VAR_13->dev, "Oscillator failure, data is invalid.\n");
  return -VAR_0;
 }

 VAR_15 = FUNC_3(VAR_13, VAR_8,
         sizeof(VAR_14), VAR_14);
 if (VAR_15 < 0) {
  FUNC_1(&VAR_13->dev, "Unable to read date\n");
  return VAR_15;
 }

 VAR_12->tm_sec = FUNC_0(VAR_14[VAR_7] & 0x7f);
 VAR_12->tm_min = FUNC_0(VAR_14[VAR_5] & 0x7f);
 VAR_12->tm_hour = FUNC_0(VAR_14[VAR_4] & 0x3f);
 VAR_12->tm_mday = FUNC_0(VAR_14[VAR_2] & 0x3f);
 VAR_12->tm_wday = VAR_14[VAR_9] & 0x07;
 VAR_12->tm_mon = FUNC_0(VAR_14[VAR_6] & 0x1f) - 1;


 VAR_12->tm_year = FUNC_0(VAR_14[VAR_10]) + 100;
 return 0;
}
