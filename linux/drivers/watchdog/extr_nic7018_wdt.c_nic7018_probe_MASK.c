
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {struct device* parent; int timeout; int max_timeout; int min_timeout; int * ops; int * info; } ;
struct resource {scalar_t__ start; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct nic7018_wdt {scalar_t__ io_base; struct watchdog_device wdd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (struct device*,char*,scalar_t__,int ,int ) ;
 int FUNC_1 (struct device*,char*) ;
 struct nic7018_wdt* FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (struct device*,scalar_t__,int ,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_4 (int ,scalar_t__) ;
 struct resource* FUNC_5 (struct platform_device*,int ,int ) ;
 int FUNC_6 (struct platform_device*,struct nic7018_wdt*) ;
 int FUNC_7 (struct resource*) ;
 int VAR_15 ;
 int FUNC_8 (struct watchdog_device*,int ,struct device*) ;
 int FUNC_9 (struct watchdog_device*) ;
 int FUNC_10 (struct watchdog_device*,struct nic7018_wdt*) ;
 int FUNC_11 (struct watchdog_device*,int ) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_16)
{
 struct device *VAR_17 = &VAR_16->dev;
 struct watchdog_device *VAR_18;
 struct nic7018_wdt *VAR_19;
 struct resource *VAR_20;
 int VAR_21;

 VAR_19 = FUNC_2(VAR_17, sizeof(*VAR_19), VAR_3);
 if (!VAR_19)
  return -VAR_2;

 FUNC_6(VAR_16, VAR_19);

 VAR_20 = FUNC_5(VAR_16, VAR_4, 0);
 if (!VAR_20) {
  FUNC_1(VAR_17, "missing IO resources\n");
  return -VAR_1;
 }

 if (!FUNC_3(VAR_17, VAR_20->start, FUNC_7(VAR_20),
     VAR_5)) {
  FUNC_1(VAR_17, "failed to get IO region\n");
  return -VAR_0;
 }

 VAR_19->io_base = VAR_20->start;
 VAR_18 = &VAR_19->wdd;
 VAR_18->info = &VAR_12;
 VAR_18->ops = &VAR_13;
 VAR_18->min_timeout = VAR_10;
 VAR_18->max_timeout = VAR_9;
 VAR_18->timeout = VAR_8;
 VAR_18->parent = VAR_17;

 FUNC_10(VAR_18, VAR_19);
 FUNC_11(VAR_18, VAR_14);
 FUNC_8(VAR_18, VAR_15, VAR_17);


 FUNC_4(VAR_7, VAR_19->io_base + VAR_11);

 VAR_21 = FUNC_9(VAR_18);
 if (VAR_21) {
  FUNC_4(VAR_6, VAR_19->io_base + VAR_11);
  return VAR_21;
 }

 FUNC_0(VAR_17, "io_base=0x%04X, timeout=%d, nowayout=%d\n",
  VAR_19->io_base, VAR_15, VAR_14);
 return 0;
}
