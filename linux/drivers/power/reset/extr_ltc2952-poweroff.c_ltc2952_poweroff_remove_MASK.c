
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct ltc2952_poweroff {int panic_notifier; int timer_wde; int timer_trigger; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 struct ltc2952_poweroff* FUNC_2 (struct platform_device*) ;
 int * VAR_1 ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_2)
{
 struct ltc2952_poweroff *VAR_3 = FUNC_2(VAR_2);

 VAR_1 = ((void*)0);
 FUNC_1(&VAR_3->timer_trigger);
 FUNC_1(&VAR_3->timer_wde);
 FUNC_0(&VAR_0,
      &VAR_3->panic_notifier);
 return 0;
}
