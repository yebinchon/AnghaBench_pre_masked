
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wm831x_dcdc {int name; int dvs_vsel; int on_vsel; scalar_t__ base; int dvs_gpiod; scalar_t__ dvs_gpio_state; struct wm831x* wm831x; } ;
struct wm831x_buckv_pdata {int dvs_control_src; scalar_t__ dvs_init_state; } ;
struct wm831x {int dev; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int ,char*,int,int) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (struct wm831x*,scalar_t__,int ,int) ;

__attribute__((used)) static void FUNC_6(struct platform_device *VAR_6,
      struct wm831x_dcdc *VAR_7,
      struct wm831x_buckv_pdata *VAR_8)
{
 struct wm831x *VAR_9 = VAR_7->wm831x;
 int VAR_10;
 u16 VAR_11;

 if (!VAR_8)
  return;




 VAR_7->dvs_gpio_state = VAR_8->dvs_init_state;

 VAR_7->dvs_gpiod = FUNC_4(&VAR_6->dev, "dvs",
   VAR_7->dvs_gpio_state ? VAR_0 : VAR_1);
 if (FUNC_0(VAR_7->dvs_gpiod)) {
  FUNC_2(VAR_9->dev, "Failed to get %s DVS GPIO: %ld\n",
   VAR_7->name, FUNC_1(VAR_7->dvs_gpiod));
  return;
 }

 switch (VAR_8->dvs_control_src) {
 case 1:
  VAR_11 = 2 << VAR_3;
  break;
 case 2:
  VAR_11 = 3 << VAR_3;
  break;
 default:
  FUNC_2(VAR_9->dev, "Invalid DVS control source %d for %s\n",
   VAR_8->dvs_control_src, VAR_7->name);
  return;
 }




 if (!VAR_7->dvs_vsel) {
  VAR_10 = FUNC_5(VAR_9,
          VAR_7->base + VAR_5,
          VAR_4, VAR_7->on_vsel);
  if (VAR_10 == 0)
   VAR_7->dvs_vsel = VAR_7->on_vsel;
  else
   FUNC_3(VAR_9->dev, "Failed to set DVS_VSEL: %d\n",
     VAR_10);
 }

 VAR_10 = FUNC_5(VAR_9, VAR_7->base + VAR_5,
         VAR_2, VAR_11);
 if (VAR_10 < 0) {
  FUNC_2(VAR_9->dev, "Failed to set %s DVS source: %d\n",
   VAR_7->name, VAR_10);
 }
}
