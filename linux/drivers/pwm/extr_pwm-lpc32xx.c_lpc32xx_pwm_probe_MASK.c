
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct TYPE_4__ {int npwm; int base; TYPE_1__* pwms; int * ops; int * dev; } ;
struct lpc32xx_pwm_chip {TYPE_2__ chip; scalar_t__ base; scalar_t__ clk; } ;
struct TYPE_3__ {int hwpwm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_2 (int *,char*,int) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *,struct resource*) ;
 struct lpc32xx_pwm_chip* FUNC_5 (int *,int,int ) ;
 int VAR_4 ;
 struct resource* FUNC_6 (struct platform_device*,int ,int ) ;
 int FUNC_7 (struct platform_device*,struct lpc32xx_pwm_chip*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_5)
{
 struct lpc32xx_pwm_chip *VAR_6;
 struct resource *VAR_7;
 int VAR_8;
 u32 VAR_9;

 VAR_6 = FUNC_5(&VAR_5->dev, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_6(VAR_5, VAR_2, 0);
 VAR_6->base = FUNC_4(&VAR_5->dev, VAR_7);
 if (FUNC_0(VAR_6->base))
  return FUNC_1(VAR_6->base);

 VAR_6->clk = FUNC_3(&VAR_5->dev, ((void*)0));
 if (FUNC_0(VAR_6->clk))
  return FUNC_1(VAR_6->clk);

 VAR_6->chip.dev = &VAR_5->dev;
 VAR_6->chip.ops = &VAR_4;
 VAR_6->chip.npwm = 1;
 VAR_6->chip.base = -1;

 VAR_8 = FUNC_8(&VAR_6->chip);
 if (VAR_8 < 0) {
  FUNC_2(&VAR_5->dev, "failed to add PWM chip, error %d\n", VAR_8);
  return VAR_8;
 }


 VAR_9 = FUNC_9(VAR_6->base + (VAR_6->chip.pwms[0].hwpwm << 2));
 VAR_9 &= ~VAR_3;
 FUNC_10(VAR_9, VAR_6->base + (VAR_6->chip.pwms[0].hwpwm << 2));

 FUNC_7(VAR_5, VAR_6);

 return 0;
}
