
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int min_timeout; int max_hw_heartbeat_ms; int timeout; int status; struct device* parent; int * ops; int * info; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct dw_wdt {scalar_t__ rate; int clk; struct watchdog_device wdd; int rst; int regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct device*,int *) ;
 struct dw_wdt* FUNC_6 (struct device*,int,int ) ;
 int FUNC_7 (struct platform_device*,int ) ;
 int FUNC_8 (struct device*,int *) ;
 int FUNC_9 (struct dw_wdt*) ;
 int VAR_6 ;
 scalar_t__ FUNC_10 (struct dw_wdt*) ;
 int VAR_7 ;
 int FUNC_11 (struct dw_wdt*,int ) ;
 int VAR_8 ;
 int FUNC_12 (struct platform_device*,struct dw_wdt*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int *) ;
 int FUNC_15 (struct watchdog_device*,int ,struct device*) ;
 int FUNC_16 (struct watchdog_device*) ;
 int FUNC_17 (struct watchdog_device*,struct dw_wdt*) ;
 int FUNC_18 (struct watchdog_device*,int ) ;
 int FUNC_19 (struct watchdog_device*,int) ;

__attribute__((used)) static int FUNC_20(struct platform_device *VAR_9)
{
 struct device *VAR_10 = &VAR_9->dev;
 struct watchdog_device *VAR_11;
 struct dw_wdt *VAR_12;
 int VAR_13;

 VAR_12 = FUNC_6(VAR_10, sizeof(*VAR_12), VAR_4);
 if (!VAR_12)
  return -VAR_3;

 VAR_12->regs = FUNC_7(VAR_9, 0);
 if (FUNC_0(VAR_12->regs))
  return FUNC_1(VAR_12->regs);

 VAR_12->clk = FUNC_5(VAR_10, ((void*)0));
 if (FUNC_0(VAR_12->clk))
  return FUNC_1(VAR_12->clk);

 VAR_13 = FUNC_4(VAR_12->clk);
 if (VAR_13)
  return VAR_13;

 VAR_12->rate = FUNC_3(VAR_12->clk);
 if (VAR_12->rate == 0) {
  VAR_13 = -VAR_2;
  goto out_disable_clk;
 }

 VAR_12->rst = FUNC_8(&VAR_9->dev, ((void*)0));
 if (FUNC_0(VAR_12->rst)) {
  VAR_13 = FUNC_1(VAR_12->rst);
  goto out_disable_clk;
 }

 FUNC_13(VAR_12->rst);

 VAR_11 = &VAR_12->wdd;
 VAR_11->info = &VAR_6;
 VAR_11->ops = &VAR_7;
 VAR_11->min_timeout = 1;
 VAR_11->max_hw_heartbeat_ms =
  FUNC_11(VAR_12, VAR_1) * 1000;
 VAR_11->parent = VAR_10;

 FUNC_17(VAR_11, VAR_12);
 FUNC_18(VAR_11, VAR_8);
 FUNC_15(VAR_11, 0, VAR_10);






 if (FUNC_10(VAR_12)) {
  VAR_11->timeout = FUNC_9(VAR_12);
  FUNC_14(VAR_5, &VAR_11->status);
 } else {
  VAR_11->timeout = VAR_0;
  FUNC_15(VAR_11, 0, VAR_10);
 }

 FUNC_12(VAR_9, VAR_12);

 FUNC_19(VAR_11, 128);

 VAR_13 = FUNC_16(VAR_11);
 if (VAR_13)
  goto out_disable_clk;

 return 0;

out_disable_clk:
 FUNC_2(VAR_12->clk);
 return VAR_13;
}
