
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int period; int polarity; } ;
struct pwm_device {TYPE_1__ args; } ;
struct pwm_chip {int of_pwm_n_cells; int npwm; } ;
struct of_phandle_args {int args_count; int* args; } ;


 int VAR_0 ;
 struct pwm_device* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct pwm_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct pwm_device* FUNC_2 (struct pwm_chip*,int,int *) ;

struct pwm_device *
FUNC_3(struct pwm_chip *VAR_4, const struct of_phandle_args *VAR_5)
{
 struct pwm_device *VAR_6;


 if (VAR_4->of_pwm_n_cells < 3)
  return FUNC_0(-VAR_0);


 if (VAR_5->args_count < 2)
  return FUNC_0(-VAR_0);

 if (VAR_5->args[0] >= VAR_4->npwm)
  return FUNC_0(-VAR_0);

 VAR_6 = FUNC_2(VAR_4, VAR_5->args[0], ((void*)0));
 if (FUNC_1(VAR_6))
  return VAR_6;

 VAR_6->args.period = VAR_5->args[1];
 VAR_6->args.polarity = VAR_3;

 if (VAR_5->args_count > 2 && VAR_5->args[2] & VAR_2)
  VAR_6->args.polarity = VAR_1;

 return VAR_6;
}
