
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int tm_year; } ;
struct rtc_wkalrm {struct rtc_time time; } ;
struct device {int dummy; } ;
struct da9052_rtc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct da9052_rtc*,int) ;
 int FUNC_1 (struct da9052_rtc*,struct rtc_time*) ;
 struct da9052_rtc* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1, struct rtc_wkalrm *VAR_2)
{
 int VAR_3;
 struct rtc_time *VAR_4 = &VAR_2->time;
 struct da9052_rtc *VAR_5 = FUNC_2(VAR_1);


 if ((VAR_4->tm_year < 100) || (VAR_4->tm_year > 163))
  return -VAR_0;

 VAR_3 = FUNC_0(VAR_5, 0);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_3 = FUNC_1(VAR_5, VAR_4);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_3 = FUNC_0(VAR_5, 1);
 return VAR_3;
}
