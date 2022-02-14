
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_device {int dummy; } ;
struct pwm_chip {int dummy; } ;
struct lp3943_pwm_map {int dummy; } ;
struct lp3943_pwm {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct lp3943_pwm*,struct lp3943_pwm_map*,int ) ;
 struct lp3943_pwm_map* FUNC_1 (struct pwm_device*) ;
 struct lp3943_pwm* FUNC_2 (struct pwm_chip*) ;

__attribute__((used)) static void FUNC_3(struct pwm_chip *VAR_1, struct pwm_device *VAR_2)
{
 struct lp3943_pwm *VAR_3 = FUNC_2(VAR_1);
 struct lp3943_pwm_map *VAR_4 = FUNC_1(VAR_2);






 FUNC_0(VAR_3, VAR_4, VAR_0);
}
