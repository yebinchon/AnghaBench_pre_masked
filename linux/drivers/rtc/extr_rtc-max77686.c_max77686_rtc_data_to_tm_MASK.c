
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; int tm_year; scalar_t__ tm_isdst; scalar_t__ tm_yday; scalar_t__ tm_wday; } ;
struct max77686_rtc_info {TYPE_1__* drv_data; scalar_t__ rtc_24hr_mode; } ;
struct TYPE_2__ {int mask; int alarm_enable_reg; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(u8 *VAR_8, struct rtc_time *VAR_9,
        struct max77686_rtc_info *VAR_10)
{
 u8 VAR_11 = VAR_10->drv_data->mask;

 VAR_9->tm_sec = VAR_8[VAR_5] & VAR_11;
 VAR_9->tm_min = VAR_8[VAR_3] & VAR_11;
 if (VAR_10->rtc_24hr_mode) {
  VAR_9->tm_hour = VAR_8[VAR_2] & 0x1f;
 } else {
  VAR_9->tm_hour = VAR_8[VAR_2] & 0x0f;
  if (VAR_8[VAR_2] & VAR_0)
   VAR_9->tm_hour += 12;
 }


 VAR_9->tm_wday = FUNC_0(VAR_8[VAR_6] & VAR_11) - 1;
 VAR_9->tm_mday = VAR_8[VAR_1] & 0x1f;
 VAR_9->tm_mon = (VAR_8[VAR_4] & 0x0f) - 1;
 VAR_9->tm_year = VAR_8[VAR_7] & VAR_11;
 VAR_9->tm_yday = 0;
 VAR_9->tm_isdst = 0;





 if (!VAR_10->drv_data->alarm_enable_reg)
  VAR_9->tm_year += 100;
}
