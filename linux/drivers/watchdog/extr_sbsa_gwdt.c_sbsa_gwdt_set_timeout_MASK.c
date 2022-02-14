
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {unsigned int timeout; } ;
struct sbsa_gwdt {unsigned int clk; scalar_t__ control_base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct sbsa_gwdt* FUNC_0 (struct watchdog_device*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct watchdog_device *VAR_2,
     unsigned int VAR_3)
{
 struct sbsa_gwdt *VAR_4 = FUNC_0(VAR_2);

 VAR_2->timeout = VAR_3;

 if (VAR_1)
  FUNC_1(VAR_4->clk * VAR_3,
         VAR_4->control_base + VAR_0);
 else





  FUNC_1(VAR_4->clk / 2 * VAR_3,
         VAR_4->control_base + VAR_0);

 return 0;
}
