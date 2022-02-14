
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_13__ {int base; int of_node; int owner; TYPE_5__* parent; int label; int set; int get; int direction_output; int direction_input; int free; int request; int ngpio; } ;
struct plgpio {int clk; TYPE_1__ chip; int lock; int csave_regs; int base; } ;
struct TYPE_14__ {int of_node; } ;
struct platform_device {TYPE_5__ dev; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_5__*,char*) ;
 int FUNC_6 (TYPE_5__*,char*) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (TYPE_5__*,char*) ;
 int FUNC_9 (TYPE_5__*,int *) ;
 int FUNC_10 (TYPE_5__*,struct resource*) ;
 int FUNC_11 (TYPE_5__*,int ,int,int ) ;
 struct plgpio* FUNC_12 (TYPE_5__*,int,int ) ;
 int FUNC_13 (TYPE_1__*,struct plgpio*) ;
 int FUNC_14 (TYPE_1__*,int *,int ,int ,int ) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*,int *,int,int ) ;
 int VAR_6 ;
 int FUNC_17 (struct platform_device*,int ) ;
 struct resource* FUNC_18 (struct platform_device*,int ,int ) ;
 int FUNC_19 (struct platform_device*,struct plgpio*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_20 (struct platform_device*,struct plgpio*) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_21 (int *) ;

__attribute__((used)) static int FUNC_22(struct platform_device *VAR_15)
{
 struct plgpio *VAR_16;
 struct resource *VAR_17;
 int VAR_18, VAR_19;

 VAR_16 = FUNC_12(&VAR_15->dev, sizeof(*VAR_16), VAR_1);
 if (!VAR_16)
  return -VAR_0;

 VAR_17 = FUNC_18(VAR_15, VAR_2, 0);
 VAR_16->base = FUNC_10(&VAR_15->dev, VAR_17);
 if (FUNC_1(VAR_16->base))
  return FUNC_2(VAR_16->base);

 VAR_18 = FUNC_20(VAR_15, VAR_16);
 if (VAR_18) {
  FUNC_5(&VAR_15->dev, "DT probe failed\n");
  return VAR_18;
 }

 VAR_16->clk = FUNC_9(&VAR_15->dev, ((void*)0));
 if (FUNC_1(VAR_16->clk))
  FUNC_8(&VAR_15->dev, "clk_get() failed, work without it\n");
 FUNC_19(VAR_15, VAR_16);
 FUNC_21(&VAR_16->lock);

 VAR_16->chip.base = -1;
 VAR_16->chip.request = VAR_13;
 VAR_16->chip.free = VAR_9;
 VAR_16->chip.direction_input = VAR_7;
 VAR_16->chip.direction_output = VAR_8;
 VAR_16->chip.get = VAR_10;
 VAR_16->chip.set = VAR_14;
 VAR_16->chip.label = FUNC_7(&VAR_15->dev);
 VAR_16->chip.parent = &VAR_15->dev;
 VAR_16->chip.owner = VAR_5;
 VAR_16->chip.of_node = VAR_15->dev.of_node;

 if (!FUNC_1(VAR_16->clk)) {
  VAR_18 = FUNC_3(VAR_16->clk);
  if (VAR_18) {
   FUNC_5(&VAR_15->dev, "clk prepare failed\n");
   return VAR_18;
  }
 }

 VAR_18 = FUNC_13(&VAR_16->chip, VAR_16);
 if (VAR_18) {
  FUNC_5(&VAR_15->dev, "unable to add gpio chip\n");
  goto unprepare_clk;
 }

 VAR_19 = FUNC_17(VAR_15, 0);
 if (VAR_19 < 0) {
  FUNC_6(&VAR_15->dev, "PLGPIO registered without IRQs\n");
  return 0;
 }

 VAR_18 = FUNC_14(&VAR_16->chip,
       &VAR_12,
       0,
       VAR_6,
       VAR_3);
 if (VAR_18) {
  FUNC_5(&VAR_15->dev, "failed to add irqchip to gpiochip\n");
  goto remove_gpiochip;
 }

 FUNC_16(&VAR_16->chip,
         &VAR_12,
         VAR_19,
         VAR_11);

 FUNC_6(&VAR_15->dev, "PLGPIO registered with IRQs\n");

 return 0;

remove_gpiochip:
 FUNC_6(&VAR_15->dev, "Remove gpiochip\n");
 FUNC_15(&VAR_16->chip);
unprepare_clk:
 if (!FUNC_1(VAR_16->clk))
  FUNC_4(VAR_16->clk);

 return VAR_18;
}
