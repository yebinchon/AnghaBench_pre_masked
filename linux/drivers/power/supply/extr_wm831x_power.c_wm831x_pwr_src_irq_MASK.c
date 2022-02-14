
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm831x_power {int wall; int usb; int battery; scalar_t__ have_battery; struct wm831x* wm831x; } ;
struct wm831x {int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct wm831x_power *VAR_3 = VAR_2;
 struct wm831x *VAR_4 = VAR_3->wm831x;

 FUNC_0(VAR_4->dev, "Power source changed\n");


 if (VAR_3->have_battery)
  FUNC_1(VAR_3->battery);
 FUNC_1(VAR_3->usb);
 FUNC_1(VAR_3->wall);

 return VAR_0;
}
