
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_device {int hwpwm; } ;
struct pwm_chip {int dummy; } ;
struct lp3943_pwm_map {int dummy; } ;
struct lp3943_pwm {int dummy; } ;


 scalar_t__ FUNC_0 (struct lp3943_pwm_map*) ;
 int FUNC_1 (struct lp3943_pwm_map*) ;
 struct lp3943_pwm_map* FUNC_2 (struct lp3943_pwm*,int ) ;
 int FUNC_3 (struct pwm_device*,struct lp3943_pwm_map*) ;
 struct lp3943_pwm* FUNC_4 (struct pwm_chip*) ;

__attribute__((used)) static int FUNC_5(struct pwm_chip *VAR_0, struct pwm_device *VAR_1)
{
 struct lp3943_pwm *VAR_2 = FUNC_4(VAR_0);
 struct lp3943_pwm_map *VAR_3;

 VAR_3 = FUNC_2(VAR_2, VAR_1->hwpwm);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 return FUNC_3(VAR_1, VAR_3);
}
