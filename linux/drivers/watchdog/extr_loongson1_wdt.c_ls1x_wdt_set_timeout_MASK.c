
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int max_hw_heartbeat_ms; unsigned int timeout; } ;
struct ls1x_wdt_drvdata {unsigned int clk_rate; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 struct ls1x_wdt_drvdata* FUNC_1 (struct watchdog_device*) ;
 int FUNC_2 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct watchdog_device *VAR_1,
    unsigned int VAR_2)
{
 struct ls1x_wdt_drvdata *VAR_3 = FUNC_1(VAR_1);
 unsigned int VAR_4 = VAR_1->max_hw_heartbeat_ms / 1000;
 unsigned int VAR_5;

 VAR_1->timeout = VAR_2;

 VAR_5 = VAR_3->clk_rate * FUNC_0(VAR_2, VAR_4);
 FUNC_2(VAR_5, VAR_3->base + VAR_0);

 return 0;
}
