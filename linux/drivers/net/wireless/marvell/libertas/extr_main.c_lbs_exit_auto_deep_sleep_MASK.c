
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lbs_private {int auto_deepsleep_timer; scalar_t__ auto_deep_sleep_timeout; scalar_t__ is_auto_deep_sleep_enabled; } ;


 int FUNC_0 (int *) ;

int FUNC_1(struct lbs_private *VAR_0)
{
 VAR_0->is_auto_deep_sleep_enabled = 0;
 VAR_0->auto_deep_sleep_timeout = 0;
 FUNC_0(&VAR_0->auto_deepsleep_timer);

 return 0;
}
