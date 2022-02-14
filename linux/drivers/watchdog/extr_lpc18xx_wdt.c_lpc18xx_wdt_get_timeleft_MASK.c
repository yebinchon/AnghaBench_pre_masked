
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int dummy; } ;
struct lpc18xx_wdt_dev {unsigned int clk_rate; scalar_t__ base; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_0 (scalar_t__) ;
 struct lpc18xx_wdt_dev* FUNC_1 (struct watchdog_device*) ;

__attribute__((used)) static unsigned int FUNC_2(struct watchdog_device *VAR_2)
{
 struct lpc18xx_wdt_dev *VAR_3 = FUNC_1(VAR_2);
 unsigned int VAR_4;

 VAR_4 = FUNC_0(VAR_3->base + VAR_1);
 return (VAR_4 * VAR_0) / VAR_3->clk_rate;
}
