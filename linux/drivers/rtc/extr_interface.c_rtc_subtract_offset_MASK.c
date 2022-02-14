
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time64_t ;
struct rtc_time {int dummy; } ;
struct rtc_device {scalar_t__ offset_secs; scalar_t__ range_min; scalar_t__ range_max; } ;


 int FUNC_0 (scalar_t__,struct rtc_time*) ;
 scalar_t__ FUNC_1 (struct rtc_time*) ;

__attribute__((used)) static void FUNC_2(struct rtc_device *VAR_0, struct rtc_time *VAR_1)
{
 time64_t VAR_2;

 if (!VAR_0->offset_secs)
  return;

 VAR_2 = FUNC_1(VAR_1);







 if (VAR_2 >= VAR_0->range_min && VAR_2 <= VAR_0->range_max)
  return;

 FUNC_0(VAR_2 - VAR_0->offset_secs, VAR_1);
}
