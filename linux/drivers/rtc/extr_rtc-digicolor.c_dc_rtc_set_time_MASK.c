
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int dummy; } ;
struct device {int dummy; } ;
struct dc_rtc {int dummy; } ;


 int FUNC_0 (struct dc_rtc*,int ) ;
 struct dc_rtc* FUNC_1 (struct device*) ;
 int FUNC_2 (struct rtc_time*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, struct rtc_time *VAR_1)
{
 struct dc_rtc *VAR_2 = FUNC_1(VAR_0);

 return FUNC_0(VAR_2, FUNC_2(VAR_1));
}
