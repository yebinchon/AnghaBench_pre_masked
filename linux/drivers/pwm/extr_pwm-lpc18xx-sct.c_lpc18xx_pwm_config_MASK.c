
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_device {int hwpwm; } ;
struct pwm_chip {int npwm; int * pwms; int dev; } ;
struct lpc18xx_pwm_chip {int min_period_ns; int max_period_ns; int period_ns; int period_lock; int event_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct pwm_chip*,struct pwm_device*,int) ;
 int FUNC_3 (struct pwm_chip*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 struct lpc18xx_pwm_chip* FUNC_7 (struct pwm_chip*) ;

__attribute__((used)) static int FUNC_8(struct pwm_chip *VAR_3, struct pwm_device *VAR_4,
         int VAR_5, int VAR_6)
{
 struct lpc18xx_pwm_chip *VAR_7 = FUNC_7(VAR_3);
 int VAR_8, VAR_9;

 if (VAR_6 < VAR_7->min_period_ns ||
     VAR_6 > VAR_7->max_period_ns) {
  FUNC_1(VAR_3->dev, "period %d not in range\n", VAR_6);
  return -VAR_1;
 }

 FUNC_4(&VAR_7->period_lock);

 VAR_8 = FUNC_0(&VAR_7->event_map,
      VAR_2);






 if (VAR_8 > 2 && VAR_7->period_ns != VAR_6 &&
     VAR_7->period_ns) {
  FUNC_1(VAR_3->dev, "conflicting period requested for PWM %u\n",
   VAR_4->hwpwm);
  FUNC_5(&VAR_7->period_lock);
  return -VAR_0;
 }

 if ((VAR_8 <= 2 && VAR_7->period_ns != VAR_6) ||
     !VAR_7->period_ns) {
  VAR_7->period_ns = VAR_6;
  for (VAR_9 = 0; VAR_9 < VAR_3->npwm; VAR_9++)
   FUNC_6(&VAR_3->pwms[VAR_9], VAR_6);
  FUNC_3(VAR_3, VAR_6);
 }

 FUNC_5(&VAR_7->period_lock);

 FUNC_2(VAR_3, VAR_4, VAR_5);

 return 0;
}
