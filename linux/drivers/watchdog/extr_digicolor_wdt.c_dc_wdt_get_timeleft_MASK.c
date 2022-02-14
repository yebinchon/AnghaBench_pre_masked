
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;
struct watchdog_device {int dummy; } ;
struct dc_wdt {int clk; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (scalar_t__) ;
 struct dc_wdt* FUNC_2 (struct watchdog_device*) ;

__attribute__((used)) static unsigned int FUNC_3(struct watchdog_device *VAR_1)
{
 struct dc_wdt *VAR_2 = FUNC_2(VAR_1);
 uint32_t VAR_3 = FUNC_1(VAR_2->base + VAR_0);

 return VAR_3 / FUNC_0(VAR_2->clk);
}
