
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int base; int npwm; int of_pwm_n_cells; int pwms; int of_xlate; int * ops; TYPE_3__* dev; } ;
struct rockchip_pwm_chip {void* clk; void* pclk; TYPE_2__ chip; TYPE_1__* data; void* base; } ;
struct resource {int dummy; } ;
struct TYPE_10__ {int of_node; } ;
struct platform_device {TYPE_3__ dev; } ;
struct of_device_id {TYPE_1__* data; } ;
struct TYPE_8__ {scalar_t__ supports_polarity; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (TYPE_3__*,char*,int) ;
 void* FUNC_8 (TYPE_3__*,char*) ;
 void* FUNC_9 (TYPE_3__*,struct resource*) ;
 struct rockchip_pwm_chip* FUNC_10 (TYPE_3__*,int,int ) ;
 int FUNC_11 (int ,char*,char*) ;
 struct of_device_id* FUNC_12 (int ,TYPE_3__*) ;
 int VAR_5 ;
 struct resource* FUNC_13 (struct platform_device*,int ,int ) ;
 int FUNC_14 (struct platform_device*,struct rockchip_pwm_chip*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (TYPE_2__*) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_8)
{
 const struct of_device_id *VAR_9;
 struct rockchip_pwm_chip *VAR_10;
 struct resource *VAR_11;
 int VAR_12, VAR_13;

 VAR_9 = FUNC_12(VAR_6, &VAR_8->dev);
 if (!VAR_9)
  return -VAR_0;

 VAR_10 = FUNC_10(&VAR_8->dev, sizeof(*VAR_10), VAR_3);
 if (!VAR_10)
  return -VAR_1;

 VAR_11 = FUNC_13(VAR_8, VAR_4, 0);
 VAR_10->base = FUNC_9(&VAR_8->dev, VAR_11);
 if (FUNC_0(VAR_10->base))
  return FUNC_1(VAR_10->base);

 VAR_10->clk = FUNC_8(&VAR_8->dev, "pwm");
 if (FUNC_0(VAR_10->clk)) {
  VAR_10->clk = FUNC_8(&VAR_8->dev, ((void*)0));
  if (FUNC_0(VAR_10->clk)) {
   VAR_12 = FUNC_1(VAR_10->clk);
   if (VAR_12 != -VAR_2)
    FUNC_7(&VAR_8->dev, "Can't get bus clk: %d\n",
     VAR_12);
   return VAR_12;
  }
 }

 VAR_13 = FUNC_11(VAR_8->dev.of_node,
        "clocks", "#clock-cells");
 if (VAR_13 == 2)
  VAR_10->pclk = FUNC_8(&VAR_8->dev, "pclk");
 else
  VAR_10->pclk = VAR_10->clk;

 if (FUNC_0(VAR_10->pclk)) {
  VAR_12 = FUNC_1(VAR_10->pclk);
  if (VAR_12 != -VAR_2)
   FUNC_7(&VAR_8->dev, "Can't get APB clk: %d\n", VAR_12);
  return VAR_12;
 }

 VAR_12 = FUNC_5(VAR_10->clk);
 if (VAR_12) {
  FUNC_7(&VAR_8->dev, "Can't prepare enable bus clk: %d\n", VAR_12);
  return VAR_12;
 }

 VAR_12 = FUNC_4(VAR_10->pclk);
 if (VAR_12) {
  FUNC_7(&VAR_8->dev, "Can't prepare APB clk: %d\n", VAR_12);
  goto err_clk;
 }

 FUNC_14(VAR_8, VAR_10);

 VAR_10->data = VAR_9->data;
 VAR_10->chip.dev = &VAR_8->dev;
 VAR_10->chip.ops = &VAR_7;
 VAR_10->chip.base = -1;
 VAR_10->chip.npwm = 1;

 if (VAR_10->data->supports_polarity) {
  VAR_10->chip.of_xlate = VAR_5;
  VAR_10->chip.of_pwm_n_cells = 3;
 }

 VAR_12 = FUNC_16(&VAR_10->chip);
 if (VAR_12 < 0) {
  FUNC_6(VAR_10->clk);
  FUNC_7(&VAR_8->dev, "pwmchip_add() failed: %d\n", VAR_12);
  goto err_pclk;
 }


 if (!FUNC_15(VAR_10->chip.pwms))
  FUNC_2(VAR_10->clk);

 return 0;

err_pclk:
 FUNC_6(VAR_10->pclk);
err_clk:
 FUNC_3(VAR_10->clk);

 return VAR_12;
}
