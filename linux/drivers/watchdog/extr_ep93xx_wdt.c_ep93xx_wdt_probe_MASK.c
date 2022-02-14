
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int min_timeout; int max_hw_heartbeat_ms; int timeout; struct device* parent; int * ops; int * info; int bootstatus; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct ep93xx_wdt_priv {struct watchdog_device wdd; scalar_t__ mmio; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct device*,char*,char*) ;
 struct ep93xx_wdt_priv* FUNC_3 (struct device*,int,int ) ;
 scalar_t__ FUNC_4 (struct platform_device*,int ) ;
 int FUNC_5 (struct device*,struct watchdog_device*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned long FUNC_6 (scalar_t__) ;
 int VAR_8 ;
 int FUNC_7 (struct watchdog_device*,int ,struct device*) ;
 int FUNC_8 (struct watchdog_device*,struct ep93xx_wdt_priv*) ;
 int FUNC_9 (struct watchdog_device*,int ) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_9)
{
 struct device *VAR_10 = &VAR_9->dev;
 struct ep93xx_wdt_priv *VAR_11;
 struct watchdog_device *VAR_12;
 unsigned long VAR_13;
 int VAR_14;

 VAR_11 = FUNC_3(VAR_10, sizeof(*VAR_11), VAR_2);
 if (!VAR_11)
  return -VAR_0;

 VAR_11->mmio = FUNC_4(VAR_9, 0);
 if (FUNC_0(VAR_11->mmio))
  return FUNC_1(VAR_11->mmio);

 VAR_13 = FUNC_6(VAR_11->mmio + VAR_1);

 VAR_12 = &VAR_11->wdd;
 VAR_12->bootstatus = (VAR_13 & 0x01) ? VAR_3 : 0;
 VAR_12->info = &VAR_5;
 VAR_12->ops = &VAR_6;
 VAR_12->min_timeout = 1;
 VAR_12->max_hw_heartbeat_ms = 200;
 VAR_12->parent = VAR_10;

 FUNC_9(VAR_12, VAR_7);

 VAR_12->timeout = VAR_4;
 FUNC_7(VAR_12, VAR_8, VAR_10);

 FUNC_8(VAR_12, VAR_11);

 VAR_14 = FUNC_5(VAR_10, VAR_12);
 if (VAR_14)
  return VAR_14;

 FUNC_2(VAR_10, "EP93XX watchdog driver %s\n",
   (VAR_13 & 0x08) ? " (nCS1 disable detected)" : "");

 return 0;
}
