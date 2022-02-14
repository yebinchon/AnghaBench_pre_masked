
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sirfsoc_rtc_drv {unsigned long overflow_rtc; } ;
struct rtc_time {int dummy; } ;
struct device {int dummy; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 struct sirfsoc_rtc_drv* FUNC_0 (struct device*) ;
 int FUNC_1 (struct rtc_time*,unsigned long*) ;
 int FUNC_2 (struct sirfsoc_rtc_drv*,int ,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_4,
  struct rtc_time *VAR_5)
{
 unsigned long VAR_6;
 struct sirfsoc_rtc_drv *VAR_7;
 VAR_7 = FUNC_0(VAR_4);

 FUNC_1(VAR_5, &VAR_6);

 VAR_7->overflow_rtc = VAR_6 >> (VAR_0 - VAR_2);

 FUNC_2(VAR_7, VAR_3, VAR_7->overflow_rtc);
 FUNC_2(VAR_7, VAR_1, VAR_6 << VAR_2);

 return 0;
}
