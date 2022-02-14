
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct watchdog_device {int min_timeout; int max_timeout; int max_hw_heartbeat_ms; int timeout; int status; int * ops; int * info; } ;
struct device {int parent; } ;
struct platform_device {struct device dev; } ;
struct max77620_wdt {struct device* dev; int rmap; struct watchdog_device wdt_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (int ,int *) ;
 struct max77620_wdt* FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (struct device*,struct watchdog_device*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (struct platform_device*,struct max77620_wdt*) ;
 int FUNC_5 (int ,int ,unsigned int*) ;
 int FUNC_6 (int ,int ,int,int) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (struct watchdog_device*,struct max77620_wdt*) ;
 int FUNC_9 (struct watchdog_device*,int ) ;
 int FUNC_10 (struct watchdog_device*) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_14)
{
 struct device *VAR_15 = &VAR_14->dev;
 struct max77620_wdt *VAR_16;
 struct watchdog_device *VAR_17;
 unsigned int VAR_18;
 int VAR_19;

 VAR_16 = FUNC_2(VAR_15, sizeof(*VAR_16), VAR_2);
 if (!VAR_16)
  return -VAR_1;

 VAR_16->dev = VAR_15;
 VAR_16->rmap = FUNC_1(VAR_15->parent, ((void*)0));
 if (!VAR_16->rmap) {
  FUNC_0(VAR_16->dev, "Failed to get parent regmap\n");
  return -VAR_0;
 }

 VAR_17 = &VAR_16->wdt_dev;
 VAR_17->info = &VAR_11;
 VAR_17->ops = &VAR_12;
 VAR_17->min_timeout = 2;
 VAR_17->max_timeout = 128;
 VAR_17->max_hw_heartbeat_ms = 128 * 1000;

 FUNC_4(VAR_14, VAR_16);


 VAR_19 = FUNC_6(VAR_16->rmap, VAR_5,
     VAR_3,
     VAR_3);
 if (VAR_19 < 0) {
  FUNC_0(VAR_16->dev, "Failed to set WD_RST_WK: %d\n", VAR_19);
  return VAR_19;
 }


 VAR_19 = FUNC_6(VAR_16->rmap, VAR_4,
     VAR_8 | VAR_9,
     VAR_8 | VAR_9);
 if (VAR_19 < 0) {
  FUNC_0(VAR_16->dev, "Failed to set WDT OFF mode: %d\n", VAR_19);
  return VAR_19;
 }


 VAR_19 = FUNC_5(VAR_16->rmap, VAR_4, &VAR_18);
 if (VAR_19 < 0) {
  FUNC_0(VAR_16->dev, "Failed to read WDT CFG register: %d\n", VAR_19);
  return VAR_19;
 }

 switch (VAR_18 & VAR_6) {
 case 129:
  VAR_17->timeout = 2;
  break;
 case 130:
  VAR_17->timeout = 16;
  break;
 case 128:
  VAR_17->timeout = 64;
  break;
 default:
  VAR_17->timeout = 128;
  break;
 }

 if (VAR_18 & VAR_7)
  FUNC_7(VAR_10, &VAR_17->status);

 FUNC_9(VAR_17, VAR_13);
 FUNC_8(VAR_17, VAR_16);

 FUNC_10(VAR_17);
 return FUNC_3(VAR_15, VAR_17);
}
