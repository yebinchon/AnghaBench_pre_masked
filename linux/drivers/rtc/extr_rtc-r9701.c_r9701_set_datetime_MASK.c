
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int tm_year; int tm_hour; int tm_min; int tm_sec; int tm_mday; int tm_mon; int tm_wday; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct device*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_8, struct rtc_time *VAR_9)
{
 int VAR_10, VAR_11;

 VAR_11 = VAR_9->tm_year + 1900;
 if (VAR_11 >= 2100 || VAR_11 < 2000)
  return -VAR_0;

 VAR_10 = FUNC_1(VAR_8, VAR_2, FUNC_0(VAR_9->tm_hour));
 VAR_10 = VAR_10 ? VAR_10 : FUNC_1(VAR_8, VAR_3, FUNC_0(VAR_9->tm_min));
 VAR_10 = VAR_10 ? VAR_10 : FUNC_1(VAR_8, VAR_5, FUNC_0(VAR_9->tm_sec));
 VAR_10 = VAR_10 ? VAR_10 : FUNC_1(VAR_8, VAR_1, FUNC_0(VAR_9->tm_mday));
 VAR_10 = VAR_10 ? VAR_10 : FUNC_1(VAR_8, VAR_4, FUNC_0(VAR_9->tm_mon + 1));
 VAR_10 = VAR_10 ? VAR_10 : FUNC_1(VAR_8, VAR_7, FUNC_0(VAR_9->tm_year - 100));
 VAR_10 = VAR_10 ? VAR_10 : FUNC_1(VAR_8, VAR_6, 1 << VAR_9->tm_wday);

 return VAR_10;
}
