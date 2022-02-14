
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct pwm_state {unsigned long long period; unsigned long long duty_cycle; scalar_t__ polarity; scalar_t__ enabled; } ;
struct pwm_imx27_chip {scalar_t__ mmio_base; int clk_per; } ;
struct pwm_device {int dummy; } ;
struct pwm_chip {int dummy; } ;


 unsigned long FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned long FUNC_1 (unsigned long) ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 unsigned long long FUNC_2 (int ) ;
 int FUNC_3 (unsigned long long,int) ;
 int FUNC_4 (struct pwm_device*,struct pwm_state*) ;
 int FUNC_5 (struct pwm_chip*) ;
 int FUNC_6 (struct pwm_chip*) ;
 int FUNC_7 (struct pwm_chip*) ;
 int FUNC_8 (struct pwm_chip*,struct pwm_device*) ;
 struct pwm_imx27_chip* FUNC_9 (struct pwm_chip*) ;
 int FUNC_10 (unsigned long,scalar_t__) ;

__attribute__((used)) static int FUNC_11(struct pwm_chip *VAR_13, struct pwm_device *VAR_14,
      const struct pwm_state *VAR_15)
{
 unsigned long VAR_16, VAR_17, VAR_18;
 struct pwm_imx27_chip *VAR_19 = FUNC_9(VAR_13);
 struct pwm_state VAR_20;
 unsigned long long VAR_21;
 int VAR_22;
 u32 VAR_23;

 FUNC_4(VAR_14, &VAR_20);

 if (VAR_15->enabled) {
  VAR_21 = FUNC_2(VAR_19->clk_per);
  VAR_21 *= VAR_15->period;

  FUNC_3(VAR_21, 1000000000);
  VAR_16 = VAR_21;

  VAR_18 = VAR_16 / 0x10000 + 1;

  VAR_16 /= VAR_18;
  VAR_21 = (unsigned long long)VAR_16 * VAR_15->duty_cycle;
  FUNC_3(VAR_21, VAR_15->period);
  VAR_17 = VAR_21;





  if (VAR_16 > 2)
   VAR_16 -= 2;
  else
   VAR_16 = 0;






  if (VAR_20.enabled) {
   FUNC_8(VAR_13, VAR_14);
  } else {
   VAR_22 = FUNC_6(VAR_13);
   if (VAR_22)
    return VAR_22;

   FUNC_7(VAR_13);
  }

  FUNC_10(VAR_17, VAR_19->mmio_base + VAR_11);
  FUNC_10(VAR_16, VAR_19->mmio_base + VAR_10);

  VAR_23 = FUNC_1(VAR_18) |
       VAR_8 | VAR_4 | VAR_9 |
       FUNC_0(VAR_1, VAR_2) |
       VAR_3 | VAR_5;

  if (VAR_15->polarity == VAR_12)
   VAR_23 |= FUNC_0(VAR_6,
     VAR_7);

  FUNC_10(VAR_23, VAR_19->mmio_base + VAR_0);
 } else if (VAR_20.enabled) {
  FUNC_10(0, VAR_19->mmio_base + VAR_0);

  FUNC_5(VAR_13);
 }

 return 0;
}
