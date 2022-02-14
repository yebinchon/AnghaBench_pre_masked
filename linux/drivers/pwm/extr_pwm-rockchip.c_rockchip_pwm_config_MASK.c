
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef unsigned long u32 ;
struct rockchip_pwm_chip {TYPE_2__* data; scalar_t__ base; int clk; } ;
struct pwm_state {int period; int duty_cycle; scalar_t__ polarity; } ;
struct pwm_device {int dummy; } ;
struct pwm_chip {int dummy; } ;
struct TYPE_3__ {scalar_t__ ctrl; int duty; int period; } ;
struct TYPE_4__ {int prescaler; TYPE_1__ regs; scalar_t__ supports_lock; scalar_t__ supports_polarity; } ;


 unsigned long FUNC_0 (int,int) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned long VAR_7 ;
 int FUNC_1 (int ) ;
 unsigned long FUNC_2 (scalar_t__) ;
 struct rockchip_pwm_chip* FUNC_3 (struct pwm_chip*) ;
 int FUNC_4 (unsigned long,scalar_t__) ;
 int FUNC_5 (unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct pwm_chip *VAR_8, struct pwm_device *VAR_9,
          const struct pwm_state *VAR_10)
{
 struct rockchip_pwm_chip *VAR_11 = FUNC_3(VAR_8);
 unsigned long VAR_12, VAR_13;
 u64 VAR_14, VAR_15;
 u32 VAR_16;

 VAR_14 = FUNC_1(VAR_11->clk);






 VAR_15 = VAR_14 * VAR_10->period;
 VAR_12 = FUNC_0(VAR_15,
           VAR_11->data->prescaler * VAR_0);

 VAR_15 = VAR_14 * VAR_10->duty_cycle;
 VAR_13 = FUNC_0(VAR_15, VAR_11->data->prescaler * VAR_0);





 VAR_16 = FUNC_2(VAR_11->base + VAR_11->data->regs.ctrl);
 if (VAR_11->data->supports_lock) {
  VAR_16 |= VAR_5;
  FUNC_5(VAR_16, VAR_11->base + VAR_11->data->regs.ctrl);
 }

 FUNC_4(VAR_12, VAR_11->base + VAR_11->data->regs.period);
 FUNC_4(VAR_13, VAR_11->base + VAR_11->data->regs.duty);

 if (VAR_11->data->supports_polarity) {
  VAR_16 &= ~VAR_7;
  if (VAR_10->polarity == VAR_6)
   VAR_16 |= VAR_1 | VAR_4;
  else
   VAR_16 |= VAR_2 | VAR_3;
 }






 if (VAR_11->data->supports_lock)
  VAR_16 &= ~VAR_5;

 FUNC_4(VAR_16, VAR_11->base + VAR_11->data->regs.ctrl);
}
