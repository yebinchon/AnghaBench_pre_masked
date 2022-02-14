
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_state {scalar_t__ polarity; int enabled; } ;
struct pwm_device {int dummy; } ;
struct pwm_chip {int dummy; } ;
struct meson_pwm_channel {scalar_t__ lo; int hi; scalar_t__ pre_div; } ;
struct meson_pwm {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct meson_pwm*,struct pwm_device*,struct pwm_state const*) ;
 int FUNC_1 (struct meson_pwm*,struct pwm_device*) ;
 int FUNC_2 (struct meson_pwm*,struct pwm_device*) ;
 struct meson_pwm_channel* FUNC_3 (struct pwm_device*) ;
 struct meson_pwm* FUNC_4 (struct pwm_chip*) ;

__attribute__((used)) static int FUNC_5(struct pwm_chip *VAR_2, struct pwm_device *VAR_3,
      const struct pwm_state *VAR_4)
{
 struct meson_pwm_channel *VAR_5 = FUNC_3(VAR_3);
 struct meson_pwm *VAR_6 = FUNC_4(VAR_2);
 int VAR_7 = 0;

 if (!VAR_4)
  return -VAR_0;

 if (!VAR_4->enabled) {
  if (VAR_4->polarity == VAR_1) {
   VAR_5->pre_div = 0;
   VAR_5->hi = ~0;
   VAR_5->lo = 0;

   FUNC_2(VAR_6, VAR_3);
  } else {
   FUNC_1(VAR_6, VAR_3);
  }
 } else {
  VAR_7 = FUNC_0(VAR_6, VAR_3, VAR_4);
  if (VAR_7 < 0)
   return VAR_7;

  FUNC_2(VAR_6, VAR_3);
 }

 return 0;
}
