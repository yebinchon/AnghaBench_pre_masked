
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time64_t ;
struct rtc_time {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct device*,int ) ;
 scalar_t__ FUNC_1 (struct rtc_time*) ;
 int FUNC_2 (struct device*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1, struct rtc_time *VAR_2)
{
 time64_t VAR_3 = FUNC_1(VAR_2);


 do {
  FUNC_2(VAR_1, VAR_0, VAR_3);
 } while (VAR_3 != FUNC_0(VAR_1, VAR_0));

 return 0;
}
