
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int dummy; } ;
struct device {int dummy; } ;
struct dc_rtc {int dummy; } ;


 int FUNC_0 (struct dc_rtc*,unsigned long*) ;
 struct dc_rtc* FUNC_1 (struct device*) ;
 int FUNC_2 (unsigned long,struct rtc_time*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, struct rtc_time *VAR_1)
{
 struct dc_rtc *VAR_2 = FUNC_1(VAR_0);
 unsigned long VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2, &VAR_3);
 if (VAR_4 < 0)
  return VAR_4;
 FUNC_2(VAR_3, VAR_1);

 return 0;
}
