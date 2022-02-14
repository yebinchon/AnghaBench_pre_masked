
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lbs_private {int is_auto_deep_sleep_enabled; int wakeup_dev_required; int auto_deep_sleep_timeout; int auto_deepsleep_timer; scalar_t__ is_deep_sleep; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,scalar_t__) ;

int FUNC_1(struct lbs_private *VAR_2)
{
 VAR_2->is_auto_deep_sleep_enabled = 1;
 if (VAR_2->is_deep_sleep)
  VAR_2->wakeup_dev_required = 1;
 FUNC_0(&VAR_2->auto_deepsleep_timer ,
   VAR_1 + (VAR_2->auto_deep_sleep_timeout * VAR_0)/1000);

 return 0;
}
