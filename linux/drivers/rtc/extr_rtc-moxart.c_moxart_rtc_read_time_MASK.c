
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {unsigned char tm_sec; unsigned char tm_min; unsigned char tm_hour; unsigned char tm_mday; unsigned char tm_mon; unsigned char tm_year; unsigned char tm_wday; int tm_yday; scalar_t__ tm_isdst; } ;
struct moxart_rtc {int rtc_lock; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int* VAR_7 ;
 struct moxart_rtc* FUNC_0 (struct device*) ;
 unsigned char FUNC_1 (struct device*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_8, struct rtc_time *VAR_9)
{
 struct moxart_rtc *VAR_10 = FUNC_0(VAR_8);
 unsigned char VAR_11;

 FUNC_2(&VAR_10->rtc_lock);

 VAR_11 = FUNC_1(VAR_8, VAR_5);
 VAR_9->tm_sec = (((VAR_11 & 0x70) >> 4) * 10) + (VAR_11 & 0x0F);

 VAR_11 = FUNC_1(VAR_8, VAR_3);
 VAR_9->tm_min = (((VAR_11 & 0x70) >> 4) * 10) + (VAR_11 & 0x0F);

 VAR_11 = FUNC_1(VAR_8, VAR_2);
 if (VAR_11 & 0x80) {
  VAR_9->tm_hour = (((VAR_11 & 0x10) >> 4) * 10) + (VAR_11 & 0x0F);
  if (VAR_11 & 0x20) {
   VAR_9->tm_hour += 12;
   if (VAR_9->tm_hour >= 24)
    VAR_9->tm_hour = 0;
  }
 } else {
  VAR_9->tm_hour = (((VAR_11 & 0x30) >> 4) * 10) + (VAR_11 & 0x0F);
 }

 VAR_11 = FUNC_1(VAR_8, VAR_0);
 VAR_9->tm_mday = (((VAR_11 & 0x30) >> 4) * 10) + (VAR_11 & 0x0F);

 VAR_11 = FUNC_1(VAR_8, VAR_4);
 VAR_9->tm_mon = (((VAR_11 & 0x10) >> 4) * 10) + (VAR_11 & 0x0F);
 VAR_9->tm_mon--;

 VAR_11 = FUNC_1(VAR_8, VAR_6);
 VAR_9->tm_year = (((VAR_11 & 0xF0) >> 4) * 10) + (VAR_11 & 0x0F);
 VAR_9->tm_year += 100;
 if (VAR_9->tm_year <= 69)
  VAR_9->tm_year += 100;

 VAR_11 = FUNC_1(VAR_8, VAR_1);
 VAR_9->tm_wday = (VAR_11 & 0x0f) - 1;
 VAR_9->tm_yday = VAR_7[VAR_9->tm_mon];
 VAR_9->tm_yday += (VAR_9->tm_mday - 1);
 if (VAR_9->tm_mon >= 2) {
  if (!(VAR_9->tm_year % 4) && (VAR_9->tm_year % 100))
   VAR_9->tm_yday++;
 }

 VAR_9->tm_isdst = 0;

 FUNC_3(&VAR_10->rtc_lock);

 return 0;
}
