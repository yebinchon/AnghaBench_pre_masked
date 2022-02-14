
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct pwm_state {int enabled; int period; int duty_cycle; int polarity; } ;
struct pwm_sifive_ddata {int real_period; scalar_t__ regs; } ;
struct pwm_device {int hwpwm; } ;
struct pwm_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 struct pwm_sifive_ddata* FUNC_0 (struct pwm_chip*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct pwm_chip *VAR_6, struct pwm_device *VAR_7,
     struct pwm_state *VAR_8)
{
 struct pwm_sifive_ddata *VAR_9 = FUNC_0(VAR_6);
 u32 VAR_10, VAR_11;

 VAR_10 = FUNC_1(VAR_9->regs + VAR_4 +
       VAR_7->hwpwm * VAR_5);

 VAR_8->enabled = VAR_10 > 0;

 VAR_11 = FUNC_1(VAR_9->regs + VAR_2);
 if (!(VAR_11 & VAR_3))
  VAR_8->enabled = 0;

 VAR_8->period = VAR_9->real_period;
 VAR_8->duty_cycle =
  (u64)VAR_10 * VAR_9->real_period >> VAR_1;
 VAR_8->polarity = VAR_0;
}
