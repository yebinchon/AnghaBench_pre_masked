
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int of_pwm_n_cells; int base; int npwm; int of_xlate; int * ops; int * dev; } ;
struct tpu_device {struct platform_device* pdev; TYPE_1__ chip; int clk; int base; int lock; } ;
struct resource {int dummy; } ;
struct platform_device {int dev; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,struct resource*) ;
 struct tpu_device* FUNC_6 (int *,int,int ) ;
 int VAR_4 ;
 struct resource* FUNC_7 (struct platform_device*,int ,int ) ;
 int FUNC_8 (struct platform_device*,struct tpu_device*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int *) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_6)
{
 struct tpu_device *VAR_7;
 struct resource *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_6(&VAR_6->dev, sizeof(*VAR_7), VAR_1);
 if (VAR_7 == ((void*)0))
  return -VAR_0;

 FUNC_11(&VAR_7->lock);
 VAR_7->pdev = VAR_6;


 VAR_8 = FUNC_7(VAR_6, VAR_2, 0);
 VAR_7->base = FUNC_5(&VAR_6->dev, VAR_8);
 if (FUNC_0(VAR_7->base))
  return FUNC_1(VAR_7->base);

 VAR_7->clk = FUNC_4(&VAR_6->dev, ((void*)0));
 if (FUNC_0(VAR_7->clk)) {
  FUNC_2(&VAR_6->dev, "cannot get clock\n");
  return FUNC_1(VAR_7->clk);
 }


 FUNC_8(VAR_6, VAR_7);

 VAR_7->chip.dev = &VAR_6->dev;
 VAR_7->chip.ops = &VAR_5;
 VAR_7->chip.of_xlate = VAR_4;
 VAR_7->chip.of_pwm_n_cells = 3;
 VAR_7->chip.base = -1;
 VAR_7->chip.npwm = VAR_3;

 VAR_9 = FUNC_10(&VAR_7->chip);
 if (VAR_9 < 0) {
  FUNC_2(&VAR_6->dev, "failed to register PWM chip\n");
  return VAR_9;
 }

 FUNC_3(&VAR_6->dev, "TPU PWM %d registered\n", VAR_7->pdev->id);

 FUNC_9(&VAR_6->dev);

 return 0;
}
