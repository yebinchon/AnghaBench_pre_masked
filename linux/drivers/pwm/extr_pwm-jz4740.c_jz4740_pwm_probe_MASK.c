
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct TYPE_2__ {int base; int of_pwm_n_cells; int of_xlate; int npwm; int * ops; int * dev; } ;
struct jz4740_pwm_chip {TYPE_1__ chip; int clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 struct jz4740_pwm_chip* FUNC_3 (int *,int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct platform_device*,struct jz4740_pwm_chip*) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_5)
{
 struct jz4740_pwm_chip *VAR_6;

 VAR_6 = FUNC_3(&VAR_5->dev, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->clk = FUNC_2(&VAR_5->dev, "ext");
 if (FUNC_0(VAR_6->clk))
  return FUNC_1(VAR_6->clk);

 VAR_6->chip.dev = &VAR_5->dev;
 VAR_6->chip.ops = &VAR_3;
 VAR_6->chip.npwm = VAR_2;
 VAR_6->chip.base = -1;
 VAR_6->chip.of_xlate = VAR_4;
 VAR_6->chip.of_pwm_n_cells = 3;

 FUNC_4(VAR_5, VAR_6);

 return FUNC_5(&VAR_6->chip);
}
