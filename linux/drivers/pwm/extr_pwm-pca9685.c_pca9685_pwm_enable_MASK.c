
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
 unsigned int FUNC_2 (scalar_t__) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ,unsigned int,int ,int) ;
 int FUNC_4 (int ,unsigned int,int ) ;
 struct pca9685* FUNC_5 (struct pwm_chip*) ;

__attribute__((used)) static int FUNC_6(struct pwm_chip *VAR_5, struct pwm_device *VAR_6)
{
 struct pca9685 *VAR_7 = FUNC_5(VAR_5);
 unsigned int VAR_8;





 if (VAR_6->hwpwm >= VAR_4)
  VAR_8 = VAR_3;
 else
  VAR_8 = FUNC_2(VAR_6->hwpwm);

 FUNC_4(VAR_7->regmap, VAR_8, 0);

 if (VAR_6->hwpwm >= VAR_4)
  VAR_8 = VAR_2;
 else
  VAR_8 = FUNC_1(VAR_6->hwpwm);

 FUNC_4(VAR_7->regmap, VAR_8, 0);





 if (VAR_6->hwpwm >= VAR_4)
  VAR_8 = VAR_1;
 else
  VAR_8 = FUNC_0(VAR_6->hwpwm);

 FUNC_3(VAR_7->regmap, VAR_8, VAR_0, 0x0);

 return 0;
}
