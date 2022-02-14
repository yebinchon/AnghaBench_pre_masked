
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct atmel_tcb_pwm_chip {TYPE_1__* tc; int chip; } ;
struct TYPE_2__ {int slow_clk; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 struct atmel_tcb_pwm_chip* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct atmel_tcb_pwm_chip *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;

 FUNC_1(VAR_1->tc->slow_clk);

 VAR_2 = FUNC_3(&VAR_1->chip);
 if (VAR_2 < 0)
  return VAR_2;

 FUNC_0(VAR_1->tc);

 return 0;
}
