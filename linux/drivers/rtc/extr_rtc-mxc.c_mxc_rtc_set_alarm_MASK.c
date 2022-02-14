
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_wkalrm {int enabled; int time; } ;
struct rtc_time {int dummy; } ;
struct rtc_plat_data {int g_rtc_alarm; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct rtc_plat_data* FUNC_0 (struct device*) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (struct device*,int ,int ) ;
 int FUNC_3 (struct device*,int *) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_1, struct rtc_wkalrm *VAR_2)
{
 struct rtc_plat_data *VAR_3 = FUNC_0(VAR_1);

 FUNC_3(VAR_1, &VAR_2->time);

 FUNC_1(&VAR_3->g_rtc_alarm, &VAR_2->time, sizeof(struct rtc_time));
 FUNC_2(VAR_1, VAR_0, VAR_2->enabled);

 return 0;
}
