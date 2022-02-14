
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int parent; } ;
struct platform_device {int id; TYPE_2__ dev; int name; } ;
struct da903x_backlight_data {int id; int da903x_dev; scalar_t__ current_brightness; } ;
struct da9034_backlight_pdata {int output_current; } ;
struct backlight_properties {int max_brightness; int type; } ;
struct TYPE_6__ {int brightness; } ;
struct backlight_device {TYPE_1__ props; } ;
typedef int props ;


 int VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct backlight_device*) ;
 int FUNC_2 (struct backlight_device*) ;
 int FUNC_3 (struct backlight_device*) ;
 int VAR_7 ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (TYPE_2__*,char*,...) ;
 struct da9034_backlight_pdata* FUNC_6 (TYPE_2__*) ;
 struct backlight_device* FUNC_7 (TYPE_2__*,int ,int ,struct da903x_backlight_data*,int *,struct backlight_properties*) ;
 struct da903x_backlight_data* FUNC_8 (TYPE_2__*,int,int ) ;
 int FUNC_9 (struct backlight_properties*,int ,int) ;
 int FUNC_10 (struct platform_device*,struct backlight_device*) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_8)
{
 struct da9034_backlight_pdata *VAR_9 = FUNC_6(&VAR_8->dev);
 struct da903x_backlight_data *VAR_10;
 struct backlight_device *VAR_11;
 struct backlight_properties VAR_12;
 int VAR_13;

 VAR_10 = FUNC_8(&VAR_8->dev, sizeof(*VAR_10), VAR_6);
 if (VAR_10 == ((void*)0))
  return -VAR_5;

 switch (VAR_8->id) {
 case 129:
  VAR_13 = VAR_1;
  break;
 case 128:
  VAR_13 = VAR_2;
  break;
 default:
  FUNC_5(&VAR_8->dev, "invalid backlight device ID(%d)\n",
    VAR_8->id);
  return -VAR_4;
 }

 VAR_10->id = VAR_8->id;
 VAR_10->da903x_dev = VAR_8->dev.parent;
 VAR_10->current_brightness = 0;


 if (VAR_9)
  FUNC_4(VAR_10->da903x_dev, VAR_3,
    FUNC_0(VAR_9->output_current));

 FUNC_9(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.type = VAR_0;
 VAR_12.max_brightness = VAR_13;
 VAR_11 = FUNC_7(&VAR_8->dev, VAR_8->name,
     VAR_10->da903x_dev, VAR_10,
     &VAR_7, &VAR_12);
 if (FUNC_1(VAR_11)) {
  FUNC_5(&VAR_8->dev, "failed to register backlight\n");
  return FUNC_2(VAR_11);
 }

 VAR_11->props.brightness = VAR_13;

 FUNC_10(VAR_8, VAR_11);
 FUNC_3(VAR_11);
 return 0;
}
