
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct TYPE_2__ {unsigned int npwm; int * pwms; } ;
struct lpc32xx_pwm_chip {TYPE_1__ chip; } ;


 struct lpc32xx_pwm_chip* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct lpc32xx_pwm_chip *VAR_1 = FUNC_0(VAR_0);
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->chip.npwm; VAR_2++)
  FUNC_1(&VAR_1->chip.pwms[VAR_2]);

 return FUNC_2(&VAR_1->chip);
}
