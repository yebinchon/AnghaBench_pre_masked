
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int tm_year; int tm_mon; int tm_yday; int tm_wday; int tm_mday; int tm_hour; int tm_min; int tm_sec; } ;
struct rtc_wkalrm {scalar_t__ enabled; struct rtc_time time; } ;
struct lpc24xx_rtc {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct lpc24xx_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 (struct lpc24xx_rtc*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_10, struct rtc_wkalrm *VAR_11)
{
 struct lpc24xx_rtc *VAR_12 = FUNC_0(VAR_10);
 struct rtc_time *VAR_13 = &VAR_11->time;


 FUNC_1(VAR_12, VAR_9, VAR_0);

 FUNC_1(VAR_12, VAR_7, VAR_13->tm_sec);
 FUNC_1(VAR_12, VAR_5, VAR_13->tm_min);
 FUNC_1(VAR_12, VAR_4, VAR_13->tm_hour);
 FUNC_1(VAR_12, VAR_1, VAR_13->tm_mday);
 FUNC_1(VAR_12, VAR_2, VAR_13->tm_wday);
 FUNC_1(VAR_12, VAR_3, VAR_13->tm_yday);
 FUNC_1(VAR_12, VAR_6, VAR_13->tm_mon);
 FUNC_1(VAR_12, VAR_8, VAR_13->tm_year);

 if (VAR_11->enabled)
  FUNC_1(VAR_12, VAR_9, 0);

 return 0;
}
