
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct watchdog_device {int timeout; struct device* parent; int * ops; int * info; } ;
struct wm831x_wdt_drvdata {struct watchdog_device wdt; scalar_t__ update_gpio; struct wm831x* wm831x; int lock; } ;
struct wm831x_watchdog_pdata {int primary; int secondary; int software; scalar_t__ update_gpio; } ;
struct wm831x_pdata {struct wm831x_watchdog_pdata* watchdog; } ;
struct wm831x {int dev; } ;
struct device {int parent; } ;
struct platform_device {struct device dev; } ;
struct TYPE_3__ {int val; int time; } ;


 int FUNC_0 (TYPE_1__*) ;
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
 int VAR_11 ;
 int FUNC_1 (int ,char*,int) ;
 struct wm831x* FUNC_2 (int ) ;
 struct wm831x_pdata* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (struct device*,scalar_t__,int ,char*) ;
 struct wm831x_wdt_drvdata* FUNC_6 (struct device*,int,int ) ;
 int FUNC_7 (struct device*,struct watchdog_device*) ;
 int FUNC_8 (int *) ;
 int VAR_12 ;
 int FUNC_9 (struct watchdog_device*,struct wm831x_wdt_drvdata*) ;
 int FUNC_10 (struct watchdog_device*,int ) ;
 int FUNC_11 (struct wm831x*) ;
 int FUNC_12 (struct wm831x*,int ) ;
 int FUNC_13 (struct wm831x*) ;
 int FUNC_14 (struct wm831x*,int ,int) ;
 TYPE_1__* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_16)
{
 struct device *VAR_17 = &VAR_16->dev;
 struct wm831x *VAR_18 = FUNC_2(VAR_17->parent);
 struct wm831x_pdata *VAR_19 = FUNC_3(VAR_17->parent);
 struct wm831x_watchdog_pdata *VAR_20;
 struct wm831x_wdt_drvdata *VAR_21;
 struct watchdog_device *VAR_22;
 int VAR_23, VAR_24, VAR_25;

 VAR_24 = FUNC_12(VAR_18, VAR_3);
 if (VAR_24 < 0) {
  FUNC_1(VAR_18->dev, "Failed to read watchdog status: %d\n",
   VAR_24);
  return VAR_24;
 }
 VAR_23 = VAR_24;

 if (VAR_23 & VAR_4)
  FUNC_4(VAR_18->dev, "Watchdog is paused\n");

 VAR_21 = FUNC_6(VAR_17, sizeof(*VAR_21), VAR_1);
 if (!VAR_21)
  return -VAR_0;

 FUNC_8(&VAR_21->lock);
 VAR_21->wm831x = VAR_18;

 VAR_22 = &VAR_21->wdt;

 VAR_22->info = &VAR_14;
 VAR_22->ops = &VAR_15;
 VAR_22->parent = VAR_17;
 FUNC_10(VAR_22, VAR_12);
 FUNC_9(VAR_22, VAR_21);

 VAR_23 = FUNC_12(VAR_18, VAR_3);
 VAR_23 &= VAR_11;
 for (VAR_25 = 0; VAR_25 < FUNC_0(VAR_13); VAR_25++)
  if (VAR_13[VAR_25].val == VAR_23)
   break;
 if (VAR_25 == FUNC_0(VAR_13))
  FUNC_4(VAR_18->dev,
    "Unknown watchdog timeout: %x\n", VAR_23);
 else
  VAR_22->timeout = VAR_13[VAR_25].time;


 if (VAR_19)
  VAR_20 = VAR_19->watchdog;
 else
  VAR_20 = ((void*)0);

 if (VAR_20) {
  VAR_23 &= ~(VAR_9 | VAR_5 |
    VAR_7);

  VAR_23 |= VAR_20->primary << VAR_6;
  VAR_23 |= VAR_20->secondary << VAR_10;
  VAR_23 |= VAR_20->software << VAR_8;

  if (VAR_20->update_gpio) {
   VAR_24 = FUNC_5(VAR_17, VAR_20->update_gpio,
          VAR_2,
          "Watchdog update");
   if (VAR_24 < 0) {
    FUNC_1(VAR_18->dev,
     "Failed to request update GPIO: %d\n",
     VAR_24);
    return VAR_24;
   }

   VAR_21->update_gpio = VAR_20->update_gpio;


   VAR_23 |= VAR_7;
  }

  VAR_24 = FUNC_13(VAR_18);
  if (VAR_24 == 0) {
   VAR_24 = FUNC_14(VAR_18, VAR_3, VAR_23);
   FUNC_11(VAR_18);
  } else {
   FUNC_1(VAR_18->dev,
    "Failed to unlock security key: %d\n", VAR_24);
   return VAR_24;
  }
 }

 return FUNC_7(VAR_17, &VAR_21->wdt);
}
