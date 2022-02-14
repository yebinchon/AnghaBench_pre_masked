
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct platform_device {int dev; } ;
struct TYPE_2__ {scalar_t__ brightness; int power; } ;
struct lcd_device {TYPE_1__ props; } ;
struct cr_panel {struct lcd_device* cr_lcd_device; struct lcd_device* cr_backlight_device; } ;
struct backlight_properties {int type; } ;
struct backlight_device {TYPE_1__ props; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct lcd_device*) ;
 int VAR_9 ;
 int FUNC_1 (struct lcd_device*) ;
 int VAR_10 ;
 int FUNC_2 (struct lcd_device*) ;
 int VAR_11 ;
 int FUNC_3 (struct lcd_device*,int ) ;
 struct lcd_device* FUNC_4 (int *,char*,int *,int *,int *,struct backlight_properties*) ;
 struct cr_panel* FUNC_5 (int *,int,int ) ;
 struct lcd_device* FUNC_6 (int *,char*,int *,int *,int *) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_7 (struct backlight_properties*,int ,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int *) ;
 int FUNC_10 (int ,int ,int*) ;
 int FUNC_11 (int ,int ,int*) ;
 int FUNC_12 (struct platform_device*,struct cr_panel*) ;
 int FUNC_13 (char*) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_14)
{
 struct backlight_properties VAR_15;
 struct backlight_device *VAR_16;
 struct lcd_device *VAR_17;
 struct cr_panel *VAR_18;
 u8 VAR_19;

 VAR_13 = FUNC_9(VAR_9,
     VAR_1, ((void*)0));
 if (!VAR_13) {
  FUNC_13("INTEL CARILLO RANCH LPC not found.\n");
  return -VAR_5;
 }

 FUNC_10(VAR_13, VAR_4, &VAR_19);
 if (!(VAR_19 & VAR_2)) {
  FUNC_13("Carillo Ranch GPIO device was not enabled.\n");
  FUNC_8(VAR_13);
  return -VAR_5;
 }

 FUNC_7(&VAR_15, 0, sizeof(struct backlight_properties));
 VAR_15.type = VAR_0;
 VAR_16 = FUNC_4(&VAR_14->dev, "cr-backlight",
     &VAR_14->dev, ((void*)0), &VAR_10,
     &VAR_15);
 if (FUNC_0(VAR_16)) {
  FUNC_8(VAR_13);
  return FUNC_1(VAR_16);
 }

 VAR_17 = FUNC_6(&VAR_14->dev, "cr-lcd", &VAR_14->dev, ((void*)0),
     &VAR_11);
 if (FUNC_0(VAR_17)) {
  FUNC_8(VAR_13);
  return FUNC_1(VAR_17);
 }

 FUNC_11(VAR_13, VAR_3,
         &VAR_12);
 VAR_12 &= ~0x3F;

 VAR_18 = FUNC_5(&VAR_14->dev, sizeof(*VAR_18), VAR_8);
 if (!VAR_18) {
  FUNC_8(VAR_13);
  return -VAR_6;
 }

 VAR_18->cr_backlight_device = VAR_16;
 VAR_18->cr_lcd_device = VAR_17;
 VAR_18->cr_backlight_device->props.power = VAR_7;
 VAR_18->cr_backlight_device->props.brightness = 0;
 FUNC_2(VAR_18->cr_backlight_device);
 FUNC_3(VAR_18->cr_lcd_device, VAR_7);

 FUNC_12(VAR_14, VAR_18);

 return 0;
}
