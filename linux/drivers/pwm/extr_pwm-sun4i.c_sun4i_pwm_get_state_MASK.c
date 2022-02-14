
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u64 ;
typedef int u32 ;
struct sun4i_pwm_chip {TYPE_1__* data; int clk; } ;
struct pwm_state {int enabled; void* period; void* duty_cycle; int polarity; } ;
struct pwm_device {int hwpwm; } ;
struct pwm_chip {int dummy; } ;
struct TYPE_2__ {scalar_t__ has_prescaler_bypass; } ;


 int FUNC_0 (int,int ) ;
 void* FUNC_1 (unsigned int,unsigned int) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 unsigned int FUNC_3 (int) ;
 unsigned int FUNC_4 (int) ;
 size_t FUNC_5 (int,int ) ;
 unsigned int FUNC_6 (int ) ;
 unsigned int* VAR_8 ;
 int FUNC_7 (struct sun4i_pwm_chip*,int ) ;
 struct sun4i_pwm_chip* FUNC_8 (struct pwm_chip*) ;

__attribute__((used)) static void FUNC_9(struct pwm_chip *VAR_9,
    struct pwm_device *VAR_10,
    struct pwm_state *VAR_11)
{
 struct sun4i_pwm_chip *VAR_12 = FUNC_8(VAR_9);
 u64 VAR_13, VAR_14;
 u32 VAR_15;
 unsigned int VAR_16;

 VAR_13 = FUNC_6(VAR_12->clk);

 VAR_15 = FUNC_7(VAR_12, VAR_3);

 if ((FUNC_5(VAR_15, VAR_10->hwpwm) == VAR_7) &&
     VAR_12->data->has_prescaler_bypass)
  VAR_16 = 1;
 else
  VAR_16 = VAR_8[FUNC_5(VAR_15, VAR_10->hwpwm)];

 if (VAR_16 == 0)
  return;

 if (VAR_15 & FUNC_0(VAR_1, VAR_10->hwpwm))
  VAR_11->polarity = VAR_6;
 else
  VAR_11->polarity = VAR_5;

 if ((VAR_15 & FUNC_0(VAR_2 | VAR_4, VAR_10->hwpwm)) ==
     FUNC_0(VAR_2 | VAR_4, VAR_10->hwpwm))
  VAR_11->enabled = 1;
 else
  VAR_11->enabled = 0;

 VAR_15 = FUNC_7(VAR_12, FUNC_2(VAR_10->hwpwm));

 VAR_14 = VAR_16 * VAR_0 * FUNC_3(VAR_15);
 VAR_11->duty_cycle = FUNC_1(VAR_14, VAR_13);

 VAR_14 = VAR_16 * VAR_0 * FUNC_4(VAR_15);
 VAR_11->period = FUNC_1(VAR_14, VAR_13);
}
