
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_device {int dummy; } ;
struct pwm_chip {int dummy; } ;
struct crystalcove_pwm {int regmap; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 struct crystalcove_pwm* FUNC_1 (struct pwm_chip*) ;

__attribute__((used)) static void FUNC_2(struct pwm_chip *VAR_1, struct pwm_device *VAR_2)
{
 struct crystalcove_pwm *VAR_3 = FUNC_1(VAR_1);

 FUNC_0(VAR_3->regmap, VAR_0, 0);
}
