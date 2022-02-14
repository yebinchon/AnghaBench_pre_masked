
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtc_time {void* tm_year; void* tm_mon; void* tm_wday; void* tm_mday; void* tm_hour; void* tm_min; void* tm_sec; } ;
struct i2c_client {int dev; } ;
struct hym8563 {int valid; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;
 struct hym8563* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (struct i2c_client*,int ,int,int*) ;
 struct i2c_client* FUNC_4 (struct device*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_8, struct rtc_time *VAR_9)
{
 struct i2c_client *VAR_10 = FUNC_4(VAR_8);
 struct hym8563 *VAR_11 = FUNC_2(VAR_10);
 u8 VAR_12[7];
 int VAR_13;

 if (!VAR_11->valid) {
  FUNC_1(&VAR_10->dev, "no valid clock/calendar values available\n");
  return -VAR_0;
 }

 VAR_13 = FUNC_3(VAR_10, VAR_5, 7, VAR_12);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_9->tm_sec = FUNC_0(VAR_12[0] & VAR_6);
 VAR_9->tm_min = FUNC_0(VAR_12[1] & VAR_3);
 VAR_9->tm_hour = FUNC_0(VAR_12[2] & VAR_2);
 VAR_9->tm_mday = FUNC_0(VAR_12[3] & VAR_1);
 VAR_9->tm_wday = FUNC_0(VAR_12[4] & VAR_7);
 VAR_9->tm_mon = FUNC_0(VAR_12[5] & VAR_4) - 1;
 VAR_9->tm_year = FUNC_0(VAR_12[6]) + 100;

 return 0;
}
