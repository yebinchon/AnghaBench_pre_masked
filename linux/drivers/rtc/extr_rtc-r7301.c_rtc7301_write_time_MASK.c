
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_wday; int tm_mon; int tm_year; } ;
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
 int FUNC_0 (struct rtc7301_priv*,int,int ) ;

__attribute__((used)) static void FUNC_1(struct rtc7301_priv *VAR_16, struct rtc_time *VAR_17,
          bool VAR_18)
{
 int VAR_19;

 FUNC_0(VAR_16, VAR_17->tm_sec % 10, VAR_12);
 FUNC_0(VAR_16, VAR_17->tm_sec / 10, VAR_6);

 FUNC_0(VAR_16, VAR_17->tm_min % 10, VAR_10);
 FUNC_0(VAR_16, VAR_17->tm_min / 10, VAR_4);

 FUNC_0(VAR_16, VAR_17->tm_hour % 10, VAR_9);
 FUNC_0(VAR_16, VAR_17->tm_hour / 10, VAR_3);

 FUNC_0(VAR_16, VAR_17->tm_mday % 10, VAR_8);
 FUNC_0(VAR_16, VAR_17->tm_mday / 10, VAR_2);


 FUNC_0(VAR_16, VAR_18 ? VAR_14 : VAR_17->tm_wday,
        VAR_15);

 if (VAR_18)
  return;

 FUNC_0(VAR_16, (VAR_17->tm_mon + 1) % 10, VAR_11);
 FUNC_0(VAR_16, (VAR_17->tm_mon + 1) / 10, VAR_5);

 VAR_19 = VAR_17->tm_year + 1900;

 FUNC_0(VAR_16, VAR_19 % 10, VAR_13);
 FUNC_0(VAR_16, (VAR_19 / 10) % 10, VAR_7);
 FUNC_0(VAR_16, (VAR_19 / 100) % 10, VAR_1);
 FUNC_0(VAR_16, VAR_19 / 1000, VAR_0);
}
