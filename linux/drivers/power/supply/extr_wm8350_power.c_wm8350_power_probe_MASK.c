
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8350_power {void* ac; void* battery; void* usb; struct wm8350_charger_policy* policy; } ;
struct wm8350_charger_policy {int dummy; } ;
struct wm8350 {int dev; struct wm8350_power power; } ;
struct platform_device {int dev; } ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int *,int *) ;
 struct wm8350* FUNC_4 (struct platform_device*) ;
 void* FUNC_5 (int *,int *,int *) ;
 int FUNC_6 (void*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_7 (struct wm8350*,struct wm8350_charger_policy*) ;
 int FUNC_8 (struct wm8350*) ;
 int FUNC_9 (struct wm8350*) ;
 int FUNC_10 (struct wm8350*) ;
 int FUNC_11 (struct wm8350*,int ,int ) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_6)
{
 struct wm8350 *VAR_7 = FUNC_4(VAR_6);
 struct wm8350_power *VAR_8 = &VAR_7->power;
 struct wm8350_charger_policy *VAR_9 = VAR_8->policy;
 int VAR_10;

 VAR_8->ac = FUNC_5(&VAR_6->dev, &VAR_3, ((void*)0));
 if (FUNC_0(VAR_8->ac))
  return FUNC_1(VAR_8->ac);

 VAR_8->battery = FUNC_5(&VAR_6->dev, &VAR_4,
            ((void*)0));
 if (FUNC_0(VAR_8->battery)) {
  VAR_10 = FUNC_1(VAR_8->battery);
  goto battery_failed;
 }

 VAR_8->usb = FUNC_5(&VAR_6->dev, &VAR_5, ((void*)0));
 if (FUNC_0(VAR_8->usb)) {
  VAR_10 = FUNC_1(VAR_8->usb);
  goto usb_failed;
 }

 VAR_10 = FUNC_3(&VAR_6->dev, &VAR_2);
 if (VAR_10 < 0)
  FUNC_2(VAR_7->dev, "failed to add charge sysfs: %d\n", VAR_10);
 VAR_10 = 0;

 FUNC_8(VAR_7);
 if (FUNC_7(VAR_7, VAR_9) == 0) {
  FUNC_10(VAR_7);
  FUNC_11(VAR_7, VAR_1, VAR_0);
  FUNC_9(VAR_7);
 }

 return VAR_10;

usb_failed:
 FUNC_6(VAR_8->battery);
battery_failed:
 FUNC_6(VAR_8->ac);

 return VAR_10;
}
