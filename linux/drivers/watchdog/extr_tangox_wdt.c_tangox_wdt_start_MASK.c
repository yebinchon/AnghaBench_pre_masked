
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct watchdog_device {int timeout; } ;
struct tangox_wdt_device {int clk_rate; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 struct tangox_wdt_device* FUNC_0 (struct watchdog_device*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct watchdog_device *VAR_1)
{
 struct tangox_wdt_device *VAR_2 = FUNC_0(VAR_1);
 u32 VAR_3;

 VAR_3 = 1 + VAR_1->timeout * VAR_2->clk_rate;
 FUNC_1(VAR_3, VAR_2->base + VAR_0);

 return 0;
}
