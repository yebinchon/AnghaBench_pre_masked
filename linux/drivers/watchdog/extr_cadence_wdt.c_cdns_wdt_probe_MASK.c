
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int timeout; struct device* parent; int max_timeout; int min_timeout; int * ops; int * info; } ;
struct device {int of_node; } ;
struct platform_device {int name; struct device dev; } ;
struct cdns_wdt {int regs; int io_lock; int ctrl_clksel; int prescaler; int clk; int rst; struct watchdog_device cdns_wdt_device; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct device*,char*,...) ;
 int FUNC_5 (struct device*,char*,int ,int ,char*) ;
 int FUNC_6 (struct device*,int ,int ) ;
 int FUNC_7 (struct device*,int *) ;
 struct cdns_wdt* FUNC_8 (struct device*,int,int ) ;
 int FUNC_9 (struct platform_device*,int ) ;
 int FUNC_10 (struct device*,int,int ,int ,int ,struct platform_device*) ;
 int FUNC_11 (struct device*,struct watchdog_device*) ;
 scalar_t__ VAR_14 ;
 int FUNC_12 (int ,char*) ;
 int FUNC_13 (struct platform_device*,int ) ;
 int FUNC_14 (struct platform_device*,struct cdns_wdt*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct watchdog_device*,int ,struct device*) ;
 int FUNC_17 (struct watchdog_device*,struct cdns_wdt*) ;
 int FUNC_18 (struct watchdog_device*,scalar_t__) ;
 int FUNC_19 (struct watchdog_device*) ;
 int FUNC_20 (struct watchdog_device*) ;
 int VAR_15 ;

__attribute__((used)) static int FUNC_21(struct platform_device *VAR_16)
{
 struct device *VAR_17 = &VAR_16->dev;
 int VAR_18, VAR_19;
 unsigned long VAR_20;
 struct cdns_wdt *VAR_21;
 struct watchdog_device *VAR_22;

 VAR_21 = FUNC_8(VAR_17, sizeof(*VAR_21), VAR_9);
 if (!VAR_21)
  return -VAR_8;

 VAR_22 = &VAR_21->cdns_wdt_device;
 VAR_22->info = &VAR_11;
 VAR_22->ops = &VAR_13;
 VAR_22->timeout = VAR_1;
 VAR_22->min_timeout = VAR_3;
 VAR_22->max_timeout = VAR_2;

 VAR_21->regs = FUNC_9(VAR_16, 0);
 if (FUNC_0(VAR_21->regs))
  return FUNC_1(VAR_21->regs);


 VAR_21->rst = FUNC_12(VAR_17->of_node, "reset-on-timeout");
 VAR_19 = FUNC_13(VAR_16, 0);
 if (!VAR_21->rst && VAR_19 >= 0) {
  VAR_18 = FUNC_10(VAR_17, VAR_19, VAR_12, 0,
           VAR_16->name, VAR_16);
  if (VAR_18) {
   FUNC_4(VAR_17,
    "cannot register interrupt handler err=%d\n",
    VAR_18);
   return VAR_18;
  }
 }


 VAR_22->parent = VAR_17;

 FUNC_16(VAR_22, VAR_15, VAR_17);
 FUNC_18(VAR_22, VAR_14);
 FUNC_19(VAR_22);
 FUNC_17(VAR_22, VAR_21);

 VAR_21->clk = FUNC_7(VAR_17, ((void*)0));
 if (FUNC_0(VAR_21->clk)) {
  FUNC_4(VAR_17, "input clock not found\n");
  return FUNC_1(VAR_21->clk);
 }

 VAR_18 = FUNC_3(VAR_21->clk);
 if (VAR_18) {
  FUNC_4(VAR_17, "unable to enable clock\n");
  return VAR_18;
 }
 VAR_18 = FUNC_6(VAR_17, VAR_10,
           VAR_21->clk);
 if (VAR_18)
  return VAR_18;

 VAR_20 = FUNC_2(VAR_21->clk);
 if (VAR_20 <= VAR_0) {
  VAR_21->prescaler = VAR_5;
  VAR_21->ctrl_clksel = VAR_7;
 } else {
  VAR_21->prescaler = VAR_4;
  VAR_21->ctrl_clksel = VAR_6;
 }

 FUNC_15(&VAR_21->io_lock);

 FUNC_19(VAR_22);
 FUNC_20(VAR_22);
 VAR_18 = FUNC_11(VAR_17, VAR_22);
 if (VAR_18)
  return VAR_18;
 FUNC_14(VAR_16, VAR_21);

 FUNC_5(VAR_17, "Xilinx Watchdog Timer at %p with timeout %ds%s\n",
   VAR_21->regs, VAR_22->timeout,
   VAR_14 ? ", nowayout" : "");

 return 0;
}
