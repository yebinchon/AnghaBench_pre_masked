
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rv3028_data {int regmap; } ;
struct rtc_time {void* tm_year; void* tm_mon; void* tm_mday; int tm_wday; void* tm_hour; void* tm_min; void* tm_sec; } ;
struct device {int dummy; } ;
typedef int date ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 void* FUNC_0 (int) ;
 struct rv3028_data* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,size_t,int*,int) ;
 int FUNC_5 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_10, struct rtc_time *VAR_11)
{
 struct rv3028_data *VAR_12 = FUNC_1(VAR_10);
 u8 VAR_13[7];
 int VAR_14, VAR_15;

 VAR_14 = FUNC_5(VAR_12->regmap, VAR_6, &VAR_15);
 if (VAR_14 < 0)
  return VAR_14;

 if (VAR_15 & VAR_7) {
  FUNC_2(VAR_10, "Voltage low, data is invalid.\n");
  return -VAR_0;
 }

 VAR_14 = FUNC_4(VAR_12->regmap, VAR_5, VAR_13, sizeof(VAR_13));
 if (VAR_14)
  return VAR_14;

 VAR_11->tm_sec = FUNC_0(VAR_13[VAR_5] & 0x7f);
 VAR_11->tm_min = FUNC_0(VAR_13[VAR_3] & 0x7f);
 VAR_11->tm_hour = FUNC_0(VAR_13[VAR_2] & 0x3f);
 VAR_11->tm_wday = FUNC_3(VAR_13[VAR_8] & 0x7f);
 VAR_11->tm_mday = FUNC_0(VAR_13[VAR_1] & 0x3f);
 VAR_11->tm_mon = FUNC_0(VAR_13[VAR_4] & 0x1f) - 1;
 VAR_11->tm_year = FUNC_0(VAR_13[VAR_9]) + 100;

 return 0;
}
