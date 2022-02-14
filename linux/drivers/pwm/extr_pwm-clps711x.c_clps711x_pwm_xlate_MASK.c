
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_device {int dummy; } ;
struct pwm_chip {scalar_t__ npwm; } ;
struct of_phandle_args {scalar_t__* args; } ;


 int VAR_0 ;
 struct pwm_device* FUNC_0 (int ) ;
 struct pwm_device* FUNC_1 (struct pwm_chip*,scalar_t__,int *) ;

__attribute__((used)) static struct pwm_device *FUNC_2(struct pwm_chip *VAR_1,
          const struct of_phandle_args *VAR_2)
{
 if (VAR_2->args[0] >= VAR_1->npwm)
  return FUNC_0(-VAR_0);

 return FUNC_1(VAR_1, VAR_2->args[0], ((void*)0));
}
