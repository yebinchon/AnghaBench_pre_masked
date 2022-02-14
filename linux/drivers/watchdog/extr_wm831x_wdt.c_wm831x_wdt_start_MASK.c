
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm831x_wdt_drvdata {int lock; struct wm831x* wm831x; } ;
struct wm831x {int dev; } ;
struct watchdog_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct wm831x_wdt_drvdata* FUNC_3 (struct watchdog_device*) ;
 int FUNC_4 (struct wm831x*) ;
 int FUNC_5 (struct wm831x*) ;
 int FUNC_6 (struct wm831x*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct watchdog_device *VAR_2)
{
 struct wm831x_wdt_drvdata *VAR_3 = FUNC_3(VAR_2);
 struct wm831x *VAR_4 = VAR_3->wm831x;
 int VAR_5;

 FUNC_1(&VAR_3->lock);

 VAR_5 = FUNC_5(VAR_4);
 if (VAR_5 == 0) {
  VAR_5 = FUNC_6(VAR_4, VAR_0,
          VAR_1, VAR_1);
  FUNC_4(VAR_4);
 } else {
  FUNC_0(VAR_4->dev, "Failed to unlock security key: %d\n",
   VAR_5);
 }

 FUNC_2(&VAR_3->lock);

 return VAR_5;
}
