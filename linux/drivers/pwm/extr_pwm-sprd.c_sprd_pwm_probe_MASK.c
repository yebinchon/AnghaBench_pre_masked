
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int base; int npwm; int * ops; int * dev; } ;
struct sprd_pwm_chip {TYPE_1__ chip; int num_pwms; int * dev; int base; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 struct sprd_pwm_chip* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (struct platform_device*,int ) ;
 int FUNC_5 (struct platform_device*,struct sprd_pwm_chip*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct sprd_pwm_chip*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_3)
{
 struct sprd_pwm_chip *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_3(&VAR_3->dev, sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->base = FUNC_4(VAR_3, 0);
 if (FUNC_0(VAR_4->base))
  return FUNC_1(VAR_4->base);

 VAR_4->dev = &VAR_3->dev;
 FUNC_5(VAR_3, VAR_4);

 VAR_5 = FUNC_7(VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_4->chip.dev = &VAR_3->dev;
 VAR_4->chip.ops = &VAR_2;
 VAR_4->chip.base = -1;
 VAR_4->chip.npwm = VAR_4->num_pwms;

 VAR_5 = FUNC_6(&VAR_4->chip);
 if (VAR_5)
  FUNC_2(&VAR_3->dev, "failed to add PWM chip\n");

 return VAR_5;
}
