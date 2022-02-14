
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int base; int npwm; int * ops; TYPE_2__* dev; } ;
struct spear_pwm_chip {scalar_t__ clk; TYPE_1__ chip; scalar_t__ mmio_base; } ;
struct resource {int dummy; } ;
struct TYPE_7__ {struct device_node* of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (TYPE_2__*,char*,int) ;
 scalar_t__ FUNC_7 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_8 (TYPE_2__*,struct resource*) ;
 struct spear_pwm_chip* FUNC_9 (TYPE_2__*,int,int ) ;
 scalar_t__ FUNC_10 (struct device_node*,char*) ;
 struct resource* FUNC_11 (struct platform_device*,int ,int ) ;
 int FUNC_12 (struct platform_device*,struct spear_pwm_chip*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (scalar_t__) ;
 int VAR_6 ;
 int FUNC_15 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_7)
{
 struct device_node *VAR_8 = VAR_7->dev.of_node;
 struct spear_pwm_chip *VAR_9;
 struct resource *VAR_10;
 int VAR_11;
 u32 VAR_12;

 VAR_9 = FUNC_9(&VAR_7->dev, sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_10 = FUNC_11(VAR_7, VAR_2, 0);
 VAR_9->mmio_base = FUNC_8(&VAR_7->dev, VAR_10);
 if (FUNC_0(VAR_9->mmio_base))
  return FUNC_1(VAR_9->mmio_base);

 VAR_9->clk = FUNC_7(&VAR_7->dev, ((void*)0));
 if (FUNC_0(VAR_9->clk))
  return FUNC_1(VAR_9->clk);

 FUNC_12(VAR_7, VAR_9);

 VAR_9->chip.dev = &VAR_7->dev;
 VAR_9->chip.ops = &VAR_6;
 VAR_9->chip.base = -1;
 VAR_9->chip.npwm = VAR_3;

 VAR_11 = FUNC_4(VAR_9->clk);
 if (VAR_11)
  return VAR_11;

 if (FUNC_10(VAR_8, "st,spear1340-pwm")) {
  VAR_11 = FUNC_3(VAR_9->clk);
  if (VAR_11) {
   FUNC_5(VAR_9->clk);
   return VAR_11;
  }




  VAR_12 = FUNC_14(VAR_9->mmio_base + VAR_4);
  VAR_12 |= VAR_5;
  FUNC_15(VAR_12, VAR_9->mmio_base + VAR_4);

  FUNC_2(VAR_9->clk);
 }

 VAR_11 = FUNC_13(&VAR_9->chip);
 if (VAR_11 < 0) {
  FUNC_5(VAR_9->clk);
  FUNC_6(&VAR_7->dev, "pwmchip_add() failed: %d\n", VAR_11);
 }

 return VAR_11;
}
