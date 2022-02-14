
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int dummy; } ;
struct ep93xx_rtc {scalar_t__ mmio_base; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct ep93xx_rtc* FUNC_0 (struct device*) ;
 unsigned long FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned long,struct rtc_time*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1, struct rtc_time *VAR_2)
{
 struct ep93xx_rtc *VAR_3 = FUNC_0(VAR_1);
 unsigned long VAR_4;

 VAR_4 = FUNC_1(VAR_3->mmio_base + VAR_0);

 FUNC_2(VAR_4, VAR_2);
 return 0;
}
