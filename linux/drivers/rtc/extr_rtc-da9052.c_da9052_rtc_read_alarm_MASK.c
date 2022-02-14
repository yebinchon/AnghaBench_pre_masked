
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int dummy; } ;
struct rtc_wkalrm {int enabled; struct rtc_time time; } ;
struct device {int dummy; } ;
struct da9052_rtc {int dummy; } ;


 int FUNC_0 (struct da9052_rtc*,struct rtc_time*) ;
 int FUNC_1 (struct da9052_rtc*) ;
 struct da9052_rtc* FUNC_2 (struct device*) ;
 int FUNC_3 (struct da9052_rtc*,char*,int) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0, struct rtc_wkalrm *VAR_1)
{
 int VAR_2;
 struct rtc_time *VAR_3 = &VAR_1->time;
 struct da9052_rtc *VAR_4 = FUNC_2(VAR_0);

 VAR_2 = FUNC_0(VAR_4, VAR_3);
 if (VAR_2 < 0) {
  FUNC_3(VAR_4, "failed to read RTC alarm: %d\n", VAR_2);
  return VAR_2;
 }

 VAR_1->enabled = FUNC_1(VAR_4);
 return 0;
}
