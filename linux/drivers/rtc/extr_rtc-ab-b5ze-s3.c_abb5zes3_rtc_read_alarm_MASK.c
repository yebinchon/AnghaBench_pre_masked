
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_wkalrm {int dummy; } ;
struct device {int dummy; } ;
struct abb5zes3_rtc_data {scalar_t__ timer_alarm; } ;


 int FUNC_0 (struct device*,struct rtc_wkalrm*) ;
 int FUNC_1 (struct device*,struct rtc_wkalrm*) ;
 struct abb5zes3_rtc_data* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, struct rtc_wkalrm *VAR_1)
{
 struct abb5zes3_rtc_data *VAR_2 = FUNC_2(VAR_0);
 int VAR_3;

 if (VAR_2->timer_alarm)
  VAR_3 = FUNC_1(VAR_0, VAR_1);
 else
  VAR_3 = FUNC_0(VAR_0, VAR_1);

 return VAR_3;
}
