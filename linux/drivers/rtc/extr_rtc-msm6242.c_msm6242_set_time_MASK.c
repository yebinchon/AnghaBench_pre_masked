
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_wday; int tm_mon; int tm_year; } ;
struct msm6242_priv {int dummy; } ;
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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 struct msm6242_priv* FUNC_0 (struct device*) ;
 int FUNC_1 (struct msm6242_priv*) ;
 int FUNC_2 (struct msm6242_priv*,int ) ;
 int FUNC_3 (struct msm6242_priv*) ;
 int FUNC_4 (struct msm6242_priv*,int,int ) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_16, struct rtc_time *VAR_17)
{
 struct msm6242_priv *VAR_18 = FUNC_0(VAR_16);

 FUNC_1(VAR_18);

 FUNC_4(VAR_18, VAR_17->tm_sec / 10, VAR_12);
 FUNC_4(VAR_18, VAR_17->tm_sec % 10, VAR_11);
 FUNC_4(VAR_18, VAR_17->tm_min / 10, VAR_8);
 FUNC_4(VAR_18, VAR_17->tm_min % 10, VAR_7);
 if (FUNC_2(VAR_18, VAR_0) & VAR_1)
  FUNC_4(VAR_18, VAR_17->tm_hour / 10, VAR_5);
 else if (VAR_17->tm_hour >= 12)
  FUNC_4(VAR_18, VAR_6 + (VAR_17->tm_hour - 12) / 10,
         VAR_5);
 else
  FUNC_4(VAR_18, VAR_17->tm_hour / 10, VAR_5);
 FUNC_4(VAR_18, VAR_17->tm_hour % 10, VAR_4);
 FUNC_4(VAR_18, VAR_17->tm_mday / 10, VAR_3);
 FUNC_4(VAR_18, VAR_17->tm_mday % 10, VAR_2);
 if (VAR_17->tm_wday != -1)
  FUNC_4(VAR_18, VAR_17->tm_wday, VAR_13);
 FUNC_4(VAR_18, (VAR_17->tm_mon + 1) / 10, VAR_10);
 FUNC_4(VAR_18, (VAR_17->tm_mon + 1) % 10, VAR_9);
 if (VAR_17->tm_year >= 100)
  VAR_17->tm_year -= 100;
 FUNC_4(VAR_18, VAR_17->tm_year / 10, VAR_15);
 FUNC_4(VAR_18, VAR_17->tm_year % 10, VAR_14);

 FUNC_3(VAR_18);
 return 0;
}
