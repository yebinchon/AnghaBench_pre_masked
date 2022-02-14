
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rockchip_pwm_chip {int pclk; TYPE_1__* data; } ;
struct pwm_state {int enabled; scalar_t__ polarity; } ;
struct pwm_device {int dummy; } ;
struct pwm_chip {int dummy; } ;
struct TYPE_2__ {int supports_lock; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct pwm_device*,struct pwm_state*) ;
 int FUNC_3 (struct pwm_chip*,struct pwm_device*,struct pwm_state const*) ;
 int FUNC_4 (struct pwm_chip*,struct pwm_device*,int) ;
 struct rockchip_pwm_chip* FUNC_5 (struct pwm_chip*) ;

__attribute__((used)) static int FUNC_6(struct pwm_chip *VAR_0, struct pwm_device *VAR_1,
         const struct pwm_state *VAR_2)
{
 struct rockchip_pwm_chip *VAR_3 = FUNC_5(VAR_0);
 struct pwm_state VAR_4;
 bool VAR_5;
 int VAR_6 = 0;

 VAR_6 = FUNC_1(VAR_3->pclk);
 if (VAR_6)
  return VAR_6;

 FUNC_2(VAR_1, &VAR_4);
 VAR_5 = VAR_4.enabled;

 if (VAR_2->polarity != VAR_4.polarity && VAR_5 &&
     !VAR_3->data->supports_lock) {
  VAR_6 = FUNC_4(VAR_0, VAR_1, 0);
  if (VAR_6)
   goto out;
  VAR_5 = 0;
 }

 FUNC_3(VAR_0, VAR_1, VAR_2);
 if (VAR_2->enabled != VAR_5) {
  VAR_6 = FUNC_4(VAR_0, VAR_1, VAR_2->enabled);
  if (VAR_6)
   goto out;
 }

out:
 FUNC_0(VAR_3->pclk);

 return VAR_6;
}
