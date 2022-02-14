
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int base; int of_pwm_n_cells; int of_xlate; int npwm; int * ops; int * dev; } ;
struct sun4i_pwm_chip {TYPE_1__ chip; int ctrl_lock; TYPE_2__* data; int clk; int base; } ;
struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct TYPE_4__ {int npwm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,struct resource*) ;
 struct sun4i_pwm_chip* FUNC_5 (int *,int,int ) ;
 TYPE_2__* FUNC_6 (int *) ;
 int VAR_4 ;
 struct resource* FUNC_7 (struct platform_device*,int ,int ) ;
 int FUNC_8 (struct platform_device*,struct sun4i_pwm_chip*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int *) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_6)
{
 struct sun4i_pwm_chip *VAR_7;
 struct resource *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_5(&VAR_6->dev, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_7->data = FUNC_6(&VAR_6->dev);
 if (!VAR_7->data)
  return -VAR_0;

 VAR_8 = FUNC_7(VAR_6, VAR_3, 0);
 VAR_7->base = FUNC_4(&VAR_6->dev, VAR_8);
 if (FUNC_0(VAR_7->base))
  return FUNC_1(VAR_7->base);

 VAR_7->clk = FUNC_3(&VAR_6->dev, ((void*)0));
 if (FUNC_0(VAR_7->clk))
  return FUNC_1(VAR_7->clk);

 VAR_7->chip.dev = &VAR_6->dev;
 VAR_7->chip.ops = &VAR_5;
 VAR_7->chip.base = -1;
 VAR_7->chip.npwm = VAR_7->data->npwm;
 VAR_7->chip.of_xlate = VAR_4;
 VAR_7->chip.of_pwm_n_cells = 3;

 FUNC_10(&VAR_7->ctrl_lock);

 VAR_9 = FUNC_9(&VAR_7->chip);
 if (VAR_9 < 0) {
  FUNC_2(&VAR_6->dev, "failed to add PWM chip: %d\n", VAR_9);
  return VAR_9;
 }

 FUNC_8(VAR_6, VAR_7);

 return 0;
}
