
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct resource {int dummy; } ;
struct TYPE_10__ {int of_node; } ;
struct platform_device {TYPE_3__ dev; } ;
struct TYPE_9__ {int priority; int notifier_call; } ;
struct TYPE_8__ {int nr_resets; int of_node; int * ops; int owner; } ;
struct lpc18xx_rgu_data {int delay_us; void* clk_reg; void* clk_delay; TYPE_2__ restart_nb; TYPE_1__ rcdev; int lock; void* base; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (TYPE_3__*,char*) ;
 int FUNC_7 (TYPE_3__*,char*) ;
 void* FUNC_8 (TYPE_3__*,char*) ;
 void* FUNC_9 (TYPE_3__*,struct resource*) ;
 struct lpc18xx_rgu_data* FUNC_10 (TYPE_3__*,int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 struct resource* FUNC_11 (struct platform_device*,int ,int ) ;
 int FUNC_12 (struct platform_device*,struct lpc18xx_rgu_data*) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_7)
{
 struct lpc18xx_rgu_data *VAR_8;
 struct resource *VAR_9;
 u32 VAR_10, VAR_11;
 int VAR_12;

 VAR_8 = FUNC_10(&VAR_7->dev, sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_9 = FUNC_11(VAR_7, VAR_2, 0);
 VAR_8->base = FUNC_9(&VAR_7->dev, VAR_9);
 if (FUNC_1(VAR_8->base))
  return FUNC_2(VAR_8->base);

 VAR_8->clk_reg = FUNC_8(&VAR_7->dev, "reg");
 if (FUNC_1(VAR_8->clk_reg)) {
  FUNC_6(&VAR_7->dev, "reg clock not found\n");
  return FUNC_2(VAR_8->clk_reg);
 }

 VAR_8->clk_delay = FUNC_8(&VAR_7->dev, "delay");
 if (FUNC_1(VAR_8->clk_delay)) {
  FUNC_6(&VAR_7->dev, "delay clock not found\n");
  return FUNC_2(VAR_8->clk_delay);
 }

 VAR_12 = FUNC_5(VAR_8->clk_reg);
 if (VAR_12) {
  FUNC_6(&VAR_7->dev, "unable to enable reg clock\n");
  return VAR_12;
 }

 VAR_12 = FUNC_5(VAR_8->clk_delay);
 if (VAR_12) {
  FUNC_6(&VAR_7->dev, "unable to enable delay clock\n");
  goto dis_clk_reg;
 }

 VAR_10 = FUNC_4(VAR_8->clk_reg) / VAR_4;
 VAR_11 = FUNC_4(VAR_8->clk_delay) / VAR_4;
 if (VAR_10 == 0 || VAR_11 == 0)
  VAR_8->delay_us = 2;
 else
  VAR_8->delay_us = FUNC_0(VAR_10, VAR_11 * VAR_11);

 FUNC_15(&VAR_8->lock);

 VAR_8->rcdev.owner = VAR_3;
 VAR_8->rcdev.nr_resets = 64;
 VAR_8->rcdev.ops = &VAR_5;
 VAR_8->rcdev.of_node = VAR_7->dev.of_node;

 FUNC_12(VAR_7, VAR_8);

 VAR_12 = FUNC_14(&VAR_8->rcdev);
 if (VAR_12) {
  FUNC_6(&VAR_7->dev, "unable to register device\n");
  goto dis_clks;
 }

 VAR_8->restart_nb.priority = 192,
 VAR_8->restart_nb.notifier_call = VAR_6,
 VAR_12 = FUNC_13(&VAR_8->restart_nb);
 if (VAR_12)
  FUNC_7(&VAR_7->dev, "failed to register restart handler\n");

 return 0;

dis_clks:
 FUNC_3(VAR_8->clk_delay);
dis_clk_reg:
 FUNC_3(VAR_8->clk_reg);

 return VAR_12;
}
