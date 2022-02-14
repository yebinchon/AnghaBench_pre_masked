
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * pwms; } ;
struct sti_pwm_chip {TYPE_2__ chip; int cpt_clk; int pwm_clk; TYPE_1__* cdata; } ;
struct platform_device {int dummy; } ;
struct TYPE_3__ {unsigned int pwm_num_devs; } ;


 int FUNC_0 (int ) ;
 struct sti_pwm_chip* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct sti_pwm_chip *VAR_1 = FUNC_1(VAR_0);
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->cdata->pwm_num_devs; VAR_2++)
  FUNC_2(&VAR_1->chip.pwms[VAR_2]);

 FUNC_0(VAR_1->pwm_clk);
 FUNC_0(VAR_1->cpt_clk);

 return FUNC_3(&VAR_1->chip);
}
