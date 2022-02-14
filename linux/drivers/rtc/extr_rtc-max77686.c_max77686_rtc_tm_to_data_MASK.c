
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_wday; int tm_mday; int tm_mon; int tm_year; } ;
struct max77686_rtc_info {int dev; TYPE_1__* drv_data; } ;
struct TYPE_2__ {scalar_t__ alarm_enable_reg; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static int FUNC_1(struct rtc_time *VAR_8, u8 *VAR_9,
       struct max77686_rtc_info *VAR_10)
{
 VAR_9[VAR_5] = VAR_8->tm_sec;
 VAR_9[VAR_3] = VAR_8->tm_min;
 VAR_9[VAR_2] = VAR_8->tm_hour;
 VAR_9[VAR_6] = 1 << VAR_8->tm_wday;
 VAR_9[VAR_1] = VAR_8->tm_mday;
 VAR_9[VAR_4] = VAR_8->tm_mon + 1;

 if (VAR_10->drv_data->alarm_enable_reg) {
  VAR_9[VAR_7] = VAR_8->tm_year;
  return 0;
 }

 VAR_9[VAR_7] = VAR_8->tm_year > 100 ? (VAR_8->tm_year - 100) : 0;

 if (VAR_8->tm_year < 100) {
  FUNC_0(VAR_10->dev, "RTC cannot handle the year %d.\n",
   1900 + VAR_8->tm_year);
  return -VAR_0;
 }

 return 0;
}
