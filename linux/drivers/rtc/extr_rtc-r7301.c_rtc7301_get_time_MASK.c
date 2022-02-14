
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_wday; int tm_mon; int tm_year; int tm_yday; int tm_isdst; } ;
struct rtc7301_priv {int dummy; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct rtc7301_priv*,int ) ;

__attribute__((used)) static void FUNC_1(struct rtc7301_priv *VAR_16, struct rtc_time *VAR_17,
        bool VAR_18)
{
 int VAR_19;

 VAR_17->tm_sec = FUNC_0(VAR_16, VAR_12);
 VAR_17->tm_sec += (FUNC_0(VAR_16, VAR_6) & ~VAR_14) * 10;
 VAR_17->tm_min = FUNC_0(VAR_16, VAR_10);
 VAR_17->tm_min += (FUNC_0(VAR_16, VAR_4) & ~VAR_14) * 10;
 VAR_17->tm_hour = FUNC_0(VAR_16, VAR_9);
 VAR_17->tm_hour += (FUNC_0(VAR_16, VAR_3) & ~VAR_14) * 10;
 VAR_17->tm_mday = FUNC_0(VAR_16, VAR_8);
 VAR_17->tm_mday += (FUNC_0(VAR_16, VAR_2) & ~VAR_14) * 10;

 if (VAR_18) {
  VAR_17->tm_wday = -1;
  VAR_17->tm_mon = -1;
  VAR_17->tm_year = -1;
  VAR_17->tm_yday = -1;
  VAR_17->tm_isdst = -1;
  return;
 }

 VAR_17->tm_wday = (FUNC_0(VAR_16, VAR_15) & ~VAR_14);
 VAR_17->tm_mon = FUNC_0(VAR_16, VAR_5) * 10 +
       FUNC_0(VAR_16, VAR_11) - 1;
 VAR_19 = FUNC_0(VAR_16, VAR_0) * 1000 +
        FUNC_0(VAR_16, VAR_1) * 100 +
        FUNC_0(VAR_16, VAR_7) * 10 +
        FUNC_0(VAR_16, VAR_13);

 VAR_17->tm_year = VAR_19 - 1900;
}
