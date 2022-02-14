
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_device {int flags; } ;
struct pwm_chip {unsigned int npwm; struct pwm_device* pwms; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct device* FUNC_0 (int *,int *,struct pwm_chip*,int ) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int VAR_1 ;
 int FUNC_3 (struct device*,struct pwm_device*) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int ,int *) ;

void FUNC_5(struct pwm_chip *VAR_3)
{
 struct device *VAR_4;
 unsigned int VAR_5;

 VAR_4 = FUNC_0(&VAR_1, ((void*)0), VAR_3,
       VAR_2);
 if (!VAR_4)
  return;

 for (VAR_5 = 0; VAR_5 < VAR_3->npwm; VAR_5++) {
  struct pwm_device *VAR_6 = &VAR_3->pwms[VAR_5];

  if (FUNC_4(VAR_0, &VAR_6->flags))
   FUNC_3(VAR_4, VAR_6);
 }

 FUNC_2(VAR_4);
 FUNC_1(VAR_4);
}
