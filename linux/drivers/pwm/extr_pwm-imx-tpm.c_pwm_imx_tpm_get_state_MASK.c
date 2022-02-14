
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct pwm_state {int enabled; int polarity; int duty_cycle; int period; } ;
struct pwm_device {int hwpwm; } ;
struct pwm_chip {int dummy; } ;
struct imx_tpm_pwm_chip {scalar_t__ base; int clk; int real_period; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 struct imx_tpm_pwm_chip* FUNC_6 (struct pwm_chip*) ;

__attribute__((used)) static void FUNC_7(struct pwm_chip *VAR_7,
      struct pwm_device *VAR_8,
      struct pwm_state *VAR_9)
{
 struct imx_tpm_pwm_chip *VAR_10 = FUNC_6(VAR_7);
 u32 VAR_11, VAR_12, VAR_13;
 u64 VAR_14;


 VAR_9->period = VAR_10->real_period;


 VAR_11 = FUNC_4(VAR_10->clk);
 VAR_12 = FUNC_5(VAR_10->base + VAR_3);
 VAR_13 = FUNC_1(VAR_4, VAR_12);
 VAR_14 = FUNC_5(VAR_10->base + FUNC_3(VAR_8->hwpwm));
 VAR_14 = (VAR_14 << VAR_13) * VAR_0;
 VAR_9->duty_cycle = FUNC_0(VAR_14, VAR_11);


 VAR_12 = FUNC_5(VAR_10->base + FUNC_2(VAR_8->hwpwm));
 if ((VAR_12 & VAR_1) == VAR_2)
  VAR_9->polarity = VAR_5;
 else




  VAR_9->polarity = VAR_6;


 VAR_9->enabled = FUNC_1(VAR_1, VAR_12) ? 1 : 0;
}
