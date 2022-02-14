
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_9__ {struct TYPE_9__* parent; struct device_node* of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_8__ {int of_pwm_n_cells; int base; int npwm; int of_xlate; int * ops; TYPE_2__* dev; } ;
struct ehrpwm_pwm_chip {struct clk* tbclk; TYPE_1__ chip; struct clk* mmio_base; int clk_rate; } ;
struct device_node {int dummy; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int VAR_4 ;
 int FUNC_1 (struct clk*) ;
 int FUNC_2 (struct clk*) ;
 int FUNC_3 (struct clk*) ;
 int FUNC_4 (struct clk*) ;
 int FUNC_5 (TYPE_2__*,char*,...) ;
 int FUNC_6 (TYPE_2__*,char*) ;
 void* FUNC_7 (TYPE_2__*,char*) ;
 struct clk* FUNC_8 (TYPE_2__*,struct resource*) ;
 struct ehrpwm_pwm_chip* FUNC_9 (TYPE_2__*,int,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_10 (struct device_node*,char*) ;
 int VAR_6 ;
 struct resource* FUNC_11 (struct platform_device*,int ,int ) ;
 int FUNC_12 (struct platform_device*,struct ehrpwm_pwm_chip*) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_7)
{
 struct device_node *VAR_8 = VAR_7->dev.of_node;
 struct ehrpwm_pwm_chip *VAR_9;
 struct resource *VAR_10;
 struct clk *VAR_11;
 int VAR_12;

 VAR_9 = FUNC_9(&VAR_7->dev, sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_11 = FUNC_7(&VAR_7->dev, "fck");
 if (FUNC_0(VAR_11)) {
  if (FUNC_10(VAR_8, "ti,am33xx-ecap")) {
   FUNC_6(&VAR_7->dev, "Binding is obsolete.\n");
   VAR_11 = FUNC_7(VAR_7->dev.parent, "fck");
  }
 }

 if (FUNC_0(VAR_11)) {
  FUNC_5(&VAR_7->dev, "failed to get clock\n");
  return FUNC_1(VAR_11);
 }

 VAR_9->clk_rate = FUNC_2(VAR_11);
 if (!VAR_9->clk_rate) {
  FUNC_5(&VAR_7->dev, "failed to get clock rate\n");
  return -VAR_0;
 }

 VAR_9->chip.dev = &VAR_7->dev;
 VAR_9->chip.ops = &VAR_5;
 VAR_9->chip.of_xlate = VAR_6;
 VAR_9->chip.of_pwm_n_cells = 3;
 VAR_9->chip.base = -1;
 VAR_9->chip.npwm = VAR_4;

 VAR_10 = FUNC_11(VAR_7, VAR_3, 0);
 VAR_9->mmio_base = FUNC_8(&VAR_7->dev, VAR_10);
 if (FUNC_0(VAR_9->mmio_base))
  return FUNC_1(VAR_9->mmio_base);


 VAR_9->tbclk = FUNC_7(&VAR_7->dev, "tbclk");
 if (FUNC_0(VAR_9->tbclk)) {
  FUNC_5(&VAR_7->dev, "Failed to get tbclk\n");
  return FUNC_1(VAR_9->tbclk);
 }

 VAR_12 = FUNC_3(VAR_9->tbclk);
 if (VAR_12 < 0) {
  FUNC_5(&VAR_7->dev, "clk_prepare() failed: %d\n", VAR_12);
  return VAR_12;
 }

 VAR_12 = FUNC_14(&VAR_9->chip);
 if (VAR_12 < 0) {
  FUNC_5(&VAR_7->dev, "pwmchip_add() failed: %d\n", VAR_12);
  goto err_clk_unprepare;
 }

 FUNC_12(VAR_7, VAR_9);
 FUNC_13(&VAR_7->dev);

 return 0;

err_clk_unprepare:
 FUNC_4(VAR_9->tbclk);

 return VAR_12;
}
