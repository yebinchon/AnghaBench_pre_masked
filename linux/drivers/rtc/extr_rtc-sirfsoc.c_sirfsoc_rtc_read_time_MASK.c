
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
 int FUNC_0 () ;
 struct sirfsoc_rtc_drv* FUNC_1 (struct device*) ;
 int FUNC_2 (unsigned long,struct rtc_time*) ;
 unsigned long FUNC_3 (struct sirfsoc_rtc_drv*,int ) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_3,
  struct rtc_time *VAR_4)
{
 unsigned long VAR_5 = 0;
 struct sirfsoc_rtc_drv *VAR_6;
 VAR_6 = FUNC_1(VAR_3);





 do {
  VAR_5 = FUNC_3(VAR_6, VAR_1);
  FUNC_0();
 } while (VAR_5 != FUNC_3(VAR_6, VAR_1));

 FUNC_2(VAR_6->overflow_rtc << (VAR_0 - VAR_2) |
     VAR_5 >> VAR_2, VAR_4);
 return 0;
}
