
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct TYPE_2__ {int base; int npwm; int of_pwm_n_cells; int of_xlate; int * ops; int * dev; } ;
struct berlin_pwm_chip {int clk; TYPE_1__ chip; int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,struct resource*) ;
 struct berlin_pwm_chip* FUNC_7 (int *,int,int ) ;
 int VAR_4 ;
 struct resource* FUNC_8 (struct platform_device*,int ,int ) ;
 int FUNC_9 (struct platform_device*,struct berlin_pwm_chip*) ;
 int FUNC_10 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_5)
{
 struct berlin_pwm_chip *VAR_6;
 struct resource *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_7(&VAR_5->dev, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_8(VAR_5, VAR_2, 0);
 VAR_6->base = FUNC_6(&VAR_5->dev, VAR_7);
 if (FUNC_0(VAR_6->base))
  return FUNC_1(VAR_6->base);

 VAR_6->clk = FUNC_5(&VAR_5->dev, ((void*)0));
 if (FUNC_0(VAR_6->clk))
  return FUNC_1(VAR_6->clk);

 VAR_8 = FUNC_3(VAR_6->clk);
 if (VAR_8)
  return VAR_8;

 VAR_6->chip.dev = &VAR_5->dev;
 VAR_6->chip.ops = &VAR_3;
 VAR_6->chip.base = -1;
 VAR_6->chip.npwm = 4;
 VAR_6->chip.of_xlate = VAR_4;
 VAR_6->chip.of_pwm_n_cells = 3;

 VAR_8 = FUNC_10(&VAR_6->chip);
 if (VAR_8 < 0) {
  FUNC_4(&VAR_5->dev, "failed to add PWM chip: %d\n", VAR_8);
  FUNC_2(VAR_6->clk);
  return VAR_8;
 }

 FUNC_9(VAR_5, VAR_6);

 return 0;
}
