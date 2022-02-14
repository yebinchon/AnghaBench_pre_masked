
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
 int FUNC_2 (struct msm6242_priv*,int) ;
 int FUNC_3 (struct msm6242_priv*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_16, struct rtc_time *VAR_17)
{
 struct msm6242_priv *VAR_18 = FUNC_0(VAR_16);

 FUNC_1(VAR_18);

 VAR_17->tm_sec = FUNC_2(VAR_18, VAR_12) * 10 +
        FUNC_2(VAR_18, VAR_11);
 VAR_17->tm_min = FUNC_2(VAR_18, VAR_8) * 10 +
        FUNC_2(VAR_18, VAR_7);
 VAR_17->tm_hour = (FUNC_2(VAR_18, VAR_5 & 3)) * 10 +
        FUNC_2(VAR_18, VAR_4);
 VAR_17->tm_mday = FUNC_2(VAR_18, VAR_3) * 10 +
        FUNC_2(VAR_18, VAR_2);
 VAR_17->tm_wday = FUNC_2(VAR_18, VAR_13);
 VAR_17->tm_mon = FUNC_2(VAR_18, VAR_10) * 10 +
        FUNC_2(VAR_18, VAR_9) - 1;
 VAR_17->tm_year = FUNC_2(VAR_18, VAR_15) * 10 +
        FUNC_2(VAR_18, VAR_14);
 if (VAR_17->tm_year <= 69)
  VAR_17->tm_year += 100;

 if (!(FUNC_2(VAR_18, VAR_0) & VAR_1)) {
  unsigned int VAR_19 = FUNC_2(VAR_18, VAR_5) &
      VAR_6;
  if (!VAR_19 && VAR_17->tm_hour == 12)
   VAR_17->tm_hour = 0;
  else if (VAR_19 && VAR_17->tm_hour != 12)
   VAR_17->tm_hour += 12;
 }

 FUNC_3(VAR_18);

 return 0;
}
