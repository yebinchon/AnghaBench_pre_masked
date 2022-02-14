
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct rtc_time {scalar_t__ tm_mday; scalar_t__ tm_mon; scalar_t__ tm_year; int tm_hour; int tm_min; } ;
struct rtc_wkalrm {struct rtc_time time; } ;
struct device {int dummy; } ;
struct davinci_rtc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int*,struct rtc_time*) ;
 int VAR_5 ;
 int FUNC_2 (struct device*,struct rtc_time*) ;
 int FUNC_3 (struct davinci_rtc*) ;
 struct davinci_rtc* FUNC_4 (struct device*) ;
 int FUNC_5 (unsigned long,struct rtc_time*) ;
 int FUNC_6 (struct rtc_time*,unsigned long*) ;
 int FUNC_7 (struct davinci_rtc*,int,int ) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_10(struct device *VAR_6, struct rtc_wkalrm *VAR_7)
{
 struct davinci_rtc *VAR_8 = FUNC_4(VAR_6);
 unsigned long VAR_9;
 u16 VAR_10;

 if (VAR_7->time.tm_mday <= 0 && VAR_7->time.tm_mon < 0
     && VAR_7->time.tm_year < 0) {
  struct rtc_time VAR_11;
  unsigned long VAR_12, VAR_13;

  FUNC_2(VAR_6, &VAR_11);
  FUNC_6(&VAR_11, &VAR_12);

  VAR_7->time.tm_mday = VAR_11.tm_mday;
  VAR_7->time.tm_mon = VAR_11.tm_mon;
  VAR_7->time.tm_year = VAR_11.tm_year;
  FUNC_6(&VAR_7->time, &VAR_13);

  if (VAR_13 < VAR_12) {
   FUNC_5(VAR_12 + 24 * 60 * 60, &VAR_11);
   VAR_7->time.tm_mday = VAR_11.tm_mday;
   VAR_7->time.tm_mon = VAR_11.tm_mon;
   VAR_7->time.tm_year = VAR_11.tm_year;
  }
 }

 if (FUNC_1(&VAR_10, &VAR_7->time) < 0)
  return -VAR_0;

 FUNC_8(&VAR_5, VAR_9);

 FUNC_3(VAR_8);
 FUNC_7(VAR_8, FUNC_0(VAR_7->time.tm_min), VAR_4);

 FUNC_3(VAR_8);
 FUNC_7(VAR_8, FUNC_0(VAR_7->time.tm_hour), VAR_3);

 FUNC_3(VAR_8);
 FUNC_7(VAR_8, VAR_10 & 0xFF, VAR_1);

 FUNC_3(VAR_8);
 FUNC_7(VAR_8, (VAR_10 & 0xFF00) >> 8, VAR_2);

 FUNC_9(&VAR_5, VAR_9);

 return 0;
}
