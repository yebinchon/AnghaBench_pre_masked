
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int dummy; } ;
struct rtc_wkalrm {int enabled; struct rtc_time time; } ;
struct device {int dummy; } ;
struct da9055_rtc {int da9055; } ;


 int FUNC_0 (int ,struct rtc_time*) ;
 int FUNC_1 (int ) ;
 struct da9055_rtc* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, struct rtc_wkalrm *VAR_1)
{
 int VAR_2;
 struct rtc_time *VAR_3 = &VAR_1->time;
 struct da9055_rtc *VAR_4 = FUNC_2(VAR_0);

 VAR_2 = FUNC_0(VAR_4->da9055, VAR_3);

 if (VAR_2)
  return VAR_2;

 VAR_1->enabled = FUNC_1(VAR_4->da9055);

 return 0;
}
