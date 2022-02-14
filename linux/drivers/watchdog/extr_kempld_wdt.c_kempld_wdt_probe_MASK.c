
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct watchdog_device {int timeout; int * ops; int * info; struct device* parent; } ;
struct device {int parent; } ;
struct platform_device {struct device dev; } ;
struct kempld_wdt_data {struct watchdog_device wdd; struct kempld_device_data* pld; } ;
struct kempld_device_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct kempld_device_data* FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct device*,char*) ;
 struct kempld_wdt_data* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (struct device*,struct watchdog_device*) ;
 int FUNC_5 (struct kempld_device_data*) ;
 int FUNC_6 (struct kempld_device_data*,int ) ;
 int FUNC_7 (struct kempld_device_data*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (struct watchdog_device*) ;
 int FUNC_9 (struct watchdog_device*,int ) ;
 int FUNC_10 (struct watchdog_device*,int ) ;
 int FUNC_11 (struct kempld_wdt_data*) ;
 int VAR_8 ;
 int FUNC_12 (struct platform_device*,struct kempld_wdt_data*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_13 (struct watchdog_device*,struct kempld_wdt_data*) ;
 int FUNC_14 (struct watchdog_device*,int) ;
 int FUNC_15 (struct watchdog_device*) ;
 int FUNC_16 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_11)
{
 struct kempld_device_data *VAR_12 = FUNC_0(VAR_11->dev.parent);
 struct kempld_wdt_data *VAR_13;
 struct device *VAR_14 = &VAR_11->dev;
 struct watchdog_device *VAR_15;
 u8 VAR_16;
 int VAR_17 = 0;

 VAR_13 = FUNC_3(VAR_14, sizeof(*VAR_13), VAR_1);
 if (!VAR_13)
  return -VAR_0;

 VAR_13->pld = VAR_12;
 VAR_15 = &VAR_13->wdd;
 VAR_15->parent = VAR_14;

 FUNC_5(VAR_12);
 VAR_16 = FUNC_6(VAR_12, VAR_2);
 FUNC_7(VAR_12);


 if (VAR_16 & (VAR_4 |
   VAR_5)) {
  if (!VAR_8)
   FUNC_2(VAR_14,
     "Forcing nowayout - watchdog lock enabled!\n");
  VAR_8 = 1;
 }

 VAR_15->info = &VAR_6;
 VAR_15->ops = &VAR_7;

 FUNC_13(VAR_15, VAR_13);
 FUNC_14(VAR_15, VAR_8);

 VAR_17 = FUNC_8(VAR_15);
 if (VAR_17)
  return VAR_17;

 FUNC_10(VAR_15, VAR_10);
 FUNC_9(VAR_15, VAR_9);


 if (VAR_16 & VAR_3) {

  FUNC_11(VAR_13);
  FUNC_1(VAR_14, "Watchdog was already enabled\n");
 }

 FUNC_12(VAR_11, VAR_13);
 FUNC_15(VAR_15);
 FUNC_16(VAR_15);
 VAR_17 = FUNC_4(VAR_14, VAR_15);
 if (VAR_17)
  return VAR_17;

 FUNC_1(VAR_14, "Watchdog registered with %ds timeout\n", VAR_15->timeout);

 return 0;
}
