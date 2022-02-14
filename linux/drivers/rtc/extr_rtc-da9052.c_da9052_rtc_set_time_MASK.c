
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct rtc_time {int tm_year; int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; } ;
struct device {int dummy; } ;
struct da9052_rtc {int da9052; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,int*) ;
 struct da9052_rtc* FUNC_1 (struct device*) ;
 int FUNC_2 (struct da9052_rtc*,char*,int) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_2, struct rtc_time *VAR_3)
{
 struct da9052_rtc *VAR_4;
 uint8_t VAR_5[6];
 int VAR_6;


 if ((VAR_3->tm_year < 100) || (VAR_3->tm_year > 163))
  return -VAR_1;

 VAR_4 = FUNC_1(VAR_2);

 VAR_5[0] = VAR_3->tm_sec;
 VAR_5[1] = VAR_3->tm_min;
 VAR_5[2] = VAR_3->tm_hour;
 VAR_5[3] = VAR_3->tm_mday;
 VAR_5[4] = VAR_3->tm_mon + 1;
 VAR_5[5] = VAR_3->tm_year - 100;

 VAR_6 = FUNC_0(VAR_4->da9052, VAR_0, 6, VAR_5);
 if (VAR_6 < 0)
  FUNC_2(VAR_4, "failed to set RTC time: %d\n", VAR_6);
 return VAR_6;
}
