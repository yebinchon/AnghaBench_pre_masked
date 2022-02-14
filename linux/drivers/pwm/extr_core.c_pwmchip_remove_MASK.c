
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_device {int flags; } ;
struct pwm_chip {unsigned int npwm; int list; struct pwm_device* pwms; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct pwm_chip*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct pwm_chip*) ;
 int VAR_3 ;
 int FUNC_6 (struct pwm_chip*) ;
 scalar_t__ FUNC_7 (int ,int *) ;

int FUNC_8(struct pwm_chip *VAR_4)
{
 unsigned int VAR_5;
 int VAR_6 = 0;

 FUNC_6(VAR_4);

 FUNC_3(&VAR_3);

 for (VAR_5 = 0; VAR_5 < VAR_4->npwm; VAR_5++) {
  struct pwm_device *VAR_7 = &VAR_4->pwms[VAR_5];

  if (FUNC_7(VAR_2, &VAR_7->flags)) {
   VAR_6 = -VAR_1;
   goto out;
  }
 }

 FUNC_2(&VAR_4->list);

 if (FUNC_0(VAR_0))
  FUNC_5(VAR_4);

 FUNC_1(VAR_4);

out:
 FUNC_4(&VAR_3);
 return VAR_6;
}
