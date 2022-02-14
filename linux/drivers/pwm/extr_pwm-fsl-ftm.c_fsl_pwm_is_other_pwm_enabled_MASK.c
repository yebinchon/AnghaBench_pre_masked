
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pwm_device {int hwpwm; } ;
struct fsl_pwm_chip {int regmap; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int*) ;

__attribute__((used)) static bool FUNC_2(struct fsl_pwm_chip *VAR_1,
      struct pwm_device *VAR_2)
{
 u32 VAR_3;

 FUNC_1(VAR_1->regmap, VAR_0, &VAR_3);
 if (~(VAR_3 | FUNC_0(VAR_2->hwpwm)) & 0xFF)
  return 1;
 else
  return 0;
}
