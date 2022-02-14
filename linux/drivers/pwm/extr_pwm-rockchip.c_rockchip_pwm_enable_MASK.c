
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct rockchip_pwm_chip {int clk; TYPE_2__* data; scalar_t__ base; } ;
struct pwm_device {int dummy; } ;
struct pwm_chip {int dummy; } ;
struct TYPE_3__ {scalar_t__ ctrl; } ;
struct TYPE_4__ {TYPE_1__ regs; int enable_conf; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 struct rockchip_pwm_chip* FUNC_3 (struct pwm_chip*) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct pwm_chip *VAR_0,
          struct pwm_device *VAR_1,
          bool VAR_2)
{
 struct rockchip_pwm_chip *VAR_3 = FUNC_3(VAR_0);
 u32 VAR_4 = VAR_3->data->enable_conf;
 int VAR_5;
 u32 VAR_6;

 if (VAR_2) {
  VAR_5 = FUNC_1(VAR_3->clk);
  if (VAR_5)
   return VAR_5;
 }

 VAR_6 = FUNC_2(VAR_3->base + VAR_3->data->regs.ctrl);

 if (VAR_2)
  VAR_6 |= VAR_4;
 else
  VAR_6 &= ~VAR_4;

 FUNC_4(VAR_6, VAR_3->base + VAR_3->data->regs.ctrl);

 if (!VAR_2)
  FUNC_0(VAR_3->clk);

 return 0;
}
