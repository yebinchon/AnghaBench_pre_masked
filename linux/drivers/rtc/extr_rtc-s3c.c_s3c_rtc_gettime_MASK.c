
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c_rtc {scalar_t__ base; } ;
struct rtc_time {scalar_t__ tm_min; scalar_t__ tm_hour; scalar_t__ tm_mday; scalar_t__ tm_mon; scalar_t__ tm_year; scalar_t__ tm_sec; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct device*,char*,struct rtc_time*) ;
 struct s3c_rtc* FUNC_2 (struct device*) ;
 void* FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct s3c_rtc*) ;
 int FUNC_5 (struct s3c_rtc*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_6, struct rtc_time *VAR_7)
{
 struct s3c_rtc *VAR_8 = FUNC_2(VAR_6);
 unsigned int VAR_9 = 0;
 int VAR_10;

 VAR_10 = FUNC_5(VAR_8);
 if (VAR_10)
  return VAR_10;

retry_get_time:
 VAR_7->tm_min = FUNC_3(VAR_8->base + VAR_2);
 VAR_7->tm_hour = FUNC_3(VAR_8->base + VAR_1);
 VAR_7->tm_mday = FUNC_3(VAR_8->base + VAR_0);
 VAR_7->tm_mon = FUNC_3(VAR_8->base + VAR_3);
 VAR_7->tm_year = FUNC_3(VAR_8->base + VAR_5);
 VAR_7->tm_sec = FUNC_3(VAR_8->base + VAR_4);






 if (VAR_7->tm_sec == 0 && !VAR_9) {
  VAR_9 = 1;
  goto retry_get_time;
 }

 VAR_7->tm_sec = FUNC_0(VAR_7->tm_sec);
 VAR_7->tm_min = FUNC_0(VAR_7->tm_min);
 VAR_7->tm_hour = FUNC_0(VAR_7->tm_hour);
 VAR_7->tm_mday = FUNC_0(VAR_7->tm_mday);
 VAR_7->tm_mon = FUNC_0(VAR_7->tm_mon);
 VAR_7->tm_year = FUNC_0(VAR_7->tm_year);

 FUNC_4(VAR_8);

 VAR_7->tm_year += 100;
 VAR_7->tm_mon -= 1;

 FUNC_1(VAR_6, "read time %ptR\n", VAR_7);
 return 0;
}
