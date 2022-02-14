
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct watchdog_device {int min_timeout; int timeout; struct device* parent; int max_timeout; int * ops; TYPE_2__* info; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct TYPE_4__ {int notifier_call; } ;
struct imx_sc_wdt_device {TYPE_1__ wdt_notifier; struct watchdog_device wdd; } ;
struct TYPE_5__ {int options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,int ,TYPE_1__*) ;
 struct imx_sc_wdt_device* FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (struct device*,struct watchdog_device*) ;
 int VAR_7 ;
 TYPE_2__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct platform_device*,struct imx_sc_wdt_device*) ;
 int FUNC_7 (struct watchdog_device*,int ,struct device*) ;
 int FUNC_8 (struct watchdog_device*) ;
 int FUNC_9 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_11)
{
 struct imx_sc_wdt_device *VAR_12;
 struct watchdog_device *VAR_13;
 struct device *VAR_14 = &VAR_11->dev;
 int VAR_15;

 VAR_12 = FUNC_2(VAR_14, sizeof(*VAR_12), VAR_2);
 if (!VAR_12)
  return -VAR_1;

 FUNC_6(VAR_11, VAR_12);

 VAR_13 = &VAR_12->wdd;
 VAR_13->info = &VAR_8;
 VAR_13->ops = &VAR_10;
 VAR_13->min_timeout = 1;
 VAR_13->max_timeout = VAR_3;
 VAR_13->parent = VAR_14;
 VAR_13->timeout = VAR_0;

 FUNC_7(VAR_13, 0, VAR_14);
 FUNC_8(VAR_13);
 FUNC_9(VAR_13);

 VAR_15 = FUNC_3(VAR_14, VAR_13);
 if (VAR_15)
  return VAR_15;

 VAR_15 = FUNC_4(VAR_4,
           VAR_5,
           1);
 if (VAR_15) {
  FUNC_0(VAR_14, "Enable irq failed, pretimeout NOT supported\n");
  return 0;
 }

 VAR_12->wdt_notifier.notifier_call = VAR_9;
 VAR_15 = FUNC_5(&VAR_12->wdt_notifier);
 if (VAR_15) {
  FUNC_4(VAR_4,
      VAR_5,
      0);
  FUNC_0(VAR_14,
    "Register irq notifier failed, pretimeout NOT supported\n");
  return 0;
 }

 VAR_15 = FUNC_1(VAR_14, VAR_7,
           &VAR_12->wdt_notifier);
 if (!VAR_15)
  VAR_8.options |= VAR_6;
 else
  FUNC_0(VAR_14, "Add action failed, pretimeout NOT supported\n");

 return 0;
}
