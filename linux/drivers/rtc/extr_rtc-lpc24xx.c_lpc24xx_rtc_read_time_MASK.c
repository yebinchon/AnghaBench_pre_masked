
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtc_time {int tm_yday; int tm_year; int tm_mday; int tm_mon; int tm_wday; int tm_hour; int tm_min; int tm_sec; } ;
struct lpc24xx_rtc {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct lpc24xx_rtc* FUNC_8 (struct device*) ;
 int FUNC_9 (struct lpc24xx_rtc*,int ) ;

__attribute__((used)) static int FUNC_10(struct device *VAR_3, struct rtc_time *VAR_4)
{
 struct lpc24xx_rtc *VAR_5 = FUNC_8(VAR_3);
 u32 VAR_6, VAR_7, VAR_8;

 VAR_6 = FUNC_9(VAR_5, VAR_0);
 VAR_7 = FUNC_9(VAR_5, VAR_1);
 VAR_8 = FUNC_9(VAR_5, VAR_2);

 VAR_4->tm_sec = FUNC_3(VAR_6);
 VAR_4->tm_min = FUNC_2(VAR_6);
 VAR_4->tm_hour = FUNC_1(VAR_6);
 VAR_4->tm_wday = FUNC_0(VAR_6);
 VAR_4->tm_mon = FUNC_5(VAR_7);
 VAR_4->tm_mday = FUNC_4(VAR_7);
 VAR_4->tm_year = FUNC_6(VAR_7);
 VAR_4->tm_yday = FUNC_7(VAR_8);

 return 0;
}
