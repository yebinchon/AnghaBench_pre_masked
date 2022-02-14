
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int min_timeout; int timeout; struct device* parent; int max_timeout; int * ops; int * info; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct imx7ulp_wdt_device {int base; struct watchdog_device wdd; int clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,int ,int ) ;
 int FUNC_5 (struct device*,int *) ;
 struct imx7ulp_wdt_device* FUNC_6 (struct device*,int,int ) ;
 int FUNC_7 (struct platform_device*,int ) ;
 int FUNC_8 (struct device*,struct watchdog_device*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (int ,int) ;
 int VAR_7 ;
 int FUNC_10 (struct platform_device*,struct imx7ulp_wdt_device*) ;
 int FUNC_11 (struct watchdog_device*,int ,struct device*) ;
 int FUNC_12 (struct watchdog_device*,struct imx7ulp_wdt_device*) ;
 int FUNC_13 (struct watchdog_device*) ;
 int FUNC_14 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_8)
{
 struct imx7ulp_wdt_device *VAR_9;
 struct device *VAR_10 = &VAR_8->dev;
 struct watchdog_device *VAR_11;
 int VAR_12;

 VAR_9 = FUNC_6(VAR_10, sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 FUNC_10(VAR_8, VAR_9);

 VAR_9->base = FUNC_7(VAR_8, 0);
 if (FUNC_0(VAR_9->base))
  return FUNC_1(VAR_9->base);

 VAR_9->clk = FUNC_5(VAR_10, ((void*)0));
 if (FUNC_0(VAR_9->clk)) {
  FUNC_3(VAR_10, "Failed to get watchdog clock\n");
  return FUNC_1(VAR_9->clk);
 }

 VAR_12 = FUNC_2(VAR_9->clk);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_4(VAR_10, VAR_5, VAR_9->clk);
 if (VAR_12)
  return VAR_12;

 VAR_11 = &VAR_9->wdd;
 VAR_11->info = &VAR_6;
 VAR_11->ops = &VAR_7;
 VAR_11->min_timeout = 1;
 VAR_11->max_timeout = VAR_3;
 VAR_11->parent = VAR_10;
 VAR_11->timeout = VAR_0;

 FUNC_11(VAR_11, 0, VAR_10);
 FUNC_13(VAR_11);
 FUNC_14(VAR_11);
 FUNC_12(VAR_11, VAR_9);
 FUNC_9(VAR_9->base, VAR_11->timeout * VAR_4);

 return FUNC_8(VAR_10, VAR_11);
}
