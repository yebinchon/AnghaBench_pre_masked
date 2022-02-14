
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tpu_pwm_device {int timer_on; TYPE_2__* tpu; } ;
struct TYPE_4__ {TYPE_1__* pdev; int clk; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct tpu_pwm_device*,int) ;

__attribute__((used)) static void FUNC_3(struct tpu_pwm_device *VAR_0)
{
 if (!VAR_0->timer_on)
  return;


 FUNC_2(VAR_0, 0);


 FUNC_0(VAR_0->tpu->clk);
 FUNC_1(&VAR_0->tpu->pdev->dev);

 VAR_0->timer_on = 0;
}
