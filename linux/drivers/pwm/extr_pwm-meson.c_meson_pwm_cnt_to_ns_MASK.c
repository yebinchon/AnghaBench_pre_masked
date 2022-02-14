
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pwm_device {size_t hwpwm; } ;
struct pwm_chip {int dummy; } ;
struct meson_pwm_channel {int pre_div; int clk; } ;
struct meson_pwm {struct meson_pwm_channel* channels; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned long) ;
 struct meson_pwm* FUNC_2 (struct pwm_chip*) ;

__attribute__((used)) static unsigned int FUNC_3(struct pwm_chip *VAR_1,
     struct pwm_device *VAR_2, u32 VAR_3)
{
 struct meson_pwm *VAR_4 = FUNC_2(VAR_1);
 struct meson_pwm_channel *VAR_5;
 unsigned long VAR_6;
 u32 VAR_7;


 VAR_5 = &VAR_4->channels[VAR_2->hwpwm];

 VAR_6 = FUNC_0(VAR_5->clk);
 if (VAR_6 == 0)
  return 0;

 VAR_7 = FUNC_1(VAR_0, VAR_6);

 return VAR_3 * VAR_7 * (VAR_5->pre_div + 1);
}
