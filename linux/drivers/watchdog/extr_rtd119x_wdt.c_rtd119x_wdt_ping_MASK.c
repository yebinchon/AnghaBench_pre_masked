
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct rtd119x_watchdog_device {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct watchdog_device*) ;
 struct rtd119x_watchdog_device* FUNC_1 (struct watchdog_device*) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct watchdog_device *VAR_2)
{
 struct rtd119x_watchdog_device *VAR_3 = FUNC_1(VAR_2);

 FUNC_2(VAR_1, VAR_3->base + VAR_0);

 return FUNC_0(VAR_2);
}
