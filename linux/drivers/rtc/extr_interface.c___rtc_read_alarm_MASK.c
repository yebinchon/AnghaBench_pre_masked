
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time64_t ;
struct rtc_time {scalar_t__ tm_min; scalar_t__ tm_hour; scalar_t__ tm_mon; scalar_t__ tm_year; int tm_sec; int tm_mday; } ;
struct rtc_wkalrm {struct rtc_time time; } ;
struct rtc_device {int dev; } ;


 int FUNC_0 (int *,char*,char*) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct rtc_time*,struct rtc_time*,int) ;
 int FUNC_4 (struct rtc_device*,struct rtc_time*) ;
 unsigned int FUNC_5 (int,scalar_t__) ;
 int FUNC_6 (struct rtc_device*,struct rtc_wkalrm*) ;
 int FUNC_7 (struct rtc_device*,struct rtc_time*) ;
 int FUNC_8 (scalar_t__,struct rtc_time*) ;
 scalar_t__ FUNC_9 (struct rtc_time*) ;
 int FUNC_10 (struct rtc_time*) ;

int FUNC_11(struct rtc_device *VAR_0, struct rtc_wkalrm *VAR_1)
{
 int VAR_2;
 struct rtc_time VAR_3, VAR_4;
 int VAR_5 = 1;
 time64_t VAR_6, VAR_7;
 enum { none, day, month, year } VAR_8 = none;
 unsigned int VAR_9;
 VAR_2 = FUNC_7(VAR_0, &VAR_3);
 if (VAR_2 < 0)
  return VAR_2;
 do {
  if (!VAR_5)
   FUNC_3(&VAR_3, &VAR_4, sizeof(struct rtc_time));
  VAR_5 = 0;


  VAR_2 = FUNC_6(VAR_0, VAR_1);
  if (VAR_2)
   return VAR_2;


  if (FUNC_10(&VAR_1->time) == 0) {
   FUNC_4(VAR_0, &VAR_1->time);
   return 0;
  }


  VAR_2 = FUNC_7(VAR_0, &VAR_4);
  if (VAR_2 < 0)
   return VAR_2;


 } while (VAR_3.tm_min != VAR_4.tm_min ||
   VAR_3.tm_hour != VAR_4.tm_hour ||
   VAR_3.tm_mon != VAR_4.tm_mon ||
   VAR_3.tm_year != VAR_4.tm_year);




 if (VAR_1->time.tm_sec == -1)
  VAR_1->time.tm_sec = VAR_4.tm_sec;
 if (VAR_1->time.tm_min == -1)
  VAR_1->time.tm_min = VAR_4.tm_min;
 if (VAR_1->time.tm_hour == -1)
  VAR_1->time.tm_hour = VAR_4.tm_hour;


 if (VAR_1->time.tm_mday < 1 || VAR_1->time.tm_mday > 31) {
  VAR_1->time.tm_mday = VAR_4.tm_mday;
  VAR_8 = day;
 }
 if ((unsigned int)VAR_1->time.tm_mon >= 12) {
  VAR_1->time.tm_mon = VAR_4.tm_mon;
  if (VAR_8 == none)
   VAR_8 = month;
 }
 if (VAR_1->time.tm_year == -1) {
  VAR_1->time.tm_year = VAR_4.tm_year;
  if (VAR_8 == none)
   VAR_8 = year;
 }




 VAR_2 = FUNC_10(&VAR_1->time);
 if (VAR_2)
  goto done;


 VAR_6 = FUNC_9(&VAR_4);
 VAR_7 = FUNC_9(&VAR_1->time);
 if (VAR_6 < VAR_7)
  goto done;

 switch (VAR_8) {





 case day:
  FUNC_0(&VAR_0->dev, "alarm rollover: %s\n", "day");
  VAR_7 += 24 * 60 * 60;
  FUNC_8(VAR_7, &VAR_1->time);
  break;






 case month:
  FUNC_0(&VAR_0->dev, "alarm rollover: %s\n", "month");
  do {
   if (VAR_1->time.tm_mon < 11) {
    VAR_1->time.tm_mon++;
   } else {
    VAR_1->time.tm_mon = 0;
    VAR_1->time.tm_year++;
   }
   VAR_9 = FUNC_5(VAR_1->time.tm_mon,
           VAR_1->time.tm_year);
  } while (VAR_9 < VAR_1->time.tm_mday);
  break;


 case year:
  FUNC_0(&VAR_0->dev, "alarm rollover: %s\n", "year");
  do {
   VAR_1->time.tm_year++;
  } while (!FUNC_2(VAR_1->time.tm_year + 1900) &&
    FUNC_10(&VAR_1->time) != 0);
  break;

 default:
  FUNC_1(&VAR_0->dev, "alarm rollover not handled\n");
 }

 VAR_2 = FUNC_10(&VAR_1->time);

done:
 if (VAR_2)
  FUNC_1(&VAR_0->dev, "invalid alarm value: %ptR\n",
    &VAR_1->time);

 return VAR_2;
}
