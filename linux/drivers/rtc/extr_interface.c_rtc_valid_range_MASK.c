
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time64_t ;
struct rtc_time {int dummy; } ;
struct rtc_device {scalar_t__ range_min; scalar_t__ range_max; scalar_t__ start_secs; scalar_t__ set_start_time; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct rtc_time*) ;

__attribute__((used)) static int FUNC_1(struct rtc_device *VAR_1, struct rtc_time *VAR_2)
{
 if (VAR_1->range_min != VAR_1->range_max) {
  time64_t VAR_3 = FUNC_0(VAR_2);
  time64_t VAR_4 = VAR_1->set_start_time ? VAR_1->start_secs :
   VAR_1->range_min;
  time64_t VAR_5 = VAR_1->set_start_time ?
   (VAR_1->start_secs + VAR_1->range_max - VAR_1->range_min) :
   VAR_1->range_max;

  if (VAR_3 < VAR_4 || VAR_3 > VAR_5)
   return -VAR_0;
 }

 return 0;
}
