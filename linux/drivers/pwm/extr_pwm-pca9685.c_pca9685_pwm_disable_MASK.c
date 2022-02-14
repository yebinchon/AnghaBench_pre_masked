
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_device {scalar_t__ hwpwm; } ;
struct pwm_chip {int dummy; } ;
struct pca9685 {int regmap; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (scalar_t__) ;
 unsigned int FUNC_1 (scalar_t__) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,unsigned int,int) ;
 struct pca9685* FUNC_3 (struct pwm_chip*) ;

__attribute__((used)) static void FUNC_4(struct pwm_chip *VAR_4, struct pwm_device *VAR_5)
{
 struct pca9685 *VAR_6 = FUNC_3(VAR_4);
 unsigned int VAR_7;

 if (VAR_5->hwpwm >= VAR_3)
  VAR_7 = VAR_1;
 else
  VAR_7 = FUNC_0(VAR_5->hwpwm);

 FUNC_2(VAR_6->regmap, VAR_7, VAR_0);


 if (VAR_5->hwpwm >= VAR_3)
  VAR_7 = VAR_2;
 else
  VAR_7 = FUNC_1(VAR_5->hwpwm);

 FUNC_2(VAR_6->regmap, VAR_7, 0x0);
}
