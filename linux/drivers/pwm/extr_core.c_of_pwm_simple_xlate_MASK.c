
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ period; } ;
struct pwm_device {TYPE_1__ args; } ;
struct pwm_chip {int of_pwm_n_cells; scalar_t__ npwm; } ;
struct of_phandle_args {int args_count; scalar_t__* args; } ;


 int VAR_0 ;
 struct pwm_device* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct pwm_device*) ;
 struct pwm_device* FUNC_2 (struct pwm_chip*,scalar_t__,int *) ;

__attribute__((used)) static struct pwm_device *
FUNC_3(struct pwm_chip *VAR_1, const struct of_phandle_args *VAR_2)
{
 struct pwm_device *VAR_3;


 if (VAR_1->of_pwm_n_cells < 2)
  return FUNC_0(-VAR_0);


 if (VAR_2->args_count != VAR_1->of_pwm_n_cells)
  return FUNC_0(-VAR_0);

 if (VAR_2->args[0] >= VAR_1->npwm)
  return FUNC_0(-VAR_0);

 VAR_3 = FUNC_2(VAR_1, VAR_2->args[0], ((void*)0));
 if (FUNC_1(VAR_3))
  return VAR_3;

 VAR_3->args.period = VAR_2->args[1];

 return VAR_3;
}
