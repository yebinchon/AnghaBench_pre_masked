
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_rtc {unsigned long long clkrate; int alarm; } ;
struct rtc_time {int dummy; } ;
struct rtc_wkalrm {int enabled; struct rtc_time time; } ;
struct device {int dummy; } ;


 struct st_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 (int *,struct rtc_wkalrm*,int) ;
 unsigned long long FUNC_2 (struct rtc_time*) ;
 int FUNC_3 (struct device*,int ) ;
 int FUNC_4 (struct device*,struct rtc_time*) ;
 int FUNC_5 (struct st_rtc*,unsigned long long,unsigned long long) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_0, struct rtc_wkalrm *VAR_1)
{
 struct st_rtc *VAR_2 = FUNC_0(VAR_0);
 struct rtc_time VAR_3;
 unsigned long long VAR_4;
 unsigned long long VAR_5;
 unsigned long long VAR_6;

 FUNC_4(VAR_0, &VAR_3);
 VAR_4 = FUNC_2(&VAR_3);
 VAR_5 = FUNC_2(&VAR_1->time);

 FUNC_1(&VAR_2->alarm, VAR_1, sizeof(struct rtc_wkalrm));


 VAR_5 -= VAR_4;
 VAR_6 = (unsigned long long)VAR_5 * VAR_2->clkrate;

 FUNC_5(VAR_2, VAR_6 >> 32, VAR_6);
 FUNC_3(VAR_0, VAR_1->enabled);

 return 0;
}
