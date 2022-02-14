
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int status; int timeout; int parent; int max_hw_heartbeat_ms; int min_hw_heartbeat_ms; int * ops; int * info; } ;
struct wdtbd70528 {TYPE_1__ wdt; struct rohm_regmap_dev* mfd; int regmap; TYPE_3__* dev; } ;
struct rohm_regmap_dev {int regmap; } ;
struct TYPE_10__ {int parent; } ;
struct platform_device {TYPE_3__ dev; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct rohm_regmap_dev*) ;
 int VAR_10 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (struct rohm_regmap_dev*) ;
 int FUNC_3 (TYPE_3__*,char*) ;
 int FUNC_4 (TYPE_3__*,char*,...) ;
 struct rohm_regmap_dev* FUNC_5 (int ) ;
 struct wdtbd70528* FUNC_6 (TYPE_3__*,int,int ) ;
 int FUNC_7 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_8 (int ,int ,unsigned int*) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (TYPE_1__*,int ,int ) ;
 int FUNC_11 (TYPE_1__*,struct wdtbd70528*) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_11)
{
 struct rohm_regmap_dev *VAR_12;
 struct wdtbd70528 *VAR_13;
 int VAR_14;
 unsigned int VAR_15;

 VAR_12 = FUNC_5(VAR_11->dev.parent);
 if (!VAR_12) {
  FUNC_4(&VAR_11->dev, "No MFD driver data\n");
  return -VAR_3;
 }
 VAR_13 = FUNC_6(&VAR_11->dev, sizeof(*VAR_13), VAR_5);
 if (!VAR_13)
  return -VAR_4;

 VAR_13->regmap = VAR_12->regmap;
 VAR_13->mfd = VAR_12;
 VAR_13->dev = &VAR_11->dev;

 VAR_13->wdt.info = &VAR_9;
 VAR_13->wdt.ops = &VAR_10;
 VAR_13->wdt.min_hw_heartbeat_ms = VAR_8;
 VAR_13->wdt.max_hw_heartbeat_ms = VAR_7;
 VAR_13->wdt.parent = VAR_11->dev.parent;
 VAR_13->wdt.timeout = VAR_2;
 FUNC_11(&VAR_13->wdt, VAR_13);
 FUNC_10(&VAR_13->wdt, 0, VAR_11->dev.parent);

 VAR_14 = FUNC_1(&VAR_13->wdt, VAR_13->wdt.timeout);
 if (VAR_14) {
  FUNC_4(&VAR_11->dev, "Failed to set the watchdog timeout\n");
  return VAR_14;
 }

 FUNC_0(VAR_13->mfd);
 VAR_14 = FUNC_8(VAR_13->regmap, VAR_1, &VAR_15);
 FUNC_2(VAR_13->mfd);

 if (VAR_14) {
  FUNC_4(&VAR_11->dev, "Failed to get the watchdog state\n");
  return VAR_14;
 }
 if (VAR_15 & VAR_0) {
  FUNC_3(&VAR_11->dev, "watchdog was running during probe\n");
  FUNC_9(VAR_6, &VAR_13->wdt.status);
 }

 VAR_14 = FUNC_7(&VAR_11->dev, &VAR_13->wdt);
 if (VAR_14 < 0)
  FUNC_4(&VAR_11->dev, "watchdog registration failed: %d\n", VAR_14);

 return VAR_14;
}
