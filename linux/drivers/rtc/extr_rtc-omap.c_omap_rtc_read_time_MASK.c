
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int dummy; } ;
struct omap_rtc {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct rtc_time*) ;
 struct omap_rtc* FUNC_1 (struct device*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct omap_rtc*,struct rtc_time*) ;
 int FUNC_5 (struct omap_rtc*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_0, struct rtc_time *VAR_1)
{
 struct omap_rtc *VAR_2 = FUNC_1(VAR_0);


 FUNC_2();
 FUNC_5(VAR_2);
 FUNC_4(VAR_2, VAR_1);
 FUNC_3();

 FUNC_0(VAR_1);

 return 0;
}
