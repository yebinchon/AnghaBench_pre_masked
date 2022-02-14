
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int min_timeout; unsigned long max_hw_heartbeat_ms; struct device* parent; int timeout; int * ops; int * info; } ;
struct device {int dummy; } ;
struct platform_device {int name; struct device dev; } ;
struct ls1x_wdt_drvdata {unsigned long clk_rate; struct watchdog_device wdt; int clk; int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 unsigned long VAR_4 ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*,char*) ;
 int FUNC_6 (struct device*,int ,int ) ;
 int FUNC_7 (struct device*,int ) ;
 struct ls1x_wdt_drvdata* FUNC_8 (struct device*,int,int ) ;
 int FUNC_9 (struct platform_device*,int ) ;
 int FUNC_10 (struct device*,struct watchdog_device*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_11 (struct platform_device*,struct ls1x_wdt_drvdata*) ;
 int FUNC_12 (struct watchdog_device*,int ,struct device*) ;
 int FUNC_13 (struct watchdog_device*,struct ls1x_wdt_drvdata*) ;
 int FUNC_14 (struct watchdog_device*,int ) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_10)
{
 struct device *VAR_11 = &VAR_10->dev;
 struct ls1x_wdt_drvdata *VAR_12;
 struct watchdog_device *VAR_13;
 unsigned long VAR_14;
 int VAR_15;

 VAR_12 = FUNC_8(VAR_11, sizeof(*VAR_12), VAR_3);
 if (!VAR_12)
  return -VAR_2;

 VAR_12->base = FUNC_9(VAR_10, 0);
 if (FUNC_0(VAR_12->base))
  return FUNC_1(VAR_12->base);

 VAR_12->clk = FUNC_7(VAR_11, VAR_10->name);
 if (FUNC_0(VAR_12->clk))
  return FUNC_1(VAR_12->clk);

 VAR_15 = FUNC_3(VAR_12->clk);
 if (VAR_15) {
  FUNC_4(VAR_11, "clk enable failed\n");
  return VAR_15;
 }
 VAR_15 = FUNC_6(VAR_11, VAR_6,
           VAR_12->clk);
 if (VAR_15)
  return VAR_15;

 VAR_14 = FUNC_2(VAR_12->clk);
 if (!VAR_14)
  return -VAR_1;
 VAR_12->clk_rate = VAR_14;

 VAR_13 = &VAR_12->wdt;
 VAR_13->info = &VAR_7;
 VAR_13->ops = &VAR_8;
 VAR_13->timeout = VAR_0;
 VAR_13->min_timeout = 1;
 VAR_13->max_hw_heartbeat_ms = VAR_4 / VAR_14 * 1000;
 VAR_13->parent = VAR_11;

 FUNC_12(VAR_13, VAR_5, VAR_11);
 FUNC_14(VAR_13, VAR_9);
 FUNC_13(VAR_13, VAR_12);

 VAR_15 = FUNC_10(VAR_11, &VAR_12->wdt);
 if (VAR_15)
  return VAR_15;

 FUNC_11(VAR_10, VAR_12);

 FUNC_5(VAR_11, "Loongson1 Watchdog driver registered\n");

 return 0;
}
