
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int base; int npwm; int * ops; int * dev; } ;
struct tegra_pwm_chip {int rst; TYPE_1__ chip; TYPE_2__* soc; int clk; int clk_rate; int regs; int * dev; } ;
struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct TYPE_4__ {int num_channels; int max_frequency; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,struct resource*) ;
 struct tegra_pwm_chip* FUNC_7 (int *,int,int ) ;
 int FUNC_8 (int *,char*) ;
 TYPE_2__* FUNC_9 (int *) ;
 struct resource* FUNC_10 (struct platform_device*,int ,int ) ;
 int FUNC_11 (struct platform_device*,struct tegra_pwm_chip*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_4)
{
 struct tegra_pwm_chip *VAR_5;
 struct resource *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_7(&VAR_4->dev, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->soc = FUNC_9(&VAR_4->dev);
 VAR_5->dev = &VAR_4->dev;

 VAR_6 = FUNC_10(VAR_4, VAR_2, 0);
 VAR_5->regs = FUNC_6(&VAR_4->dev, VAR_6);
 if (FUNC_0(VAR_5->regs))
  return FUNC_1(VAR_5->regs);

 FUNC_11(VAR_4, VAR_5);

 VAR_5->clk = FUNC_5(&VAR_4->dev, ((void*)0));
 if (FUNC_0(VAR_5->clk))
  return FUNC_1(VAR_5->clk);


 VAR_7 = FUNC_3(VAR_5->clk, VAR_5->soc->max_frequency);
 if (VAR_7 < 0) {
  FUNC_4(&VAR_4->dev, "Failed to set max frequency: %d\n", VAR_7);
  return VAR_7;
 }






 VAR_5->clk_rate = FUNC_2(VAR_5->clk);

 VAR_5->rst = FUNC_8(&VAR_4->dev, "pwm");
 if (FUNC_0(VAR_5->rst)) {
  VAR_7 = FUNC_1(VAR_5->rst);
  FUNC_4(&VAR_4->dev, "Reset control is not found: %d\n", VAR_7);
  return VAR_7;
 }

 FUNC_14(VAR_5->rst);

 VAR_5->chip.dev = &VAR_4->dev;
 VAR_5->chip.ops = &VAR_3;
 VAR_5->chip.base = -1;
 VAR_5->chip.npwm = VAR_5->soc->num_channels;

 VAR_7 = FUNC_12(&VAR_5->chip);
 if (VAR_7 < 0) {
  FUNC_4(&VAR_4->dev, "pwmchip_add() failed: %d\n", VAR_7);
  FUNC_13(VAR_5->rst);
  return VAR_7;
 }

 return 0;
}
