
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct resource {int start; } ;
struct regmap {int dummy; } ;
struct TYPE_16__ {int of_node; } ;
struct platform_device {TYPE_5__ dev; } ;
struct TYPE_15__ {int min_timeout; int timeout; int status; TYPE_5__* parent; int max_timeout; int * ops; int * info; } ;
struct armada_37xx_watchdog {TYPE_1__ wdt; int clk_rate; struct regmap* clk; int reg; struct regmap* cpu_misc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (struct armada_37xx_watchdog*) ;
 int VAR_9 ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int VAR_10 ;
 int FUNC_4 (struct regmap*) ;
 int FUNC_5 (struct regmap*) ;
 int FUNC_6 (TYPE_5__*,char*,int ,char*) ;
 int FUNC_7 (TYPE_5__*,int ,struct regmap*) ;
 struct regmap* FUNC_8 (TYPE_5__*,int *) ;
 int FUNC_9 (TYPE_5__*,int ,int ) ;
 struct armada_37xx_watchdog* FUNC_10 (TYPE_5__*,int,int ) ;
 int FUNC_11 (TYPE_5__*,TYPE_1__*) ;
 scalar_t__ VAR_11 ;
 struct resource* FUNC_12 (struct platform_device*,int ,int ) ;
 int FUNC_13 (struct platform_device*,TYPE_1__*) ;
 int FUNC_14 (struct resource*) ;
 int FUNC_15 (int ,int *) ;
 struct regmap* FUNC_16 (int ,char*) ;
 int VAR_12 ;
 int FUNC_17 (TYPE_1__*,int ,TYPE_5__*) ;
 int FUNC_18 (TYPE_1__*,struct armada_37xx_watchdog*) ;
 int FUNC_19 (TYPE_1__*,scalar_t__) ;
 int FUNC_20 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_21(struct platform_device *VAR_13)
{
 struct armada_37xx_watchdog *VAR_14;
 struct resource *VAR_15;
 struct regmap *VAR_16;
 int VAR_17;

 VAR_14 = FUNC_10(&VAR_13->dev, sizeof(struct armada_37xx_watchdog),
      VAR_3);
 if (!VAR_14)
  return -VAR_2;

 VAR_14->wdt.info = &VAR_8;
 VAR_14->wdt.ops = &VAR_9;

 VAR_16 = FUNC_16(VAR_13->dev.of_node,
       "marvell,system-controller");
 if (FUNC_0(VAR_16))
  return FUNC_1(VAR_16);
 VAR_14->cpu_misc = VAR_16;

 VAR_15 = FUNC_12(VAR_13, VAR_4, 0);
 if (!VAR_15)
  return -VAR_1;
 VAR_14->reg = FUNC_9(&VAR_13->dev, VAR_15->start, FUNC_14(VAR_15));


 VAR_14->clk = FUNC_8(&VAR_13->dev, ((void*)0));
 if (FUNC_0(VAR_14->clk))
  return FUNC_1(VAR_14->clk);

 VAR_17 = FUNC_5(VAR_14->clk);
 if (VAR_17)
  return VAR_17;
 VAR_17 = FUNC_7(&VAR_13->dev,
           VAR_10, VAR_14->clk);
 if (VAR_17)
  return VAR_17;

 VAR_14->clk_rate = FUNC_4(VAR_14->clk);
 if (!VAR_14->clk_rate)
  return -VAR_0;






 VAR_14->wdt.min_timeout = 1;
 VAR_14->wdt.max_timeout = VAR_5;
 VAR_14->wdt.parent = &VAR_13->dev;


 VAR_14->wdt.timeout = VAR_6;
 FUNC_17(&VAR_14->wdt, VAR_12, &VAR_13->dev);

 FUNC_13(VAR_13, &VAR_14->wdt);
 FUNC_18(&VAR_14->wdt, VAR_14);

 FUNC_3(&VAR_14->wdt, VAR_14->wdt.timeout);

 if (FUNC_2(VAR_14))
  FUNC_15(VAR_7, &VAR_14->wdt.status);

 FUNC_19(&VAR_14->wdt, VAR_11);
 FUNC_20(&VAR_14->wdt);
 VAR_17 = FUNC_11(&VAR_13->dev, &VAR_14->wdt);
 if (VAR_17)
  return VAR_17;

 FUNC_6(&VAR_13->dev, "Initial timeout %d sec%s\n",
   VAR_14->wdt.timeout, VAR_11 ? ", nowayout" : "");

 return 0;
}
