
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct watchdog_core_data {struct watchdog_device* wdd; } ;


 scalar_t__ FUNC_0 (struct watchdog_device*) ;
 scalar_t__ FUNC_1 (struct watchdog_device*) ;
 int FUNC_2 (struct watchdog_core_data*) ;

__attribute__((used)) static bool FUNC_3(struct watchdog_core_data *VAR_0)
{
 struct watchdog_device *VAR_1 = VAR_0->wdd;

 if (!VAR_1)
  return 0;

 if (FUNC_0(VAR_1))
  return 1;

 return FUNC_1(VAR_1) && !FUNC_2(VAR_0);
}
