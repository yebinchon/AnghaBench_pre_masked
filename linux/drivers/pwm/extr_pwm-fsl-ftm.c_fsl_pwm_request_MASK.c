
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pwm_device {scalar_t__ hwpwm; } ;
struct pwm_chip {int dummy; } ;
struct fsl_pwm_chip {int lock; int regmap; TYPE_1__* soc; int ipg_clk; } ;
struct TYPE_2__ {scalar_t__ has_enable_bits; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 struct fsl_pwm_chip* FUNC_5 (struct pwm_chip*) ;

__attribute__((used)) static int FUNC_6(struct pwm_chip *VAR_1, struct pwm_device *VAR_2)
{
 int VAR_3;
 struct fsl_pwm_chip *VAR_4 = FUNC_5(VAR_1);

 VAR_3 = FUNC_1(VAR_4->ipg_clk);
 if (!VAR_3 && VAR_4->soc->has_enable_bits) {
  FUNC_2(&VAR_4->lock);
  FUNC_4(VAR_4->regmap, VAR_0, FUNC_0(VAR_2->hwpwm + 16),
       FUNC_0(VAR_2->hwpwm + 16));
  FUNC_3(&VAR_4->lock);
 }

 return VAR_3;
}
