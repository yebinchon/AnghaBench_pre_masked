
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct TYPE_2__ {int base; int npwm; int * ops; int * dev; } ;
struct ep93xx_pwm {TYPE_1__ chip; int clk; int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,struct resource*) ;
 struct ep93xx_pwm* FUNC_4 (int *,int,int ) ;
 int VAR_3 ;
 struct resource* FUNC_5 (struct platform_device*,int ,int ) ;
 int FUNC_6 (struct platform_device*,struct ep93xx_pwm*) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_4)
{
 struct ep93xx_pwm *VAR_5;
 struct resource *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_4(&VAR_4->dev, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_6 = FUNC_5(VAR_4, VAR_2, 0);
 VAR_5->base = FUNC_3(&VAR_4->dev, VAR_6);
 if (FUNC_0(VAR_5->base))
  return FUNC_1(VAR_5->base);

 VAR_5->clk = FUNC_2(&VAR_4->dev, "pwm_clk");
 if (FUNC_0(VAR_5->clk))
  return FUNC_1(VAR_5->clk);

 VAR_5->chip.dev = &VAR_4->dev;
 VAR_5->chip.ops = &VAR_3;
 VAR_5->chip.base = -1;
 VAR_5->chip.npwm = 1;

 VAR_7 = FUNC_7(&VAR_5->chip);
 if (VAR_7 < 0)
  return VAR_7;

 FUNC_6(VAR_4, VAR_5);
 return 0;
}
