
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct stm32_pwm_lp {int regmap; int clk; } ;
struct pwm_state {int enabled; void* duty_cycle; void* period; void* polarity; } ;
struct pwm_device {int dummy; } ;
struct pwm_chip {int dummy; } ;


 void* FUNC_0 (int,unsigned long) ;
 void* FUNC_1 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 unsigned long FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int*) ;
 struct stm32_pwm_lp* FUNC_5 (struct pwm_chip*) ;

__attribute__((used)) static void FUNC_6(struct pwm_chip *VAR_8,
       struct pwm_device *VAR_9,
       struct pwm_state *VAR_10)
{
 struct stm32_pwm_lp *VAR_11 = FUNC_5(VAR_8);
 unsigned long VAR_12 = FUNC_3(VAR_11->clk);
 u32 VAR_13, VAR_14, VAR_15;
 u64 VAR_16;

 FUNC_4(VAR_11->regmap, VAR_4, &VAR_13);
 VAR_10->enabled = !!FUNC_1(VAR_5, VAR_13);

 if (VAR_10->enabled)
  FUNC_2(VAR_11->clk);

 FUNC_4(VAR_11->regmap, VAR_2, &VAR_13);
 VAR_14 = FUNC_1(VAR_6, VAR_13);
 VAR_10->polarity = FUNC_1(VAR_7, VAR_13);

 FUNC_4(VAR_11->regmap, VAR_1, &VAR_15);
 VAR_16 = VAR_15 + 1;
 VAR_16 = (VAR_16 << VAR_14) * VAR_0;
 VAR_10->period = FUNC_0(VAR_16, VAR_12);

 FUNC_4(VAR_11->regmap, VAR_3, &VAR_13);
 VAR_16 = VAR_15 - VAR_13;
 VAR_16 = (VAR_16 << VAR_14) * VAR_0;
 VAR_10->duty_cycle = FUNC_0(VAR_16, VAR_12);
}
