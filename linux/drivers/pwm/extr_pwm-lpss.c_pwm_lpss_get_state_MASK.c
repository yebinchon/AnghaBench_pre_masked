
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pwm_state {unsigned long period; unsigned long long duty_cycle; int enabled; int polarity; } ;
struct pwm_lpss_chip {TYPE_1__* info; } ;
struct pwm_device {int dummy; } ;
struct pwm_chip {int dev; } ;
struct TYPE_2__ {unsigned long long clk_rate; int base_unit_bits; } ;


 unsigned long FUNC_0 (int ) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (unsigned long long,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct pwm_device*) ;
 struct pwm_lpss_chip* FUNC_4 (struct pwm_chip*) ;

__attribute__((used)) static void FUNC_5(struct pwm_chip *VAR_5, struct pwm_device *VAR_6,
          struct pwm_state *VAR_7)
{
 struct pwm_lpss_chip *VAR_8 = FUNC_4(VAR_5);
 unsigned long VAR_9;
 unsigned long long VAR_10, VAR_11, VAR_12;
 u32 VAR_13;

 VAR_9 = FUNC_0(VAR_8->info->base_unit_bits);

 VAR_13 = FUNC_3(VAR_6);
 VAR_12 = 255 - (VAR_13 & VAR_3);
 VAR_10 = (VAR_13 >> VAR_1) & (VAR_9 - 1);

 VAR_11 = VAR_10 * VAR_8->info->clk_rate;
 FUNC_1(VAR_11, VAR_9);
 if (VAR_11 == 0)
  VAR_7->period = VAR_0;
 else
  VAR_7->period = VAR_0 / (unsigned long)VAR_11;

 VAR_12 *= VAR_7->period;
 FUNC_1(VAR_12, 255);
 VAR_7->duty_cycle = VAR_12;

 VAR_7->polarity = VAR_4;
 VAR_7->enabled = !!(VAR_13 & VAR_2);

 if (VAR_7->enabled)
  FUNC_2(VAR_5->dev);
}
