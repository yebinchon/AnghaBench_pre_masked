
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int tm_year; int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; int tm_wday; } ;
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
 int FUNC_0 (int) ;
 int FUNC_1 (struct device*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_9, struct rtc_time *VAR_10)
{
 VAR_10->tm_year = VAR_10->tm_year + 1900;


 FUNC_1(VAR_9, VAR_1, 0);

 FUNC_1(VAR_9, VAR_7, FUNC_0(VAR_10->tm_sec));
 FUNC_1(VAR_9, VAR_5, FUNC_0(VAR_10->tm_min));
 FUNC_1(VAR_9, VAR_4, FUNC_0(VAR_10->tm_hour));

 FUNC_1(VAR_9, VAR_2, FUNC_0(VAR_10->tm_mday));
 FUNC_1(VAR_9, VAR_6, FUNC_0(VAR_10->tm_mon + 1));
 FUNC_1(VAR_9, VAR_3, FUNC_0(VAR_10->tm_wday));
 FUNC_1(VAR_9, VAR_8, FUNC_0(VAR_10->tm_year % 100));
 FUNC_1(VAR_9, VAR_0, FUNC_0(VAR_10->tm_year / 100));






 FUNC_1(VAR_9, VAR_1, 0x80);

 return 0;
}
