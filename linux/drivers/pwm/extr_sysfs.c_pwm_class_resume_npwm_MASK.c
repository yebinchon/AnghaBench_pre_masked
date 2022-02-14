
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pwm_state {int enabled; } ;
struct TYPE_2__ {int enabled; } ;
struct pwm_export {TYPE_1__ suspend; } ;
struct pwm_device {int dummy; } ;
struct pwm_chip {struct pwm_device* pwms; } ;
struct device {int dummy; } ;


 struct pwm_chip* FUNC_0 (struct device*) ;
 int FUNC_1 (struct pwm_export*,struct pwm_device*,struct pwm_state*) ;
 struct pwm_export* FUNC_2 (struct device*,struct pwm_device*,struct pwm_state*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, unsigned int VAR_1)
{
 struct pwm_chip *VAR_2 = FUNC_0(VAR_0);
 unsigned int VAR_3;
 int VAR_4 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  struct pwm_device *VAR_5 = &VAR_2->pwms[VAR_3];
  struct pwm_state VAR_6;
  struct pwm_export *VAR_7;

  VAR_7 = FUNC_2(VAR_0, VAR_5, &VAR_6);
  if (!VAR_7)
   continue;

  VAR_6.enabled = VAR_7->suspend.enabled;
  VAR_4 = FUNC_1(VAR_7, VAR_5, &VAR_6);
  if (VAR_4 < 0)
   break;
 }

 return VAR_4;
}
