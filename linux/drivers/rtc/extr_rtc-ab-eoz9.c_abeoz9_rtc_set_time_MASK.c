
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtc_time {scalar_t__ tm_year; scalar_t__ tm_mon; scalar_t__ tm_wday; scalar_t__ tm_mday; scalar_t__ tm_hour; scalar_t__ tm_min; scalar_t__ tm_sec; } ;
struct regmap {int dummy; } ;
struct device {int dummy; } ;
struct abeoz9_rtc_data {struct regmap* regmap; } ;
typedef int regs ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct regmap*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct device*,char*,int) ;
 struct abeoz9_rtc_data* FUNC_3 (struct device*) ;
 int FUNC_4 (struct regmap*,size_t,int *,int) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_8, struct rtc_time *VAR_9)
{
 struct abeoz9_rtc_data *VAR_10 = FUNC_3(VAR_8);
 struct regmap *VAR_11 = VAR_10->regmap;
 u8 VAR_12[VAR_7];
 int VAR_13;

 VAR_12[VAR_4 - VAR_4] = FUNC_1(VAR_9->tm_sec);
 VAR_12[VAR_2 - VAR_4] = FUNC_1(VAR_9->tm_min);
 VAR_12[VAR_1 - VAR_4] = FUNC_1(VAR_9->tm_hour);
 VAR_12[VAR_0 - VAR_4] = FUNC_1(VAR_9->tm_mday);
 VAR_12[VAR_5 - VAR_4] = FUNC_1(VAR_9->tm_wday);
 VAR_12[VAR_3 - VAR_4] = FUNC_1(VAR_9->tm_mon + 1);
 VAR_12[VAR_6 - VAR_4] = FUNC_1(VAR_9->tm_year - 100);

 VAR_13 = FUNC_4(VAR_10->regmap, VAR_4,
    VAR_12,
    sizeof(VAR_12));

 if (VAR_13) {
  FUNC_2(VAR_8, "set RTC time failed (%d)\n", VAR_13);
  return VAR_13;
 }

 return FUNC_0(VAR_11);
}
