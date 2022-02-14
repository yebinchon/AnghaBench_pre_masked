
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tpu_pwm_device {int timer_on; int prescaler; int duty; int period; int channel; TYPE_2__* tpu; } ;
struct TYPE_4__ {TYPE_1__* pdev; int clk; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int ,int,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct tpu_pwm_device*,int ) ;
 int FUNC_5 (struct tpu_pwm_device*,int) ;
 int FUNC_6 (struct tpu_pwm_device*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct tpu_pwm_device *VAR_9)
{
 int VAR_10;

 if (!VAR_9->timer_on) {

  FUNC_3(&VAR_9->tpu->pdev->dev);
  VAR_10 = FUNC_0(VAR_9->tpu->clk);
  if (VAR_10) {
   FUNC_2(&VAR_9->tpu->pdev->dev, "cannot enable clock\n");
   return VAR_10;
  }
  VAR_9->timer_on = 1;
 }






 FUNC_4(VAR_9, VAR_0);
 FUNC_5(VAR_9, 0);
 FUNC_6(VAR_9, VAR_4, VAR_2 | VAR_3 |
        VAR_9->prescaler);
 FUNC_6(VAR_9, VAR_8, VAR_7);
 FUNC_4(VAR_9, VAR_1);
 FUNC_6(VAR_9, VAR_5, VAR_9->duty);
 FUNC_6(VAR_9, VAR_6, VAR_9->period);

 FUNC_1(&VAR_9->tpu->pdev->dev, "%u: TGRA 0x%04x TGRB 0x%04x\n",
  VAR_9->channel, VAR_9->duty, VAR_9->period);


 FUNC_5(VAR_9, 1);

 return 0;
}
