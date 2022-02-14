
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int timeout; struct device* parent; int min_timeout; int max_timeout; int * ops; int * info; } ;
struct zx2967_wdt {TYPE_1__ wdt_device; struct reset_control* clock; struct reset_control* reg_base; } ;
struct reset_control {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct reset_control*) ;
 int FUNC_1 (struct reset_control*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct reset_control*) ;
 int FUNC_3 (struct reset_control*,int ) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*,char*,int ,int ) ;
 int FUNC_6 (struct device*,int ,struct reset_control*) ;
 struct reset_control* FUNC_7 (struct device*,int *) ;
 struct zx2967_wdt* FUNC_8 (struct device*,int,int ) ;
 struct reset_control* FUNC_9 (struct platform_device*,int ) ;
 struct reset_control* FUNC_10 (struct device*,int *) ;
 int FUNC_11 (struct device*,TYPE_1__*) ;
 int FUNC_12 (struct platform_device*,struct zx2967_wdt*) ;
 int FUNC_13 (struct reset_control*) ;
 int FUNC_14 (struct reset_control*) ;
 int FUNC_15 (TYPE_1__*,int ,struct device*) ;
 int FUNC_16 (TYPE_1__*,struct zx2967_wdt*) ;
 int FUNC_17 (TYPE_1__*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_18 (struct device*) ;

__attribute__((used)) static int FUNC_19(struct platform_device *VAR_10)
{
 struct device *VAR_11 = &VAR_10->dev;
 struct zx2967_wdt *VAR_12;
 int VAR_13;
 struct reset_control *VAR_14;

 VAR_12 = FUNC_8(VAR_11, sizeof(*VAR_12), VAR_1);
 if (!VAR_12)
  return -VAR_0;

 FUNC_12(VAR_10, VAR_12);

 VAR_12->wdt_device.info = &VAR_8;
 VAR_12->wdt_device.ops = &VAR_9;
 VAR_12->wdt_device.timeout = VAR_4;
 VAR_12->wdt_device.max_timeout = VAR_5;
 VAR_12->wdt_device.min_timeout = VAR_6;
 VAR_12->wdt_device.parent = VAR_11;

 VAR_12->reg_base = FUNC_9(VAR_10, 0);
 if (FUNC_0(VAR_12->reg_base))
  return FUNC_1(VAR_12->reg_base);

 FUNC_18(VAR_11);

 VAR_12->clock = FUNC_7(VAR_11, ((void*)0));
 if (FUNC_0(VAR_12->clock)) {
  FUNC_4(VAR_11, "failed to find watchdog clock source\n");
  return FUNC_1(VAR_12->clock);
 }

 VAR_13 = FUNC_2(VAR_12->clock);
 if (VAR_13 < 0) {
  FUNC_4(VAR_11, "failed to enable clock\n");
  return VAR_13;
 }
 VAR_13 = FUNC_6(VAR_11, VAR_7,
           VAR_12->clock);
 if (VAR_13)
  return VAR_13;
 FUNC_3(VAR_12->clock, VAR_3);

 VAR_14 = FUNC_10(VAR_11, ((void*)0));
 if (FUNC_0(VAR_14)) {
  FUNC_4(VAR_11, "failed to get rstc");
  return FUNC_1(VAR_14);
 }

 FUNC_13(VAR_14);
 FUNC_14(VAR_14);

 FUNC_16(&VAR_12->wdt_device, VAR_12);
 FUNC_15(&VAR_12->wdt_device,
   VAR_4, VAR_11);
 FUNC_17(&VAR_12->wdt_device, VAR_2);

 VAR_13 = FUNC_11(VAR_11, &VAR_12->wdt_device);
 if (VAR_13)
  return VAR_13;

 FUNC_5(VAR_11, "watchdog enabled (timeout=%d sec, nowayout=%d)",
   VAR_12->wdt_device.timeout, VAR_2);

 return 0;
}
