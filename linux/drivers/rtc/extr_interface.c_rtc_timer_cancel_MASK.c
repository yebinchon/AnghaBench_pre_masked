
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_timer {scalar_t__ enabled; } ;
struct rtc_device {int ops_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rtc_device*,struct rtc_timer*) ;

void FUNC_3(struct rtc_device *VAR_0, struct rtc_timer *VAR_1)
{
 FUNC_0(&VAR_0->ops_lock);
 if (VAR_1->enabled)
  FUNC_2(VAR_0, VAR_1);
 FUNC_1(&VAR_0->ops_lock);
}
