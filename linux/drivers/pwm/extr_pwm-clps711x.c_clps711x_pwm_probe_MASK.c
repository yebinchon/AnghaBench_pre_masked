
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct TYPE_2__ {int base; int npwm; int of_pwm_n_cells; int of_xlate; int * dev; int * ops; } ;
struct clps711x_chip {TYPE_1__ chip; int lock; int clk; int pmpcon; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,struct resource*) ;
 struct clps711x_chip* FUNC_4 (int *,int,int ) ;
 struct resource* FUNC_5 (struct platform_device*,int ,int ) ;
 int FUNC_6 (struct platform_device*,struct clps711x_chip*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_5)
{
 struct clps711x_chip *VAR_6;
 struct resource *VAR_7;

 VAR_6 = FUNC_4(&VAR_5->dev, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_5(VAR_5, VAR_2, 0);
 VAR_6->pmpcon = FUNC_3(&VAR_5->dev, VAR_7);
 if (FUNC_0(VAR_6->pmpcon))
  return FUNC_1(VAR_6->pmpcon);

 VAR_6->clk = FUNC_2(&VAR_5->dev, ((void*)0));
 if (FUNC_0(VAR_6->clk))
  return FUNC_1(VAR_6->clk);

 VAR_6->chip.ops = &VAR_3;
 VAR_6->chip.dev = &VAR_5->dev;
 VAR_6->chip.base = -1;
 VAR_6->chip.npwm = 2;
 VAR_6->chip.of_xlate = VAR_4;
 VAR_6->chip.of_pwm_n_cells = 1;

 FUNC_8(&VAR_6->lock);

 FUNC_6(VAR_5, VAR_6);

 return FUNC_7(&VAR_6->chip);
}
