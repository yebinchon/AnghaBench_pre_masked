
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct rockchip_pwm_chip {int pclk; TYPE_2__* data; scalar_t__ base; int clk; } ;
struct pwm_state {int enabled; int polarity; void* duty_cycle; void* period; } ;
struct pwm_device {int dummy; } ;
struct pwm_chip {int dummy; } ;
struct TYPE_3__ {scalar_t__ ctrl; scalar_t__ duty; scalar_t__ period; } ;
struct TYPE_4__ {int enable_conf; int prescaler; scalar_t__ supports_polarity; TYPE_1__ regs; } ;


 void* FUNC_0 (int,unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 unsigned long FUNC_3 (int ) ;
 void* FUNC_4 (scalar_t__) ;
 struct rockchip_pwm_chip* FUNC_5 (struct pwm_chip*) ;

__attribute__((used)) static void FUNC_6(struct pwm_chip *VAR_4,
       struct pwm_device *VAR_5,
       struct pwm_state *VAR_6)
{
 struct rockchip_pwm_chip *VAR_7 = FUNC_5(VAR_4);
 u32 VAR_8 = VAR_7->data->enable_conf;
 unsigned long VAR_9;
 u64 VAR_10;
 u32 VAR_11;
 int VAR_12;

 VAR_12 = FUNC_2(VAR_7->pclk);
 if (VAR_12)
  return;

 VAR_9 = FUNC_3(VAR_7->clk);

 VAR_10 = FUNC_4(VAR_7->base + VAR_7->data->regs.period);
 VAR_10 *= VAR_7->data->prescaler * VAR_0;
 VAR_6->period = FUNC_0(VAR_10, VAR_9);

 VAR_10 = FUNC_4(VAR_7->base + VAR_7->data->regs.duty);
 VAR_10 *= VAR_7->data->prescaler * VAR_0;
 VAR_6->duty_cycle = FUNC_0(VAR_10, VAR_9);

 VAR_11 = FUNC_4(VAR_7->base + VAR_7->data->regs.ctrl);
 if (VAR_7->data->supports_polarity)
  VAR_6->enabled = ((VAR_11 & VAR_8) != VAR_8) ?
     0 : 1;
 else
  VAR_6->enabled = ((VAR_11 & VAR_8) == VAR_8) ?
     1 : 0;

 if (VAR_7->data->supports_polarity && !(VAR_11 & VAR_1))
  VAR_6->polarity = VAR_2;
 else
  VAR_6->polarity = VAR_3;

 FUNC_1(VAR_7->pclk);
}
