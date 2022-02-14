
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int u64 ;
struct resource {int dummy; } ;
struct TYPE_18__ {int of_node; } ;
struct platform_device {TYPE_3__ dev; } ;
struct of_device_id {TYPE_1__* data; } ;
struct TYPE_17__ {int base; int npwm; int * ops; TYPE_3__* dev; } ;
struct img_pwm_chip {int max_period_ns; int min_period_ns; TYPE_2__ chip; TYPE_1__* data; void* pwm_clk; void* sys_clk; void* periph_regs; void* base; TYPE_3__* dev; } ;
struct TYPE_16__ {int max_timebase; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (void*) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (void*) ;
 unsigned long FUNC_2 (void*) ;
 int FUNC_3 (TYPE_3__*,char*,...) ;
 void* FUNC_4 (TYPE_3__*,char*) ;
 void* FUNC_5 (TYPE_3__*,struct resource*) ;
 struct img_pwm_chip* FUNC_6 (TYPE_3__*,int,int ) ;
 int FUNC_7 (int,unsigned long) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*) ;
 struct of_device_id* FUNC_10 (int ,TYPE_3__*) ;
 struct resource* FUNC_11 (struct platform_device*,int ,int ) ;
 int FUNC_12 (struct platform_device*,struct img_pwm_chip*) ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (TYPE_3__*) ;
 int FUNC_16 (TYPE_3__*) ;
 int FUNC_17 (TYPE_3__*,int ) ;
 int FUNC_18 (TYPE_3__*) ;
 int FUNC_19 (TYPE_2__*) ;
 void* FUNC_20 (int ,char*) ;

__attribute__((used)) static int FUNC_21(struct platform_device *VAR_11)
{
 int VAR_12;
 u64 VAR_13;
 unsigned long VAR_14;
 struct resource *VAR_15;
 struct img_pwm_chip *VAR_16;
 const struct of_device_id *VAR_17;

 VAR_16 = FUNC_6(&VAR_11->dev, sizeof(*VAR_16), VAR_3);
 if (!VAR_16)
  return -VAR_2;

 VAR_16->dev = &VAR_11->dev;

 VAR_15 = FUNC_11(VAR_11, VAR_6, 0);
 VAR_16->base = FUNC_5(&VAR_11->dev, VAR_15);
 if (FUNC_0(VAR_16->base))
  return FUNC_1(VAR_16->base);

 VAR_17 = FUNC_10(VAR_9, &VAR_11->dev);
 if (!VAR_17)
  return -VAR_1;
 VAR_16->data = VAR_17->data;

 VAR_16->periph_regs = FUNC_20(VAR_11->dev.of_node,
          "img,cr-periph");
 if (FUNC_0(VAR_16->periph_regs))
  return FUNC_1(VAR_16->periph_regs);

 VAR_16->sys_clk = FUNC_4(&VAR_11->dev, "sys");
 if (FUNC_0(VAR_16->sys_clk)) {
  FUNC_3(&VAR_11->dev, "failed to get system clock\n");
  return FUNC_1(VAR_16->sys_clk);
 }

 VAR_16->pwm_clk = FUNC_4(&VAR_11->dev, "pwm");
 if (FUNC_0(VAR_16->pwm_clk)) {
  FUNC_3(&VAR_11->dev, "failed to get pwm clock\n");
  return FUNC_1(VAR_16->pwm_clk);
 }

 FUNC_17(&VAR_11->dev, VAR_5);
 FUNC_18(&VAR_11->dev);
 FUNC_15(&VAR_11->dev);
 if (!FUNC_16(&VAR_11->dev)) {
  VAR_12 = FUNC_8(&VAR_11->dev);
  if (VAR_12)
   goto err_pm_disable;
 }

 VAR_14 = FUNC_2(VAR_16->pwm_clk);
 if (!VAR_14) {
  FUNC_3(&VAR_11->dev, "pwm clock has no frequency\n");
  VAR_12 = -VAR_0;
  goto err_suspend;
 }


 VAR_13 = (u64)VAR_8 * 512 * VAR_16->data->max_timebase;
 FUNC_7(VAR_13, VAR_14);
 VAR_16->max_period_ns = VAR_13;

 VAR_13 = (u64)VAR_8 * VAR_7;
 FUNC_7(VAR_13, VAR_14);
 VAR_16->min_period_ns = VAR_13;

 VAR_16->chip.dev = &VAR_11->dev;
 VAR_16->chip.ops = &VAR_10;
 VAR_16->chip.base = -1;
 VAR_16->chip.npwm = VAR_4;

 VAR_12 = FUNC_19(&VAR_16->chip);
 if (VAR_12 < 0) {
  FUNC_3(&VAR_11->dev, "pwmchip_add failed: %d\n", VAR_12);
  goto err_suspend;
 }

 FUNC_12(VAR_11, VAR_16);
 return 0;

err_suspend:
 if (!FUNC_16(&VAR_11->dev))
  FUNC_9(&VAR_11->dev);
err_pm_disable:
 FUNC_13(&VAR_11->dev);
 FUNC_14(&VAR_11->dev);
 return VAR_12;
}
