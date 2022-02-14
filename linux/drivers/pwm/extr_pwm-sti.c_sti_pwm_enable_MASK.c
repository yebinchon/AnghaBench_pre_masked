
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sti_pwm_chip {int sti_pwm_lock; int en_count; int pwm_out_en; int cpt_clk; int pwm_clk; struct device* dev; } ;
struct pwm_device {int hwpwm; } ;
struct pwm_chip {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int) ;
 struct sti_pwm_chip* FUNC_5 (struct pwm_chip*) ;

__attribute__((used)) static int FUNC_6(struct pwm_chip *VAR_0, struct pwm_device *VAR_1)
{
 struct sti_pwm_chip *VAR_2 = FUNC_5(VAR_0);
 struct device *VAR_3 = VAR_2->dev;
 int VAR_4 = 0;





 FUNC_2(&VAR_2->sti_pwm_lock);

 if (!VAR_2->en_count) {
  VAR_4 = FUNC_0(VAR_2->pwm_clk);
  if (VAR_4)
   goto out;

  VAR_4 = FUNC_0(VAR_2->cpt_clk);
  if (VAR_4)
   goto out;

  VAR_4 = FUNC_4(VAR_2->pwm_out_en, 1);
  if (VAR_4) {
   FUNC_1(VAR_3, "failed to enable PWM device %u: %d\n",
    VAR_1->hwpwm, VAR_4);
   goto out;
  }
 }

 VAR_2->en_count++;

out:
 FUNC_3(&VAR_2->sti_pwm_lock);
 return VAR_4;
}
