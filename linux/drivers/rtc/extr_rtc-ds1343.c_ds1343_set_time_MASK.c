
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_wday; int tm_mday; int tm_mon; int tm_year; } ;
struct ds1343_priv {int map; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 struct ds1343_priv* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_7, struct rtc_time *VAR_8)
{
 struct ds1343_priv *VAR_9 = FUNC_1(VAR_7);
 int VAR_10;

 VAR_10 = FUNC_2(VAR_9->map, VAR_5,
    FUNC_0(VAR_8->tm_sec));
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_2(VAR_9->map, VAR_3,
    FUNC_0(VAR_8->tm_min));
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_2(VAR_9->map, VAR_2,
    FUNC_0(VAR_8->tm_hour) & 0x3F);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_2(VAR_9->map, VAR_1,
    FUNC_0(VAR_8->tm_wday + 1));
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_2(VAR_9->map, VAR_0,
    FUNC_0(VAR_8->tm_mday));
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_2(VAR_9->map, VAR_4,
    FUNC_0(VAR_8->tm_mon + 1));
 if (VAR_10)
  return VAR_10;

 VAR_8->tm_year %= 100;

 VAR_10 = FUNC_2(VAR_9->map, VAR_6,
    FUNC_0(VAR_8->tm_year));
 if (VAR_10)
  return VAR_10;

 return 0;
}
