
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_omap_dmtimer_chip {int mutex; } ;
struct pwm_device {int dummy; } ;
struct pwm_chip {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pwm_omap_dmtimer_chip*) ;
 struct pwm_omap_dmtimer_chip* FUNC_3 (struct pwm_chip*) ;

__attribute__((used)) static int FUNC_4(struct pwm_chip *VAR_0,
       struct pwm_device *VAR_1)
{
 struct pwm_omap_dmtimer_chip *VAR_2 = FUNC_3(VAR_0);

 FUNC_0(&VAR_2->mutex);
 FUNC_2(VAR_2);
 FUNC_1(&VAR_2->mutex);

 return 0;
}
