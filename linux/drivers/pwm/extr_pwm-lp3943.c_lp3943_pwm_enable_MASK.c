
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pwm_device {scalar_t__ hwpwm; } ;
struct pwm_chip {int dummy; } ;
struct lp3943_pwm_map {int dummy; } ;
struct lp3943_pwm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lp3943_pwm*,struct lp3943_pwm_map*,int ) ;
 struct lp3943_pwm_map* FUNC_1 (struct pwm_device*) ;
 struct lp3943_pwm* FUNC_2 (struct pwm_chip*) ;

__attribute__((used)) static int FUNC_3(struct pwm_chip *VAR_2, struct pwm_device *VAR_3)
{
 struct lp3943_pwm *VAR_4 = FUNC_2(VAR_2);
 struct lp3943_pwm_map *VAR_5 = FUNC_1(VAR_3);
 u8 VAR_6;

 if (VAR_3->hwpwm == 0)
  VAR_6 = VAR_0;
 else
  VAR_6 = VAR_1;






 return FUNC_0(VAR_4, VAR_5, VAR_6);
}
