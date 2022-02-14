
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pwms; } ;
struct rockchip_pwm_chip {TYPE_1__ chip; int clk; int pclk; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct rockchip_pwm_chip* FUNC_2 (struct platform_device*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct rockchip_pwm_chip *VAR_1 = FUNC_2(VAR_0);
 if (FUNC_3(VAR_1->chip.pwms))
  FUNC_0(VAR_1->clk);

 FUNC_1(VAR_1->pclk);
 FUNC_1(VAR_1->clk);

 return FUNC_4(&VAR_1->chip);
}
