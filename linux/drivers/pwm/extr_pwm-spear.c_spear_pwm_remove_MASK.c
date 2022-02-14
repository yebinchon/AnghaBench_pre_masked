
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * pwms; } ;
struct spear_pwm_chip {TYPE_1__ chip; int clk; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct spear_pwm_chip* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_1)
{
 struct spear_pwm_chip *VAR_2 = FUNC_1(VAR_1);
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_2(&VAR_2->chip.pwms[VAR_3]);


 FUNC_0(VAR_2->clk);
 return FUNC_3(&VAR_2->chip);
}
