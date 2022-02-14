
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct TYPE_2__ {int npwm; int of_pwm_n_cells; int of_xlate; int * ops; int * dev; } ;
struct bcm2835_pwm {int clk; TYPE_1__ chip; int base; int * dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,struct resource*) ;
 struct bcm2835_pwm* FUNC_7 (int *,int,int ) ;
 int VAR_5 ;
 struct resource* FUNC_8 (struct platform_device*,int ,int ) ;
 int FUNC_9 (struct platform_device*,struct bcm2835_pwm*) ;
 int FUNC_10 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_6)
{
 struct bcm2835_pwm *VAR_7;
 struct resource *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_7(&VAR_6->dev, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->dev = &VAR_6->dev;

 VAR_8 = FUNC_8(VAR_6, VAR_3, 0);
 VAR_7->base = FUNC_6(&VAR_6->dev, VAR_8);
 if (FUNC_0(VAR_7->base))
  return FUNC_1(VAR_7->base);

 VAR_7->clk = FUNC_5(&VAR_6->dev, ((void*)0));
 if (FUNC_0(VAR_7->clk)) {
  VAR_9 = FUNC_1(VAR_7->clk);
  if (VAR_9 != -VAR_1)
   FUNC_4(&VAR_6->dev, "clock not found: %d\n", VAR_9);

  return VAR_9;
 }

 VAR_9 = FUNC_3(VAR_7->clk);
 if (VAR_9)
  return VAR_9;

 VAR_7->chip.dev = &VAR_6->dev;
 VAR_7->chip.ops = &VAR_4;
 VAR_7->chip.npwm = 2;
 VAR_7->chip.of_xlate = VAR_5;
 VAR_7->chip.of_pwm_n_cells = 3;

 FUNC_9(VAR_6, VAR_7);

 VAR_9 = FUNC_10(&VAR_7->chip);
 if (VAR_9 < 0)
  goto add_fail;

 return 0;

add_fail:
 FUNC_2(VAR_7->clk);
 return VAR_9;
}
