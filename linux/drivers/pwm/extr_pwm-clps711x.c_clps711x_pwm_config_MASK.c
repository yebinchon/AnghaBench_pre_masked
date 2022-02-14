
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int period; } ;
struct pwm_device {int hwpwm; TYPE_1__ args; } ;
struct pwm_chip {int dummy; } ;
struct clps711x_chip {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct pwm_device*,int) ;
 int FUNC_1 (struct clps711x_chip*,int ,unsigned int) ;
 struct clps711x_chip* FUNC_2 (struct pwm_chip*) ;

__attribute__((used)) static int FUNC_3(struct pwm_chip *VAR_1, struct pwm_device *VAR_2,
          int VAR_3, int VAR_4)
{
 struct clps711x_chip *VAR_5 = FUNC_2(VAR_1);
 unsigned int VAR_6;

 if (VAR_4 != VAR_2->args.period)
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_2, VAR_3);
 FUNC_1(VAR_5, VAR_2->hwpwm, VAR_6);

 return 0;
}
