
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c_rtc {scalar_t__ base; } ;
struct rtc_time {int tm_year; int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*,struct rtc_time*) ;
 int FUNC_2 (struct device*,char*) ;
 struct s3c_rtc* FUNC_3 (struct device*) ;
 int FUNC_4 (struct s3c_rtc*) ;
 int FUNC_5 (struct s3c_rtc*) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_7, struct rtc_time *VAR_8)
{
 struct s3c_rtc *VAR_9 = FUNC_3(VAR_7);
 int VAR_10 = VAR_8->tm_year - 100;
 int VAR_11;

 FUNC_1(VAR_7, "set time %ptR\n", VAR_8);



 if (VAR_10 < 0 || VAR_10 >= 100) {
  FUNC_2(VAR_7, "rtc only supports 100 years\n");
  return -VAR_0;
 }

 VAR_11 = FUNC_5(VAR_9);
 if (VAR_11)
  return VAR_11;

 FUNC_6(FUNC_0(VAR_8->tm_sec), VAR_9->base + VAR_5);
 FUNC_6(FUNC_0(VAR_8->tm_min), VAR_9->base + VAR_3);
 FUNC_6(FUNC_0(VAR_8->tm_hour), VAR_9->base + VAR_2);
 FUNC_6(FUNC_0(VAR_8->tm_mday), VAR_9->base + VAR_1);
 FUNC_6(FUNC_0(VAR_8->tm_mon + 1), VAR_9->base + VAR_4);
 FUNC_6(FUNC_0(VAR_10), VAR_9->base + VAR_6);

 FUNC_4(VAR_9);

 return 0;
}
