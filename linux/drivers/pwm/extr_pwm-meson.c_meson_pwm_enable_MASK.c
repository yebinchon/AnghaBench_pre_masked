
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pwm_device {size_t hwpwm; } ;
struct meson_pwm_channel_data {int clk_div_shift; int clk_en_mask; int pwm_en_mask; scalar_t__ reg_offset; } ;
struct meson_pwm_channel {int pre_div; int lo; int hi; } ;
struct meson_pwm {int lock; scalar_t__ base; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct meson_pwm_channel_data* VAR_4 ;
 struct meson_pwm_channel* FUNC_1 (struct pwm_device*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct meson_pwm *VAR_5, struct pwm_device *VAR_6)
{
 struct meson_pwm_channel *VAR_7 = FUNC_1(VAR_6);
 struct meson_pwm_channel_data *VAR_8;
 unsigned long VAR_9;
 u32 VAR_10;

 VAR_8 = &VAR_4[VAR_6->hwpwm];

 FUNC_3(&VAR_5->lock, VAR_9);

 VAR_10 = FUNC_2(VAR_5->base + VAR_3);
 VAR_10 &= ~(VAR_0 << VAR_8->clk_div_shift);
 VAR_10 |= VAR_7->pre_div << VAR_8->clk_div_shift;
 VAR_10 |= VAR_8->clk_en_mask;
 FUNC_5(VAR_10, VAR_5->base + VAR_3);

 VAR_10 = FUNC_0(VAR_1, VAR_7->hi) |
  FUNC_0(VAR_2, VAR_7->lo);
 FUNC_5(VAR_10, VAR_5->base + VAR_8->reg_offset);

 VAR_10 = FUNC_2(VAR_5->base + VAR_3);
 VAR_10 |= VAR_8->pwm_en_mask;
 FUNC_5(VAR_10, VAR_5->base + VAR_3);

 FUNC_4(&VAR_5->lock, VAR_9);
}
