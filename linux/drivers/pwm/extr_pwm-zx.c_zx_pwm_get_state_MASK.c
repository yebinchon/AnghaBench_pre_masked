
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u64 ;
typedef int u32 ;
struct zx_pwm_chip {int wclk; } ;
struct pwm_state {int enabled; void* duty_cycle; void* period; int polarity; } ;
struct pwm_device {int hwpwm; } ;
struct pwm_chip {int dummy; } ;


 void* FUNC_0 (unsigned int,unsigned long) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned long FUNC_1 (int ) ;
 struct zx_pwm_chip* FUNC_2 (struct pwm_chip*) ;
 void* FUNC_3 (struct zx_pwm_chip*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct pwm_chip *VAR_10, struct pwm_device *VAR_11,
        struct pwm_state *VAR_12)
{
 struct zx_pwm_chip *VAR_13 = FUNC_2(VAR_10);
 unsigned long VAR_14;
 unsigned int VAR_15;
 u32 VAR_16;
 u64 VAR_17;

 VAR_16 = FUNC_3(VAR_13, VAR_11->hwpwm, VAR_7);

 if (VAR_16 & VAR_9)
  VAR_12->polarity = VAR_2;
 else
  VAR_12->polarity = VAR_1;

 if (VAR_16 & VAR_6)
  VAR_12->enabled = 1;
 else
  VAR_12->enabled = 0;

 VAR_15 = (VAR_16 & VAR_3) >> VAR_4;
 VAR_14 = FUNC_1(VAR_13->wclk);

 VAR_17 = FUNC_3(VAR_13, VAR_11->hwpwm, VAR_8);
 VAR_17 *= VAR_15 * VAR_0;
 VAR_12->period = FUNC_0(VAR_17, VAR_14);

 VAR_17 = FUNC_3(VAR_13, VAR_11->hwpwm, VAR_5);
 VAR_17 *= VAR_15 * VAR_0;
 VAR_12->duty_cycle = FUNC_0(VAR_17, VAR_14);
}
