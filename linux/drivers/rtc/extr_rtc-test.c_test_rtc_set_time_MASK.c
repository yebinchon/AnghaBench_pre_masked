
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int dummy; } ;
struct rtc_test_data {scalar_t__ offset; } ;
struct device {int dummy; } ;


 struct rtc_test_data* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (struct rtc_time*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, struct rtc_time *VAR_1)
{
 struct rtc_test_data *VAR_2 = FUNC_0(VAR_0);

 VAR_2->offset = FUNC_2(VAR_1) - FUNC_1();

 return 0;
}
