
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wm831x_wdt_drvdata {int update_state; int lock; scalar_t__ update_gpio; struct wm831x* wm831x; } ;
struct wm831x {int dev; } ;
struct watchdog_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct wm831x_wdt_drvdata* FUNC_4 (struct watchdog_device*) ;
 int FUNC_5 (struct wm831x*) ;
 int FUNC_6 (struct wm831x*,int ) ;
 int FUNC_7 (struct wm831x*) ;
 int FUNC_8 (struct wm831x*,int ,int) ;

__attribute__((used)) static int FUNC_9(struct watchdog_device *VAR_4)
{
 struct wm831x_wdt_drvdata *VAR_5 = FUNC_4(VAR_4);
 struct wm831x *VAR_6 = VAR_5->wm831x;
 int VAR_7;
 u16 VAR_8;

 FUNC_2(&VAR_5->lock);

 if (VAR_5->update_gpio) {
  FUNC_1(VAR_5->update_gpio,
     VAR_5->update_state);
  VAR_5->update_state = !VAR_5->update_state;
  VAR_7 = 0;
  goto out;
 }

 VAR_8 = FUNC_6(VAR_6, VAR_1);

 if (!(VAR_8 & VAR_3)) {
  FUNC_0(VAR_6->dev, "Hardware watchdog update unsupported\n");
  VAR_7 = -VAR_0;
  goto out;
 }

 VAR_8 |= VAR_2;

 VAR_7 = FUNC_7(VAR_6);
 if (VAR_7 == 0) {
  VAR_7 = FUNC_8(VAR_6, VAR_1, VAR_8);
  FUNC_5(VAR_6);
 } else {
  FUNC_0(VAR_6->dev, "Failed to unlock security key: %d\n",
   VAR_7);
 }

out:
 FUNC_3(&VAR_5->lock);

 return VAR_7;
}
