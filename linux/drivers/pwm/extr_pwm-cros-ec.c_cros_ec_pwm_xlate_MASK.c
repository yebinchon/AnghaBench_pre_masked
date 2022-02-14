
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int period; } ;
struct pwm_device {TYPE_1__ args; } ;
struct pwm_chip {scalar_t__ npwm; } ;
struct of_phandle_args {scalar_t__* args; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pwm_device* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct pwm_device*) ;
 struct pwm_device* FUNC_2 (struct pwm_chip*,scalar_t__,int *) ;

__attribute__((used)) static struct pwm_device *
FUNC_3(struct pwm_chip *VAR_2, const struct of_phandle_args *VAR_3)
{
 struct pwm_device *VAR_4;

 if (VAR_3->args[0] >= VAR_2->npwm)
  return FUNC_0(-VAR_1);

 VAR_4 = FUNC_2(VAR_2, VAR_3->args[0], ((void*)0));
 if (FUNC_1(VAR_4))
  return VAR_4;


 VAR_4->args.period = VAR_0;

 return VAR_4;
}
