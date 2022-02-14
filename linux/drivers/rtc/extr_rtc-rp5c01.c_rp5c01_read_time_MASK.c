
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_wday; int tm_mon; int tm_year; } ;
struct rp5c01_priv {int lock; } ;
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
 struct rp5c01_priv* FUNC_0 (struct device*) ;
 int FUNC_1 (struct rp5c01_priv*) ;
 int FUNC_2 (struct rp5c01_priv*,int ) ;
 int FUNC_3 (struct rp5c01_priv*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_13, struct rtc_time *VAR_14)
{
 struct rp5c01_priv *VAR_15 = FUNC_0(VAR_13);

 FUNC_4(&VAR_15->lock);
 FUNC_1(VAR_15);

 VAR_14->tm_sec = FUNC_2(VAR_15, VAR_4) * 10 +
        FUNC_2(VAR_15, VAR_10);
 VAR_14->tm_min = FUNC_2(VAR_15, VAR_2) * 10 +
        FUNC_2(VAR_15, VAR_8);
 VAR_14->tm_hour = FUNC_2(VAR_15, VAR_1) * 10 +
        FUNC_2(VAR_15, VAR_7);
 VAR_14->tm_mday = FUNC_2(VAR_15, VAR_0) * 10 +
        FUNC_2(VAR_15, VAR_6);
 VAR_14->tm_wday = FUNC_2(VAR_15, VAR_12);
 VAR_14->tm_mon = FUNC_2(VAR_15, VAR_3) * 10 +
        FUNC_2(VAR_15, VAR_9) - 1;
 VAR_14->tm_year = FUNC_2(VAR_15, VAR_5) * 10 +
        FUNC_2(VAR_15, VAR_11);
 if (VAR_14->tm_year <= 69)
  VAR_14->tm_year += 100;

 FUNC_3(VAR_15);
 FUNC_5(&VAR_15->lock);

 return 0;
}
