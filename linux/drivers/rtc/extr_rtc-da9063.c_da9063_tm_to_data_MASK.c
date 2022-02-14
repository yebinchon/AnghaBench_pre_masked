
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_year; int tm_mon; } ;
struct da9063_compatible_rtc_regmap {int rtc_count_sec_mask; int rtc_count_min_mask; int rtc_count_hour_mask; int rtc_count_day_mask; int rtc_count_month_mask; int rtc_count_year_mask; } ;
struct da9063_compatible_rtc {struct da9063_compatible_rtc_regmap* config; } ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct rtc_time *VAR_6, u8 *VAR_7,
         struct da9063_compatible_rtc *VAR_8)
{
 const struct da9063_compatible_rtc_regmap *VAR_9 = VAR_8->config;

 VAR_7[VAR_4] = VAR_6->tm_sec & VAR_9->rtc_count_sec_mask;
 VAR_7[VAR_2] = VAR_6->tm_min & VAR_9->rtc_count_min_mask;
 VAR_7[VAR_1] = VAR_6->tm_hour & VAR_9->rtc_count_hour_mask;
 VAR_7[VAR_0] = VAR_6->tm_mday & VAR_9->rtc_count_day_mask;
 VAR_7[VAR_3] = FUNC_0(VAR_6->tm_mon) &
    VAR_9->rtc_count_month_mask;
 VAR_7[VAR_5] = FUNC_1(VAR_6->tm_year) &
    VAR_9->rtc_count_year_mask;
}
