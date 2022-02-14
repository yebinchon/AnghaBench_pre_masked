
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {struct device_node* of_node; } ;
struct platform_device {TYPE_3__ dev; } ;
struct TYPE_6__ {int base; int npwm; int * ops; TYPE_3__* dev; } ;
struct mxs_pwm_chip {TYPE_1__ chip; int base; int clk; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,char*,int) ;
 int FUNC_3 (TYPE_3__*,int *) ;
 struct mxs_pwm_chip* FUNC_4 (TYPE_3__*,int,int ) ;
 int FUNC_5 (struct platform_device*,int ) ;
 int VAR_2 ;
 int FUNC_6 (struct device_node*,char*,int *) ;
 int FUNC_7 (struct platform_device*,struct mxs_pwm_chip*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_3)
{
 struct device_node *VAR_4 = VAR_3->dev.of_node;
 struct mxs_pwm_chip *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_4(&VAR_3->dev, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->base = FUNC_5(VAR_3, 0);
 if (FUNC_0(VAR_5->base))
  return FUNC_1(VAR_5->base);

 VAR_5->clk = FUNC_3(&VAR_3->dev, ((void*)0));
 if (FUNC_0(VAR_5->clk))
  return FUNC_1(VAR_5->clk);

 VAR_5->chip.dev = &VAR_3->dev;
 VAR_5->chip.ops = &VAR_2;
 VAR_5->chip.base = -1;

 VAR_6 = FUNC_6(VAR_4, "fsl,pwm-number", &VAR_5->chip.npwm);
 if (VAR_6 < 0) {
  FUNC_2(&VAR_3->dev, "failed to get pwm number: %d\n", VAR_6);
  return VAR_6;
 }

 VAR_6 = FUNC_8(&VAR_5->chip);
 if (VAR_6 < 0) {
  FUNC_2(&VAR_3->dev, "failed to add pwm chip %d\n", VAR_6);
  return VAR_6;
 }

 FUNC_7(VAR_3, VAR_5);

 VAR_6 = FUNC_10(VAR_5->base);
 if (VAR_6)
  goto pwm_remove;

 return 0;

pwm_remove:
 FUNC_9(&VAR_5->chip);
 return VAR_6;
}
