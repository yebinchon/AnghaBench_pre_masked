
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_device {int pwm; } ;
struct pwm_chip {unsigned int npwm; struct pwm_device* pwms; int base; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,unsigned int) ;
 int FUNC_1 (struct pwm_device*) ;
 int VAR_1 ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(struct pwm_chip *VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->npwm; VAR_3++) {
  struct pwm_device *VAR_4 = &VAR_2->pwms[VAR_3];

  FUNC_2(&VAR_1, VAR_4->pwm);
 }

 FUNC_0(VAR_0, VAR_2->base, VAR_2->npwm);

 FUNC_1(VAR_2->pwms);
 VAR_2->pwms = ((void*)0);
}
