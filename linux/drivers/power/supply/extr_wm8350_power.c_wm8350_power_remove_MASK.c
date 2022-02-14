
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8350_power {int usb; int ac; int battery; } ;
struct wm8350 {struct wm8350_power power; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct wm8350*) ;
 struct wm8350* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_1)
{
 struct wm8350 *VAR_2 = FUNC_2(VAR_1);
 struct wm8350_power *VAR_3 = &VAR_2->power;

 FUNC_1(VAR_2);
 FUNC_0(&VAR_1->dev, &VAR_0);
 FUNC_3(VAR_3->battery);
 FUNC_3(VAR_3->ac);
 FUNC_3(VAR_3->usb);
 return 0;
}
