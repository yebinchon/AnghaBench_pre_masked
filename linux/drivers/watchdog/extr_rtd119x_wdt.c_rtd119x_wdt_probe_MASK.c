
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int timeout; int max_timeout; int min_timeout; struct device* parent; int * ops; int * info; } ;
struct rtd119x_watchdog_device {TYPE_1__ wdt_dev; scalar_t__ base; scalar_t__ clk; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct device*,int ,scalar_t__) ;
 scalar_t__ FUNC_5 (struct device*,int *) ;
 struct rtd119x_watchdog_device* FUNC_6 (struct device*,int,int ) ;
 scalar_t__ FUNC_7 (struct platform_device*,int ) ;
 int FUNC_8 (struct device*,TYPE_1__*) ;
 int FUNC_9 (struct platform_device*,struct rtd119x_watchdog_device*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_10 (TYPE_1__*,int) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*,struct rtd119x_watchdog_device*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_7)
{
 struct device *VAR_8 = &VAR_7->dev;
 struct rtd119x_watchdog_device *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_6(VAR_8, sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->base = FUNC_7(VAR_7, 0);
 if (FUNC_0(VAR_9->base))
  return FUNC_1(VAR_9->base);

 VAR_9->clk = FUNC_5(VAR_8, ((void*)0));
 if (FUNC_0(VAR_9->clk))
  return FUNC_1(VAR_9->clk);

 VAR_10 = FUNC_3(VAR_9->clk);
 if (VAR_10)
  return VAR_10;
 VAR_10 = FUNC_4(VAR_8, VAR_4,
           VAR_9->clk);
 if (VAR_10)
  return VAR_10;

 VAR_9->wdt_dev.info = &VAR_5;
 VAR_9->wdt_dev.ops = &VAR_6;
 VAR_9->wdt_dev.timeout = 120;
 VAR_9->wdt_dev.max_timeout = 0xffffffff / FUNC_2(VAR_9->clk);
 VAR_9->wdt_dev.min_timeout = 1;
 VAR_9->wdt_dev.parent = VAR_8;

 FUNC_13(&VAR_9->wdt_dev);
 FUNC_12(&VAR_9->wdt_dev, VAR_9);
 FUNC_9(VAR_7, VAR_9);

 FUNC_14(VAR_3, VAR_9->base + VAR_2);
 FUNC_10(&VAR_9->wdt_dev, VAR_9->wdt_dev.timeout);
 FUNC_11(&VAR_9->wdt_dev);

 return FUNC_8(VAR_8, &VAR_9->wdt_dev);
}
