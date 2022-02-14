
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct pwm_state {int enabled; void* duty_cycle; void* period; int polarity; } ;
struct pwm_device {int hwpwm; } ;
struct pwm_chip {int dummy; } ;
struct iproc_pwmc {scalar_t__ base; int clk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int ) ;
 void* FUNC_7 (int,int) ;
 int FUNC_8 (scalar_t__) ;
 struct iproc_pwmc* FUNC_9 (struct pwm_chip*) ;

__attribute__((used)) static void FUNC_10(struct pwm_chip *VAR_7, struct pwm_device *VAR_8,
     struct pwm_state *VAR_9)
{
 struct iproc_pwmc *VAR_10 = FUNC_9(VAR_7);
 u64 VAR_11, VAR_12, VAR_13;
 u32 VAR_14, VAR_15;

 VAR_13 = FUNC_6(VAR_10->clk);

 VAR_14 = FUNC_8(VAR_10->base + VAR_0);

 if (VAR_14 & FUNC_0(FUNC_1(VAR_8->hwpwm)))
  VAR_9->enabled = 1;
 else
  VAR_9->enabled = 0;

 if (VAR_14 & FUNC_0(FUNC_2(VAR_8->hwpwm)))
  VAR_9->polarity = VAR_6;
 else
  VAR_9->polarity = VAR_5;

 VAR_14 = FUNC_8(VAR_10->base + VAR_3);
 VAR_15 = VAR_14 >> FUNC_5(VAR_8->hwpwm);
 VAR_15 &= VAR_2;

 VAR_12 = VAR_4 * (VAR_15 + 1);

 VAR_14 = FUNC_8(VAR_10->base + FUNC_4(VAR_8->hwpwm));
 VAR_11 = (VAR_14 & VAR_1) * VAR_12;
 VAR_9->period = FUNC_7(VAR_11, VAR_13);

 VAR_14 = FUNC_8(VAR_10->base + FUNC_3(VAR_8->hwpwm));
 VAR_11 = (VAR_14 & VAR_1) * VAR_12;
 VAR_9->duty_cycle = FUNC_7(VAR_11, VAR_13);
}
