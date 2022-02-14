
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_device {int dummy; } ;
struct pwm_chip {unsigned int npwm; struct pwm_device* pwms; } ;


 int VAR_0 ;
 struct pwm_device* FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pwm_device*,char const*) ;
 int VAR_1 ;

struct pwm_device *FUNC_4(struct pwm_chip *VAR_2,
      unsigned int VAR_3,
      const char *VAR_4)
{
 struct pwm_device *VAR_5;
 int VAR_6;

 if (!VAR_2 || VAR_3 >= VAR_2->npwm)
  return FUNC_0(-VAR_0);

 FUNC_1(&VAR_1);
 VAR_5 = &VAR_2->pwms[VAR_3];

 VAR_6 = FUNC_3(VAR_5, VAR_4);
 if (VAR_6 < 0)
  VAR_5 = FUNC_0(VAR_6);

 FUNC_2(&VAR_1);
 return VAR_5;
}
