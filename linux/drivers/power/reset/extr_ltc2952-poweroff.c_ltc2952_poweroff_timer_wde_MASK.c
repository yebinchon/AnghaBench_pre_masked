
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ltc2952_poweroff {int wde_interval; int gpio_watchdog; scalar_t__ kernel_panic; } ;
struct hrtimer {int dummy; } ;
typedef int ktime_t ;
typedef enum hrtimer_restart { ____Placeholder_hrtimer_restart } hrtimer_restart ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct hrtimer*) ;
 unsigned long FUNC_3 (struct hrtimer*,int ,int ) ;
 int VAR_2 ;
 struct ltc2952_poweroff* FUNC_4 (struct hrtimer*,int ) ;

__attribute__((used)) static enum hrtimer_restart FUNC_5(struct hrtimer *VAR_3)
{
 ktime_t VAR_4;
 int VAR_5;
 unsigned long VAR_6;
 struct ltc2952_poweroff *VAR_7 = FUNC_4(VAR_3, VAR_2);

 if (VAR_7->kernel_panic)
  return VAR_0;

 VAR_5 = FUNC_0(VAR_7->gpio_watchdog);
 FUNC_1(VAR_7->gpio_watchdog, !VAR_5);

 VAR_4 = FUNC_2(VAR_3);
 VAR_6 = FUNC_3(VAR_3, VAR_4, VAR_7->wde_interval);

 return VAR_1;
}
