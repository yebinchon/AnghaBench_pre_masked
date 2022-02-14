
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm831x_power {int usb; int wall; int battery; scalar_t__ have_battery; int usb_notify; scalar_t__ usb_phy; struct wm831x* wm831x; } ;
struct wm831x {int dummy; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (char**) ;
 int FUNC_1 (int,struct wm831x_power*) ;
 struct wm831x_power* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct platform_device*,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__,int *) ;
 char** VAR_0 ;
 int FUNC_6 (struct wm831x*,int ) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_1)
{
 struct wm831x_power *VAR_2 = FUNC_2(VAR_1);
 struct wm831x *VAR_3 = VAR_2->wm831x;
 int VAR_4, VAR_5;

 if (VAR_2->usb_phy) {
  FUNC_5(VAR_2->usb_phy,
     &VAR_2->usb_notify);
 }

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_0); VAR_5++) {
  VAR_4 = FUNC_6(VAR_3,
     FUNC_3(VAR_1,
        VAR_0[VAR_5]));
  FUNC_1(VAR_4, VAR_2);
 }

 VAR_4 = FUNC_6(VAR_3, FUNC_3(VAR_1, "PWR SRC"));
 FUNC_1(VAR_4, VAR_2);

 VAR_4 = FUNC_6(VAR_3, FUNC_3(VAR_1, "SYSLO"));
 FUNC_1(VAR_4, VAR_2);

 if (VAR_2->have_battery)
  FUNC_4(VAR_2->battery);
 FUNC_4(VAR_2->wall);
 FUNC_4(VAR_2->usb);
 return 0;
}
