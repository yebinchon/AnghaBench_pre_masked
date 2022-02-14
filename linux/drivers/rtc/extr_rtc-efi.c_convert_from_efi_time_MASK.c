
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; int tm_year; int tm_isdst; int tm_yday; int tm_wday; } ;
struct TYPE_5__ {int second; int minute; int hour; int day; int month; int year; int daylight; } ;
typedef TYPE_1__ efi_time_t ;




 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct rtc_time*,int ,int) ;

__attribute__((used)) static bool
FUNC_3(efi_time_t *VAR_0, struct rtc_time *VAR_1)
{
 FUNC_2(VAR_1, 0, sizeof(*VAR_1));

 if (VAR_0->second >= 60)
  return 0;
 VAR_1->tm_sec = VAR_0->second;

 if (VAR_0->minute >= 60)
  return 0;
 VAR_1->tm_min = VAR_0->minute;

 if (VAR_0->hour >= 24)
  return 0;
 VAR_1->tm_hour = VAR_0->hour;

 if (!VAR_0->day || VAR_0->day > 31)
  return 0;
 VAR_1->tm_mday = VAR_0->day;

 if (!VAR_0->month || VAR_0->month > 12)
  return 0;
 VAR_1->tm_mon = VAR_0->month - 1;

 if (VAR_0->year < 1900 || VAR_0->year > 9999)
  return 0;
 VAR_1->tm_year = VAR_0->year - 1900;


 VAR_1->tm_yday = FUNC_1(VAR_0);


 VAR_1->tm_wday = FUNC_0(VAR_0, VAR_1->tm_yday);

 switch (VAR_0->daylight & 129) {
 case 129:
  VAR_1->tm_isdst = 1;
  break;
 case 128:
  VAR_1->tm_isdst = 0;
  break;
 default:
  VAR_1->tm_isdst = -1;
 }

 return 1;
}
