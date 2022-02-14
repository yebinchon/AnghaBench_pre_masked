
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct TYPE_2__ {int base; int npwm; int * ops; int * dev; } ;
struct brcmstb_pwm {int clk; TYPE_1__ chip; int base; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,struct resource*) ;
 struct brcmstb_pwm* FUNC_7 (int *,int,int ) ;
 struct resource* FUNC_8 (struct platform_device*,int ,int ) ;
 int FUNC_9 (struct platform_device*,struct brcmstb_pwm*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_4)
{
 struct brcmstb_pwm *VAR_5;
 struct resource *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_7(&VAR_4->dev, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 FUNC_11(&VAR_5->lock);

 VAR_5->clk = FUNC_5(&VAR_4->dev, ((void*)0));
 if (FUNC_0(VAR_5->clk)) {
  FUNC_4(&VAR_4->dev, "failed to obtain clock\n");
  return FUNC_1(VAR_5->clk);
 }

 VAR_7 = FUNC_3(VAR_5->clk);
 if (VAR_7 < 0) {
  FUNC_4(&VAR_4->dev, "failed to enable clock: %d\n", VAR_7);
  return VAR_7;
 }

 FUNC_9(VAR_4, VAR_5);

 VAR_5->chip.dev = &VAR_4->dev;
 VAR_5->chip.ops = &VAR_3;
 VAR_5->chip.base = -1;
 VAR_5->chip.npwm = 2;

 VAR_6 = FUNC_8(VAR_4, VAR_2, 0);
 VAR_5->base = FUNC_6(&VAR_4->dev, VAR_6);
 if (FUNC_0(VAR_5->base)) {
  VAR_7 = FUNC_1(VAR_5->base);
  goto out_clk;
 }

 VAR_7 = FUNC_10(&VAR_5->chip);
 if (VAR_7) {
  FUNC_4(&VAR_4->dev, "failed to add PWM chip: %d\n", VAR_7);
  goto out_clk;
 }

 return 0;

out_clk:
 FUNC_2(VAR_5->clk);
 return VAR_7;
}
