
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snvs_rtc_data {int dummy; } ;
struct rtc_time {int dummy; } ;
struct device {int dummy; } ;


 struct snvs_rtc_data* FUNC_0 (struct device*) ;
 unsigned long FUNC_1 (struct snvs_rtc_data*) ;
 int FUNC_2 (unsigned long,struct rtc_time*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, struct rtc_time *VAR_1)
{
 struct snvs_rtc_data *VAR_2 = FUNC_0(VAR_0);
 unsigned long VAR_3 = FUNC_1(VAR_2);

 FUNC_2(VAR_3, VAR_1);

 return 0;
}
