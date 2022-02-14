
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_2__ {int base; int npwm; int * dev; int * ops; } ;
struct pwm_imx1_chip {TYPE_1__ chip; void* mmio_base; void* clk_per; void* clk_ipg; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int *,char*,int) ;
 void* FUNC_3 (int *,char*) ;
 void* FUNC_4 (int *,struct resource*) ;
 struct pwm_imx1_chip* FUNC_5 (int *,int,int ) ;
 struct resource* FUNC_6 (struct platform_device*,int ,int ) ;
 int FUNC_7 (struct platform_device*,struct pwm_imx1_chip*) ;
 int VAR_4 ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_5)
{
 struct pwm_imx1_chip *VAR_6;
 struct resource *VAR_7;

 VAR_6 = FUNC_5(&VAR_5->dev, sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_0;

 FUNC_7(VAR_5, VAR_6);

 VAR_6->clk_ipg = FUNC_3(&VAR_5->dev, "ipg");
 if (FUNC_0(VAR_6->clk_ipg)) {
  FUNC_2(&VAR_5->dev, "getting ipg clock failed with %ld\n",
    FUNC_1(VAR_6->clk_ipg));
  return FUNC_1(VAR_6->clk_ipg);
 }

 VAR_6->clk_per = FUNC_3(&VAR_5->dev, "per");
 if (FUNC_0(VAR_6->clk_per)) {
  int VAR_8 = FUNC_1(VAR_6->clk_per);

  if (VAR_8 != -VAR_1)
   FUNC_2(&VAR_5->dev,
    "failed to get peripheral clock: %d\n",
    VAR_8);

  return VAR_8;
 }

 VAR_6->chip.ops = &VAR_4;
 VAR_6->chip.dev = &VAR_5->dev;
 VAR_6->chip.base = -1;
 VAR_6->chip.npwm = 1;

 VAR_7 = FUNC_6(VAR_5, VAR_3, 0);
 VAR_6->mmio_base = FUNC_4(&VAR_5->dev, VAR_7);
 if (FUNC_0(VAR_6->mmio_base))
  return FUNC_1(VAR_6->mmio_base);

 return FUNC_8(&VAR_6->chip);
}
