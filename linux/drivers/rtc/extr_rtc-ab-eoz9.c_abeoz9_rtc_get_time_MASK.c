
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtc_time {int tm_hour; void* tm_year; void* tm_mon; void* tm_wday; void* tm_mday; void* tm_min; void* tm_sec; } ;
struct device {int dummy; } ;
struct abeoz9_rtc_data {int regmap; } ;
typedef int regs ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct device*) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct device*,char*,int) ;
 struct abeoz9_rtc_data* FUNC_3 (struct device*) ;
 int FUNC_4 (int ,size_t,int*,int) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_9, struct rtc_time *VAR_10)
{
 struct abeoz9_rtc_data *VAR_11 = FUNC_3(VAR_9);
 u8 VAR_12[VAR_8];
 int VAR_13;

 VAR_13 = FUNC_0(VAR_9);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_4(VAR_11->regmap, VAR_5,
          VAR_12,
          sizeof(VAR_12));
 if (VAR_13) {
  FUNC_2(VAR_9, "reading RTC time failed (%d)\n", VAR_13);
  return VAR_13;
 }

 VAR_10->tm_sec = FUNC_1(VAR_12[VAR_5 - VAR_5] & 0x7F);
 VAR_10->tm_min = FUNC_1(VAR_12[VAR_3 - VAR_5] & 0x7F);

 if (VAR_12[VAR_2 - VAR_5] & VAR_0) {
  VAR_10->tm_hour =
   FUNC_1(VAR_12[VAR_2 - VAR_5] & 0x1f);
  if (VAR_12[VAR_2 - VAR_5] & VAR_0)
   VAR_10->tm_hour += 12;
 } else {
  VAR_10->tm_hour = FUNC_1(VAR_12[VAR_2 - VAR_5]);
 }

 VAR_10->tm_mday = FUNC_1(VAR_12[VAR_1 - VAR_5]);
 VAR_10->tm_wday = FUNC_1(VAR_12[VAR_6 - VAR_5]);
 VAR_10->tm_mon = FUNC_1(VAR_12[VAR_4 - VAR_5]) - 1;
 VAR_10->tm_year = FUNC_1(VAR_12[VAR_7 - VAR_5]) + 100;

 return VAR_13;
}
