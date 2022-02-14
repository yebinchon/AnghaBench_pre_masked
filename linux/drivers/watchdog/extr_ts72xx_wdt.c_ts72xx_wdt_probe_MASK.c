
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int min_timeout; int max_hw_heartbeat_ms; int timeout; struct device* parent; int * ops; int * info; } ;
struct ts72xx_wdt_priv {struct watchdog_device wdd; void* feed_reg; void* control_reg; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_2 ;
 int FUNC_2 (struct device*,char*) ;
 struct ts72xx_wdt_priv* FUNC_3 (struct device*,int,int ) ;
 void* FUNC_4 (struct platform_device*,int) ;
 int FUNC_5 (struct device*,struct watchdog_device*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (struct watchdog_device*,int ,struct device*) ;
 int FUNC_7 (struct watchdog_device*,struct ts72xx_wdt_priv*) ;
 int FUNC_8 (struct watchdog_device*,int ) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_7)
{
 struct device *VAR_8 = &VAR_7->dev;
 struct ts72xx_wdt_priv *VAR_9;
 struct watchdog_device *VAR_10;
 int VAR_11;

 VAR_9 = FUNC_3(VAR_8, sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->control_reg = FUNC_4(VAR_7, 0);
 if (FUNC_0(VAR_9->control_reg))
  return FUNC_1(VAR_9->control_reg);

 VAR_9->feed_reg = FUNC_4(VAR_7, 1);
 if (FUNC_0(VAR_9->feed_reg))
  return FUNC_1(VAR_9->feed_reg);

 VAR_10 = &VAR_9->wdd;
 VAR_10->info = &VAR_5;
 VAR_10->ops = &VAR_6;
 VAR_10->min_timeout = 1;
 VAR_10->max_hw_heartbeat_ms = 8000;
 VAR_10->parent = VAR_8;

 FUNC_8(VAR_10, VAR_3);

 VAR_10->timeout = VAR_2;
 FUNC_6(VAR_10, VAR_4, VAR_8);

 FUNC_7(VAR_10, VAR_9);

 VAR_11 = FUNC_5(VAR_8, VAR_10);
 if (VAR_11)
  return VAR_11;

 FUNC_2(VAR_8, "TS-72xx Watchdog driver\n");

 return 0;
}
