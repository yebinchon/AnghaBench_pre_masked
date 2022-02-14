
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pwm_state {int enabled; void* duty_cycle; void* period; } ;
struct pwm_device {size_t hwpwm; } ;
struct pwm_chip {int dummy; } ;
struct meson_pwm_channel_data {int pwm_en_mask; int clk_en_mask; int clk_div_shift; scalar_t__ reg_offset; } ;
struct meson_pwm_channel {scalar_t__ lo; scalar_t__ hi; void* pre_div; } ;
struct meson_pwm {scalar_t__ base; struct meson_pwm_channel* channels; } ;


 void* FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 void* FUNC_1 (struct pwm_chip*,struct pwm_device*,scalar_t__) ;
 struct meson_pwm_channel_data* VAR_4 ;
 int FUNC_2 (scalar_t__) ;
 struct meson_pwm* FUNC_3 (struct pwm_chip*) ;

__attribute__((used)) static void FUNC_4(struct pwm_chip *VAR_5, struct pwm_device *VAR_6,
    struct pwm_state *VAR_7)
{
 struct meson_pwm *VAR_8 = FUNC_3(VAR_5);
 struct meson_pwm_channel_data *VAR_9;
 struct meson_pwm_channel *VAR_10;
 u32 VAR_11, VAR_12;

 if (!VAR_7)
  return;

 VAR_10 = &VAR_8->channels[VAR_6->hwpwm];
 VAR_9 = &VAR_4[VAR_6->hwpwm];

 VAR_11 = FUNC_2(VAR_8->base + VAR_3);

 VAR_12 = VAR_9->pwm_en_mask | VAR_9->clk_en_mask;
 VAR_7->enabled = (VAR_11 & VAR_12) == VAR_12;

 VAR_12 = VAR_11 >> VAR_9->clk_div_shift;
 VAR_10->pre_div = FUNC_0(VAR_0, VAR_12);

 VAR_11 = FUNC_2(VAR_8->base + VAR_9->reg_offset);

 VAR_10->lo = FUNC_0(VAR_2, VAR_11);
 VAR_10->hi = FUNC_0(VAR_1, VAR_11);

 if (VAR_10->lo == 0) {
  VAR_7->period = FUNC_1(VAR_5, VAR_6, VAR_10->hi);
  VAR_7->duty_cycle = VAR_7->period;
 } else if (VAR_10->lo >= VAR_10->hi) {
  VAR_7->period = FUNC_1(VAR_5, VAR_6,
          VAR_10->lo + VAR_10->hi);
  VAR_7->duty_cycle = FUNC_1(VAR_5, VAR_6,
       VAR_10->hi);
 } else {
  VAR_7->period = 0;
  VAR_7->duty_cycle = 0;
 }
}
