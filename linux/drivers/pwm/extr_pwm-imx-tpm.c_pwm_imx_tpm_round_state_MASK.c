
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct pwm_state {int period; int duty_cycle; scalar_t__ enabled; int polarity; } ;
struct pwm_chip {int dummy; } ;
struct imx_tpm_pwm_param {int prescale; int mod; void* val; } ;
struct imx_tpm_pwm_chip {int clk; } ;


 void* FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 struct imx_tpm_pwm_chip* FUNC_4 (struct pwm_chip*) ;

__attribute__((used)) static int FUNC_5(struct pwm_chip *VAR_5,
       struct imx_tpm_pwm_param *VAR_6,
       struct pwm_state *VAR_7,
       const struct pwm_state *VAR_8)
{
 struct imx_tpm_pwm_chip *VAR_9 = FUNC_4(VAR_5);
 u32 VAR_10, VAR_11, VAR_12, VAR_13;
 u64 VAR_14;

 VAR_10 = FUNC_2(VAR_9->clk);
 VAR_14 = (u64)VAR_8->period * VAR_10;
 VAR_13 = FUNC_0(VAR_14, VAR_1);
 if (VAR_13 <= VAR_2)
  VAR_11 = 0;
 else
  VAR_11 = FUNC_3(VAR_13) + 1 - VAR_3;

 if ((!FUNC_1(VAR_4, VAR_11)))
  return -VAR_0;
 VAR_6->prescale = VAR_11;

 VAR_12 = (VAR_13 + ((1 << VAR_11) >> 1)) >> VAR_11;
 VAR_6->mod = VAR_12;


 VAR_14 = (u64)VAR_12 << VAR_11;
 VAR_14 *= VAR_1;
 VAR_7->period = FUNC_0(VAR_14, VAR_10);






 if (!VAR_8->enabled)
  VAR_7->duty_cycle = 0;
 else
  VAR_7->duty_cycle = VAR_8->duty_cycle;

 VAR_14 = (u64)VAR_6->mod * VAR_7->duty_cycle;
 VAR_6->val = FUNC_0(VAR_14, VAR_7->period);

 VAR_7->polarity = VAR_8->polarity;
 VAR_7->enabled = VAR_8->enabled;

 return 0;
}
