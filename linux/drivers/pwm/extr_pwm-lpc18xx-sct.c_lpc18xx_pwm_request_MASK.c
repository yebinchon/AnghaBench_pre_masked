
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_device {int dummy; } ;
struct pwm_chip {int dummy; } ;
struct lpc18xx_pwm_data {unsigned long duty_event; } ;
struct lpc18xx_pwm_chip {int event_map; int dev; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int ,char*) ;
 unsigned long FUNC_1 (int *,unsigned long) ;
 struct lpc18xx_pwm_data* FUNC_2 (struct pwm_device*) ;
 int FUNC_3 (unsigned long,int *) ;
 struct lpc18xx_pwm_chip* FUNC_4 (struct pwm_chip*) ;

__attribute__((used)) static int FUNC_5(struct pwm_chip *VAR_2, struct pwm_device *VAR_3)
{
 struct lpc18xx_pwm_chip *VAR_4 = FUNC_4(VAR_2);
 struct lpc18xx_pwm_data *VAR_5 = FUNC_2(VAR_3);
 unsigned long VAR_6;

 VAR_6 = FUNC_1(&VAR_4->event_map,
        VAR_1);

 if (VAR_6 >= VAR_1) {
  FUNC_0(VAR_4->dev,
   "maximum number of simultaneous channels reached\n");
  return -VAR_0;
 };

 FUNC_3(VAR_6, &VAR_4->event_map);
 VAR_5->duty_event = VAR_6;

 return 0;
}
