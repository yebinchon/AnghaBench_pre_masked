
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct resource {int start; } ;
struct TYPE_7__ {struct max8925_backlight_pdata* platform_data; int parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct max8925_chip {int i2c; } ;
struct max8925_backlight_pdata {scalar_t__ dual_string; scalar_t__ lxw_freq; scalar_t__ lxw_scl; } ;
struct max8925_backlight_data {int reg_mode_cntl; scalar_t__ current_brightness; struct max8925_chip* chip; int reg_cntl; } ;
struct backlight_properties {void* max_brightness; int type; } ;
struct TYPE_6__ {void* brightness; } ;
struct backlight_device {TYPE_1__ props; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (scalar_t__) ;
 void* VAR_5 ;
 int FUNC_2 (struct backlight_device*) ;
 int FUNC_3 (struct backlight_device*) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 struct max8925_chip* FUNC_5 (int ) ;
 struct backlight_device* FUNC_6 (TYPE_2__*,char*,TYPE_2__*,struct max8925_backlight_data*,int *,struct backlight_properties*) ;
 struct max8925_backlight_data* FUNC_7 (TYPE_2__*,int,int ) ;
 int FUNC_8 (struct platform_device*) ;
 int VAR_6 ;
 int FUNC_9 (int ,int ,int,unsigned char) ;
 int FUNC_10 (struct backlight_properties*,int ,int) ;
 struct resource* FUNC_11 (struct platform_device*,int ,int) ;
 int FUNC_12 (struct platform_device*,struct backlight_device*) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_7)
{
 struct max8925_chip *VAR_8 = FUNC_5(VAR_7->dev.parent);
 struct max8925_backlight_pdata *VAR_9;
 struct max8925_backlight_data *VAR_10;
 struct backlight_device *VAR_11;
 struct backlight_properties VAR_12;
 struct resource *VAR_13;
 unsigned char VAR_14;
 int VAR_15 = 0;

 VAR_10 = FUNC_7(&VAR_7->dev, sizeof(struct max8925_backlight_data),
       VAR_3);
 if (VAR_10 == ((void*)0))
  return -VAR_1;

 VAR_13 = FUNC_11(VAR_7, VAR_4, 0);
 if (!VAR_13) {
  FUNC_4(&VAR_7->dev, "No REG resource for mode control!\n");
  return -VAR_2;
 }
 VAR_10->reg_mode_cntl = VAR_13->start;
 VAR_13 = FUNC_11(VAR_7, VAR_4, 1);
 if (!VAR_13) {
  FUNC_4(&VAR_7->dev, "No REG resource for control!\n");
  return -VAR_2;
 }
 VAR_10->reg_cntl = VAR_13->start;

 VAR_10->chip = VAR_8;
 VAR_10->current_brightness = 0;

 FUNC_10(&VAR_12, 0, sizeof(struct backlight_properties));
 VAR_12.type = VAR_0;
 VAR_12.max_brightness = VAR_5;
 VAR_11 = FUNC_6(&VAR_7->dev, "max8925-backlight",
     &VAR_7->dev, VAR_10,
     &VAR_6, &VAR_12);
 if (FUNC_0(VAR_11)) {
  FUNC_4(&VAR_7->dev, "failed to register backlight\n");
  return FUNC_2(VAR_11);
 }
 VAR_11->props.brightness = VAR_5;

 FUNC_12(VAR_7, VAR_11);

 VAR_14 = 0;
 if (!VAR_7->dev.platform_data)
  FUNC_8(VAR_7);

 VAR_9 = VAR_7->dev.platform_data;
 if (VAR_9) {
  if (VAR_9->lxw_scl)
   VAR_14 |= (1 << 7);
  if (VAR_9->lxw_freq)
   VAR_14 |= (FUNC_1(VAR_9->lxw_freq) << 4);
  if (VAR_9->dual_string)
   VAR_14 |= (1 << 1);
 }
 VAR_15 = FUNC_9(VAR_8->i2c, VAR_10->reg_mode_cntl, 0xfe, VAR_14);
 if (VAR_15 < 0)
  return VAR_15;
 FUNC_3(VAR_11);
 return 0;
}
