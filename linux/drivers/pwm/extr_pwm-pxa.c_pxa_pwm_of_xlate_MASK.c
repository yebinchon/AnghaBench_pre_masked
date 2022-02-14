
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int period; } ;
struct pwm_device {TYPE_1__ args; } ;
struct pwm_chip {int dummy; } ;
struct of_phandle_args {int * args; } ;


 scalar_t__ FUNC_0 (struct pwm_device*) ;
 struct pwm_device* FUNC_1 (struct pwm_chip*,int ,int *) ;

__attribute__((used)) static struct pwm_device *
FUNC_2(struct pwm_chip *VAR_0, const struct of_phandle_args *VAR_1)
{
 struct pwm_device *VAR_2;

 VAR_2 = FUNC_1(VAR_0, 0, ((void*)0));
 if (FUNC_0(VAR_2))
  return VAR_2;

 VAR_2->args.period = VAR_1->args[0];

 return VAR_2;
}
