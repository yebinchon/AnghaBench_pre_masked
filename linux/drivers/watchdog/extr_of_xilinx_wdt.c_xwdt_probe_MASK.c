
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct watchdog_device {int timeout; struct device* parent; int * ops; int * info; } ;
struct xwdt_device {int wdt_interval; int * base; int * clk; int spinlock; struct watchdog_device xilinx_wdt_wdd; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct device*,char*) ;
 int FUNC_6 (struct device*,char*,int *,int) ;
 int FUNC_7 (struct device*,char*) ;
 int FUNC_8 (struct device*,int ,int *) ;
 int * FUNC_9 (struct device*,int *) ;
 struct xwdt_device* FUNC_10 (struct device*,int,int ) ;
 int * FUNC_11 (struct platform_device*,int ) ;
 int FUNC_12 (struct device*,struct watchdog_device*) ;
 int FUNC_13 (int ,char*,int*) ;
 int FUNC_14 (struct platform_device*,struct xwdt_device*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct watchdog_device*,struct xwdt_device*) ;
 int FUNC_17 (struct watchdog_device*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_18 (struct xwdt_device*) ;

__attribute__((used)) static int FUNC_19(struct platform_device *VAR_7)
{
 struct device *VAR_8 = &VAR_7->dev;
 int VAR_9;
 u32 VAR_10 = 0, VAR_11 = 0;
 struct xwdt_device *VAR_12;
 struct watchdog_device *VAR_13;

 VAR_12 = FUNC_10(VAR_8, sizeof(*VAR_12), VAR_2);
 if (!VAR_12)
  return -VAR_1;

 VAR_13 = &VAR_12->xilinx_wdt_wdd;
 VAR_13->info = &VAR_4;
 VAR_13->ops = &VAR_5;
 VAR_13->parent = VAR_8;

 VAR_12->base = FUNC_11(VAR_7, 0);
 if (FUNC_0(VAR_12->base))
  return FUNC_1(VAR_12->base);

 VAR_9 = FUNC_13(VAR_8->of_node, "xlnx,wdt-interval",
      &VAR_12->wdt_interval);
 if (VAR_9)
  FUNC_7(VAR_8, "Parameter \"xlnx,wdt-interval\" not found\n");

 VAR_9 = FUNC_13(VAR_8->of_node, "xlnx,wdt-enable-once",
      &VAR_11);
 if (VAR_9)
  FUNC_7(VAR_8,
    "Parameter \"xlnx,wdt-enable-once\" not found\n");

 FUNC_17(VAR_13, VAR_11);

 VAR_12->clk = FUNC_9(VAR_8, ((void*)0));
 if (FUNC_0(VAR_12->clk)) {
  if (FUNC_1(VAR_12->clk) != -VAR_0)
   return FUNC_1(VAR_12->clk);





  VAR_12->clk = ((void*)0);

  VAR_9 = FUNC_13(VAR_8->of_node, "clock-frequency",
       &VAR_10);
  if (VAR_9)
   FUNC_7(VAR_8,
     "The watchdog clock freq cannot be obtained\n");
 } else {
  VAR_10 = FUNC_3(VAR_12->clk);
 }





 if (VAR_10 && VAR_12->wdt_interval)
  VAR_13->timeout = 2 * ((1 << VAR_12->wdt_interval) /
       VAR_10);

 FUNC_15(&VAR_12->spinlock);
 FUNC_16(VAR_13, VAR_12);

 VAR_9 = FUNC_4(VAR_12->clk);
 if (VAR_9) {
  FUNC_5(VAR_8, "unable to enable clock\n");
  return VAR_9;
 }
 VAR_9 = FUNC_8(VAR_8, VAR_6,
          VAR_12->clk);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_18(VAR_12);
 if (VAR_9 == VAR_3) {
  FUNC_5(VAR_8, "SelfTest routine error\n");
  return VAR_9;
 }

 VAR_9 = FUNC_12(VAR_8, VAR_13);
 if (VAR_9)
  return VAR_9;

 FUNC_2(VAR_12->clk);

 FUNC_6(VAR_8, "Xilinx Watchdog Timer at %p with timeout %ds\n",
   VAR_12->base, VAR_13->timeout);

 FUNC_14(VAR_7, VAR_12);

 return 0;
}
