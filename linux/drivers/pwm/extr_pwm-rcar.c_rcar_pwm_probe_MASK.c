
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_2__ {int base; int npwm; int * ops; int * dev; } ;
struct rcar_pwm_chip {TYPE_1__ chip; int clk; int base; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,struct resource*) ;
 struct rcar_pwm_chip* FUNC_5 (int *,int,int ) ;
 struct resource* FUNC_6 (struct platform_device*,int ,int ) ;
 int FUNC_7 (struct platform_device*,struct rcar_pwm_chip*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_1__*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_4)
{
 struct rcar_pwm_chip *VAR_5;
 struct resource *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_5(&VAR_4->dev, sizeof(*VAR_5), VAR_1);
 if (VAR_5 == ((void*)0))
  return -VAR_0;

 VAR_6 = FUNC_6(VAR_4, VAR_2, 0);
 VAR_5->base = FUNC_4(&VAR_4->dev, VAR_6);
 if (FUNC_0(VAR_5->base))
  return FUNC_1(VAR_5->base);

 VAR_5->clk = FUNC_3(&VAR_4->dev, ((void*)0));
 if (FUNC_0(VAR_5->clk)) {
  FUNC_2(&VAR_4->dev, "cannot get clock\n");
  return FUNC_1(VAR_5->clk);
 }

 FUNC_7(VAR_4, VAR_5);

 VAR_5->chip.dev = &VAR_4->dev;
 VAR_5->chip.ops = &VAR_3;
 VAR_5->chip.base = -1;
 VAR_5->chip.npwm = 1;

 VAR_7 = FUNC_9(&VAR_5->chip);
 if (VAR_7 < 0) {
  FUNC_2(&VAR_4->dev, "failed to register PWM chip: %d\n", VAR_7);
  return VAR_7;
 }

 FUNC_8(&VAR_4->dev);

 return 0;
}
