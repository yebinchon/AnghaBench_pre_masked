
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_device {int hwpwm; } ;
struct pwm_chip {int dummy; } ;
struct clps711x_chip {int dummy; } ;


 unsigned int FUNC_0 (struct pwm_device*,int ) ;
 int FUNC_1 (struct clps711x_chip*,int ,unsigned int) ;
 int FUNC_2 (struct pwm_device*) ;
 struct clps711x_chip* FUNC_3 (struct pwm_chip*) ;

__attribute__((used)) static int FUNC_4(struct pwm_chip *VAR_0, struct pwm_device *VAR_1)
{
 struct clps711x_chip *VAR_2 = FUNC_3(VAR_0);
 unsigned int VAR_3;

 VAR_3 = FUNC_0(VAR_1, FUNC_2(VAR_1));
 FUNC_1(VAR_2, VAR_1->hwpwm, VAR_3);

 return 0;
}
