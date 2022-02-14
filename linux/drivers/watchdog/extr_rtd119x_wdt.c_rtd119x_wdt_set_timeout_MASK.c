
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct watchdog_device {int dummy; } ;
struct TYPE_2__ {unsigned int timeout; } ;
struct rtd119x_watchdog_device {TYPE_1__ wdt_dev; scalar_t__ base; int clk; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 struct rtd119x_watchdog_device* FUNC_1 (struct watchdog_device*) ;
 int FUNC_2 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct watchdog_device *VAR_1, unsigned int VAR_2)
{
 struct rtd119x_watchdog_device *VAR_3 = FUNC_1(VAR_1);

 FUNC_2(VAR_2 * FUNC_0(VAR_3->clk), VAR_3->base + VAR_0);

 VAR_3->wdt_dev.timeout = VAR_2;

 return 0;
}
