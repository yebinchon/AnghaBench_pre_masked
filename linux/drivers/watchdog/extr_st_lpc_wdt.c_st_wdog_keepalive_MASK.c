
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int timeout; } ;
struct st_wdog {int dummy; } ;


 int FUNC_0 (struct st_wdog*,int ) ;
 struct st_wdog* FUNC_1 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_2(struct watchdog_device *VAR_0)
{
 struct st_wdog *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1, VAR_0->timeout);

 return 0;
}
