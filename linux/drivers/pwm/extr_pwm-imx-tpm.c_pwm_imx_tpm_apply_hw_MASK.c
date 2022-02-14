
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct pwm_state {int period; scalar_t__ enabled; scalar_t__ polarity; scalar_t__ duty_cycle; } ;
struct pwm_device {int hwpwm; } ;
struct pwm_chip {int dummy; } ;
struct imx_tpm_pwm_param {scalar_t__ prescale; scalar_t__ mod; scalar_t__ val; } ;
struct imx_tpm_pwm_chip {int real_period; int user_count; int enable_count; scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_4 () ;
 unsigned long VAR_14 ;
 unsigned long FUNC_5 (int) ;
 int FUNC_6 (struct pwm_chip*,struct pwm_device*,struct pwm_state*) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (unsigned long,unsigned long) ;
 struct imx_tpm_pwm_chip* FUNC_9 (struct pwm_chip*) ;
 int FUNC_10 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_11(struct pwm_chip *VAR_15,
    struct imx_tpm_pwm_param *VAR_16,
    struct pwm_state *VAR_17,
    struct pwm_device *VAR_18)
{
 struct imx_tpm_pwm_chip *VAR_19 = FUNC_9(VAR_15);
 bool VAR_20 = 0;
 bool VAR_21 = 0;
 u32 VAR_22, VAR_23, VAR_24;
 unsigned long VAR_25;
 struct pwm_state VAR_26;

 if (VAR_17->period != VAR_19->real_period) {






  if (VAR_19->user_count > 1)
   return -VAR_0;

  VAR_22 = FUNC_7(VAR_19->base + VAR_9);
  VAR_23 = FUNC_0(VAR_10, VAR_22);
  VAR_24 = FUNC_0(VAR_12, VAR_22);
  if (VAR_23 && VAR_24 != VAR_16->prescale)
   return -VAR_0;


  VAR_22 &= ~VAR_12;
  VAR_22 |= FUNC_1(VAR_12, VAR_16->prescale);
  FUNC_10(VAR_22, VAR_19->base + VAR_9);
  FUNC_10(VAR_16->mod, VAR_19->base + VAR_8);
  VAR_19->real_period = VAR_17->period;
  VAR_20 = 1;
 }

 FUNC_6(VAR_15, VAR_18, &VAR_26);


 if (VAR_26.enabled && VAR_26.polarity != VAR_17->polarity)
  return -VAR_0;

 if (VAR_17->duty_cycle != VAR_26.duty_cycle) {
  FUNC_10(VAR_16->val, VAR_19->base + FUNC_3(VAR_18->hwpwm));
  VAR_21 = 1;
 }


 if (VAR_20 || VAR_21) {
  VAR_25 = VAR_14 + FUNC_5(VAR_19->real_period /
           VAR_2 + 1);
  while (FUNC_7(VAR_19->base + VAR_8) != VAR_16->mod
         || FUNC_7(VAR_19->base + FUNC_3(VAR_18->hwpwm))
         != VAR_16->val) {
   if (FUNC_8(VAR_14, VAR_25))
    return -VAR_1;
   FUNC_4();
  }
 }







 VAR_22 = FUNC_7(VAR_19->base + FUNC_2(VAR_18->hwpwm));
 VAR_22 &= ~(VAR_3 | VAR_6 |
   VAR_7);
 if (VAR_17->enabled) {







  VAR_22 |= VAR_7;
  VAR_22 |= (VAR_17->polarity == VAR_13) ?
   VAR_5 :
   VAR_4;
 }
 FUNC_10(VAR_22, VAR_19->base + FUNC_2(VAR_18->hwpwm));


 if (VAR_17->enabled != VAR_26.enabled) {
  VAR_22 = FUNC_7(VAR_19->base + VAR_9);
  if (VAR_17->enabled) {
   if (++VAR_19->enable_count == 1)
    VAR_22 |= VAR_11;
  } else {
   if (--VAR_19->enable_count == 0)
    VAR_22 &= ~VAR_10;
  }
  FUNC_10(VAR_22, VAR_19->base + VAR_9);
 }

 return 0;
}
