
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct wm831x_pdata {struct wm831x_backlight_pdata* backlight; } ;
struct wm831x_backlight_pdata {scalar_t__ max_uA; int isink; } ;
struct wm831x_backlight_data {int isink_reg; scalar_t__ current_brightness; struct wm831x* wm831x; } ;
struct wm831x {int dummy; } ;
struct TYPE_8__ {int parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct backlight_properties {int max_brightness; int type; } ;
struct TYPE_7__ {int brightness; } ;
struct backlight_device {TYPE_1__ props; } ;
typedef int props ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (struct backlight_device*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct backlight_device*) ;
 int FUNC_3 (TYPE_2__*,char*,...) ;
 struct wm831x* FUNC_4 (int ) ;
 struct wm831x_pdata* FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*,char*,scalar_t__,scalar_t__) ;
 struct backlight_device* FUNC_7 (TYPE_2__*,char*,TYPE_2__*,struct wm831x_backlight_data*,int *,struct backlight_properties*) ;
 struct wm831x_backlight_data* FUNC_8 (TYPE_2__*,int,int ) ;
 int FUNC_9 (struct backlight_properties*,int ,int) ;
 int FUNC_10 (struct platform_device*,struct backlight_device*) ;
 int VAR_11 ;
 scalar_t__* VAR_12 ;
 int FUNC_11 (struct wm831x*) ;
 int FUNC_12 (struct wm831x*) ;
 int FUNC_13 (struct wm831x*,int ,int,int) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_13)
{
 struct wm831x *VAR_14 = FUNC_4(VAR_13->dev.parent);
 struct wm831x_pdata *VAR_15 = FUNC_5(VAR_13->dev.parent);
 struct wm831x_backlight_pdata *VAR_16;
 struct wm831x_backlight_data *VAR_17;
 struct backlight_device *VAR_18;
 struct backlight_properties VAR_19;
 int VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;


 if (VAR_15)
  VAR_16 = VAR_15->backlight;
 else
  VAR_16 = ((void*)0);

 if (!VAR_16) {
  FUNC_3(&VAR_13->dev, "No platform data supplied\n");
  return -VAR_1;
 }


 for (VAR_21 = 0; VAR_21 < VAR_10; VAR_21++) {
  if (VAR_12[VAR_21] > VAR_16->max_uA)
   break;
 }

 if (VAR_21 == 0) {
  FUNC_3(&VAR_13->dev, "Invalid max_uA: %duA\n", VAR_16->max_uA);
  return -VAR_1;
 }
 VAR_22 = VAR_21 - 1;

 if (VAR_16->max_uA != VAR_12[VAR_22])
  FUNC_6(&VAR_13->dev,
    "Maximum current is %duA not %duA as requested\n",
    VAR_12[VAR_22], VAR_16->max_uA);

 switch (VAR_16->isink) {
 case 1:
  VAR_23 = VAR_4;
  VAR_24 = 0;
  break;
 case 2:
  VAR_23 = VAR_5;
  VAR_24 = VAR_8;
  break;
 default:
  FUNC_3(&VAR_13->dev, "Invalid ISINK %d\n", VAR_16->isink);
  return -VAR_1;
 }


 VAR_20 = FUNC_12(VAR_14);
 if (VAR_20 < 0)
  return VAR_20;

 VAR_20 = FUNC_13(VAR_14, VAR_6, VAR_8,
         VAR_24);

 FUNC_11(VAR_14);
 if (VAR_20 < 0)
  return VAR_20;

 VAR_17 = FUNC_8(&VAR_13->dev, sizeof(*VAR_17), VAR_3);
 if (VAR_17 == ((void*)0))
  return -VAR_2;

 VAR_17->wm831x = VAR_14;
 VAR_17->current_brightness = 0;
 VAR_17->isink_reg = VAR_23;

 FUNC_9(&VAR_19, 0, sizeof(VAR_19));
 VAR_19.type = VAR_0;
 VAR_19.max_brightness = VAR_22;
 VAR_18 = FUNC_7(&VAR_13->dev, "wm831x", &VAR_13->dev,
     VAR_17, &VAR_11, &VAR_19);
 if (FUNC_0(VAR_18)) {
  FUNC_3(&VAR_13->dev, "failed to register backlight\n");
  return FUNC_1(VAR_18);
 }

 VAR_18->props.brightness = VAR_22;

 FUNC_10(VAR_13, VAR_18);


 FUNC_13(VAR_14, VAR_9, VAR_7, 0);

 FUNC_2(VAR_18);

 return 0;
}
