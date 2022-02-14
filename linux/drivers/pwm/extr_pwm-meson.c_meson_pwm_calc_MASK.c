
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u64 ;
struct pwm_state {unsigned int duty_cycle; unsigned int period; scalar_t__ polarity; } ;
struct pwm_device {int dummy; } ;
struct meson_pwm_channel {unsigned int pre_div; unsigned int hi; unsigned int lo; int clk; } ;
struct TYPE_2__ {int dev; } ;
struct meson_pwm {TYPE_1__ chip; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,unsigned int,...) ;
 int FUNC_2 (int ,char*) ;
 unsigned int FUNC_3 (unsigned long,int) ;
 struct meson_pwm_channel* FUNC_4 (struct pwm_device*) ;

__attribute__((used)) static int FUNC_5(struct meson_pwm *VAR_4, struct pwm_device *VAR_5,
     const struct pwm_state *VAR_6)
{
 struct meson_pwm_channel *VAR_7 = FUNC_4(VAR_5);
 unsigned int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 unsigned long VAR_13 = -1;

 VAR_8 = VAR_6->duty_cycle;
 VAR_9 = VAR_6->period;

 if (VAR_6->polarity == VAR_3)
  VAR_8 = VAR_9 - VAR_8;

 VAR_13 = FUNC_0(VAR_7->clk);
 if (VAR_13 == 0) {
  FUNC_2(VAR_4->chip.dev, "invalid source clock frequency\n");
  return -VAR_0;
 }

 FUNC_1(VAR_4->chip.dev, "fin_freq: %lu Hz\n", VAR_13);

 VAR_10 = FUNC_3(VAR_13 * (u64)VAR_9, VAR_2 * 0xffffLL);
 if (VAR_10 > VAR_1) {
  FUNC_2(VAR_4->chip.dev, "unable to get period pre_div\n");
  return -VAR_0;
 }

 VAR_11 = FUNC_3(VAR_13 * (u64)VAR_9, VAR_2 * (VAR_10 + 1));
 if (VAR_11 > 0xffff) {
  FUNC_2(VAR_4->chip.dev, "unable to get period cnt\n");
  return -VAR_0;
 }

 FUNC_1(VAR_4->chip.dev, "period=%u pre_div=%u cnt=%u\n", VAR_9,
  VAR_10, VAR_11);

 if (VAR_8 == VAR_9) {
  VAR_7->pre_div = VAR_10;
  VAR_7->hi = VAR_11;
  VAR_7->lo = 0;
 } else if (VAR_8 == 0) {
  VAR_7->pre_div = VAR_10;
  VAR_7->hi = 0;
  VAR_7->lo = VAR_11;
 } else {

  VAR_12 = FUNC_3(VAR_13 * (u64)VAR_8,
         VAR_2 * (VAR_10 + 1));
  if (VAR_12 > 0xffff) {
   FUNC_2(VAR_4->chip.dev, "unable to get duty cycle\n");
   return -VAR_0;
  }

  FUNC_1(VAR_4->chip.dev, "duty=%u pre_div=%u duty_cnt=%u\n",
   VAR_8, VAR_10, VAR_12);

  VAR_7->pre_div = VAR_10;
  VAR_7->hi = VAR_12;
  VAR_7->lo = VAR_11 - VAR_12;
 }

 return 0;
}
