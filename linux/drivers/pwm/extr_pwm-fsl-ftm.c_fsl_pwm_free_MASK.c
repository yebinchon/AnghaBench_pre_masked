
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pwm_device {scalar_t__ hwpwm; } ;
struct pwm_chip {int dummy; } ;
struct fsl_pwm_chip {int ipg_clk; int lock; int regmap; TYPE_1__* soc; } ;
struct TYPE_2__ {scalar_t__ has_enable_bits; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 struct fsl_pwm_chip* FUNC_5 (struct pwm_chip*) ;

__attribute__((used)) static void FUNC_6(struct pwm_chip *VAR_1, struct pwm_device *VAR_2)
{
 struct fsl_pwm_chip *VAR_3 = FUNC_5(VAR_1);

 if (VAR_3->soc->has_enable_bits) {
  FUNC_2(&VAR_3->lock);
  FUNC_4(VAR_3->regmap, VAR_0, FUNC_0(VAR_2->hwpwm + 16),
       0);
  FUNC_3(&VAR_3->lock);
 }

 FUNC_1(VAR_3->ipg_clk);
}
