
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_pwm {int lock; } ;
struct pwm_state {int dummy; } ;
struct pwm_device {int dummy; } ;
struct pwm_chip {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pwm_chip*,struct pwm_device*,struct pwm_state const*) ;
 struct stm32_pwm* FUNC_3 (struct pwm_chip*) ;

__attribute__((used)) static int FUNC_4(struct pwm_chip *VAR_0, struct pwm_device *VAR_1,
      const struct pwm_state *VAR_2)
{
 struct stm32_pwm *VAR_3 = FUNC_3(VAR_0);
 int VAR_4;


 FUNC_0(&VAR_3->lock);
 VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_2);
 FUNC_1(&VAR_3->lock);

 return VAR_4;
}
