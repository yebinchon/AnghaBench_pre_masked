
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int min_timeout; int timeout; struct device* parent; int max_timeout; int * ops; int * info; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct davinci_wdt_device {int base; struct watchdog_device wdd; int clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,char*,int ) ;
 int FUNC_5 (struct device*,int ,int ) ;
 int FUNC_6 (struct device*,int *) ;
 struct davinci_wdt_device* FUNC_7 (struct device*,int,int ) ;
 int FUNC_8 (struct platform_device*,int ) ;
 int FUNC_9 (struct device*,struct watchdog_device*) ;
 int VAR_8 ;
 int FUNC_10 (struct platform_device*,struct davinci_wdt_device*) ;
 int FUNC_11 (struct watchdog_device*,int ,struct device*) ;
 int FUNC_12 (struct watchdog_device*,struct davinci_wdt_device*) ;
 int FUNC_13 (struct watchdog_device*,int) ;
 int FUNC_14 (struct watchdog_device*,int) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_9)
{
 int VAR_10 = 0;
 struct device *VAR_11 = &VAR_9->dev;
 struct watchdog_device *VAR_12;
 struct davinci_wdt_device *VAR_13;

 VAR_13 = FUNC_7(VAR_11, sizeof(*VAR_13), VAR_3);
 if (!VAR_13)
  return -VAR_1;

 VAR_13->clk = FUNC_6(VAR_11, ((void*)0));

 if (FUNC_0(VAR_13->clk)) {
  if (FUNC_1(VAR_13->clk) != -VAR_2)
   FUNC_3(VAR_11, "failed to get clock node\n");
  return FUNC_1(VAR_13->clk);
 }

 VAR_10 = FUNC_2(VAR_13->clk);
 if (VAR_10) {
  FUNC_3(VAR_11, "failed to prepare clock\n");
  return VAR_10;
 }
 VAR_10 = FUNC_5(VAR_11, VAR_5,
           VAR_13->clk);
 if (VAR_10)
  return VAR_10;

 FUNC_10(VAR_9, VAR_13);

 VAR_12 = &VAR_13->wdd;
 VAR_12->info = &VAR_6;
 VAR_12->ops = &VAR_7;
 VAR_12->min_timeout = 1;
 VAR_12->max_timeout = VAR_4;
 VAR_12->timeout = VAR_0;
 VAR_12->parent = VAR_11;

 FUNC_11(VAR_12, VAR_8, VAR_11);

 FUNC_4(VAR_11, "heartbeat %d sec\n", VAR_12->timeout);

 FUNC_12(VAR_12, VAR_13);
 FUNC_13(VAR_12, 1);
 FUNC_14(VAR_12, 128);

 VAR_13->base = FUNC_8(VAR_9, 0);
 if (FUNC_0(VAR_13->base))
  return FUNC_1(VAR_13->base);

 return FUNC_9(VAR_11, VAR_12);
}
