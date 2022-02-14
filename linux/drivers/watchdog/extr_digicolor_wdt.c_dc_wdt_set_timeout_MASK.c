
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {unsigned int timeout; } ;
struct dc_wdt {int clk; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (struct dc_wdt*,unsigned int) ;
 struct dc_wdt* FUNC_2 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_3(struct watchdog_device *VAR_0, unsigned int VAR_1)
{
 struct dc_wdt *VAR_2 = FUNC_2(VAR_0);

 FUNC_1(VAR_2, VAR_1 * FUNC_0(VAR_2->clk));
 VAR_0->timeout = VAR_1;

 return 0;
}
