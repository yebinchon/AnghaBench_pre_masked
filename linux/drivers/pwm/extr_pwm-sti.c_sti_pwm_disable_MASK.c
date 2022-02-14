
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sti_pwm_chip {int sti_pwm_lock; int cpt_clk; int pwm_clk; int pwm_out_en; scalar_t__ en_count; } ;
struct pwm_device {int dummy; } ;
struct pwm_chip {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 struct sti_pwm_chip* FUNC_4 (struct pwm_chip*) ;

__attribute__((used)) static void FUNC_5(struct pwm_chip *VAR_0, struct pwm_device *VAR_1)
{
 struct sti_pwm_chip *VAR_2 = FUNC_4(VAR_0);

 FUNC_1(&VAR_2->sti_pwm_lock);

 if (--VAR_2->en_count) {
  FUNC_2(&VAR_2->sti_pwm_lock);
  return;
 }

 FUNC_3(VAR_2->pwm_out_en, 0);

 FUNC_0(VAR_2->pwm_clk);
 FUNC_0(VAR_2->cpt_clk);

 FUNC_2(&VAR_2->sti_pwm_lock);
}
