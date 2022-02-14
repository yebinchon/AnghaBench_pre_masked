
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
struct ecap_pwm_chip {TYPE_1__ chip; struct clk* mmio_base; int clk_rate; } ;
struct device_node {int dummy; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 int FUNC_2 (struct clk*) ;
 int FUNC_3 (TYPE_2__*,char*,...) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 struct clk* FUNC_5 (TYPE_2__*,char*) ;
 struct clk* FUNC_6 (TYPE_2__*,struct resource*) ;
 struct ecap_pwm_chip* FUNC_7 (TYPE_2__*,int,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_8 (struct device_node*,char*) ;
 int VAR_5 ;
 struct resource* FUNC_9 (struct platform_device*,int ,int ) ;
 int FUNC_10 (struct platform_device*,struct ecap_pwm_chip*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_6)
{
 struct device_node *VAR_7 = VAR_6->dev.of_node;
 struct ecap_pwm_chip *VAR_8;
 struct resource *VAR_9;
 struct clk *VAR_10;
 int VAR_11;

 VAR_8 = FUNC_7(&VAR_6->dev, sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_10 = FUNC_5(&VAR_6->dev, "fck");
 if (FUNC_0(VAR_10)) {
  if (FUNC_8(VAR_7, "ti,am33xx-ecap")) {
   FUNC_4(&VAR_6->dev, "Binding is obsolete.\n");
   VAR_10 = FUNC_5(VAR_6->dev.parent, "fck");
  }
 }

 if (FUNC_0(VAR_10)) {
  FUNC_3(&VAR_6->dev, "failed to get clock\n");
  return FUNC_1(VAR_10);
 }

 VAR_8->clk_rate = FUNC_2(VAR_10);
 if (!VAR_8->clk_rate) {
  FUNC_3(&VAR_6->dev, "failed to get clock rate\n");
  return -VAR_0;
 }

 VAR_8->chip.dev = &VAR_6->dev;
 VAR_8->chip.ops = &VAR_4;
 VAR_8->chip.of_xlate = VAR_5;
 VAR_8->chip.of_pwm_n_cells = 3;
 VAR_8->chip.base = -1;
 VAR_8->chip.npwm = 1;

 VAR_9 = FUNC_9(VAR_6, VAR_3, 0);
 VAR_8->mmio_base = FUNC_6(&VAR_6->dev, VAR_9);
 if (FUNC_0(VAR_8->mmio_base))
  return FUNC_1(VAR_8->mmio_base);

 VAR_11 = FUNC_12(&VAR_8->chip);
 if (VAR_11 < 0) {
  FUNC_3(&VAR_6->dev, "pwmchip_add() failed: %d\n", VAR_11);
  return VAR_11;
 }

 FUNC_10(VAR_6, VAR_8);
 FUNC_11(&VAR_6->dev);

 return 0;
}
