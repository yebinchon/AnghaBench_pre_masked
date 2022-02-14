
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int parent; } ;
struct platform_device {TYPE_3__ dev; int name; } ;
struct da9052_bl {TYPE_5__* da9052; int state; int led_reg; scalar_t__ brightness; } ;
struct backlight_properties {void* max_brightness; int type; } ;
struct TYPE_7__ {scalar_t__ brightness; void* max_brightness; } ;
struct backlight_device {TYPE_1__ props; } ;
struct TYPE_10__ {int dev; } ;
struct TYPE_8__ {int driver_data; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (struct backlight_device*) ;
 int FUNC_2 (struct da9052_bl*) ;
 int VAR_5 ;
 int FUNC_3 (TYPE_3__*,char*) ;
 TYPE_5__* FUNC_4 (int ) ;
 struct backlight_device* FUNC_5 (TYPE_3__*,int ,int ,struct da9052_bl*,int *,struct backlight_properties*) ;
 struct da9052_bl* FUNC_6 (TYPE_3__*,int,int ) ;
 TYPE_2__* FUNC_7 (struct platform_device*) ;
 int FUNC_8 (struct platform_device*,struct backlight_device*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_6)
{
 struct backlight_device *VAR_7;
 struct backlight_properties VAR_8;
 struct da9052_bl *VAR_9;

 VAR_9 = FUNC_6(&VAR_6->dev, sizeof(struct da9052_bl), VAR_4);
 if (!VAR_9)
  return -VAR_3;

 VAR_9->da9052 = FUNC_4(VAR_6->dev.parent);
 VAR_9->brightness = 0;
 VAR_9->led_reg = FUNC_7(VAR_6)->driver_data;
 VAR_9->state = VAR_2;

 VAR_8.type = VAR_0;
 VAR_8.max_brightness = VAR_1;

 VAR_7 = FUNC_5(&VAR_6->dev, VAR_6->name,
     VAR_9->da9052->dev, VAR_9,
     &VAR_5, &VAR_8);
 if (FUNC_0(VAR_7)) {
  FUNC_3(&VAR_6->dev, "Failed to register backlight\n");
  return FUNC_1(VAR_7);
 }

 VAR_7->props.max_brightness = VAR_1;
 VAR_7->props.brightness = 0;
 FUNC_8(VAR_6, VAR_7);

 return FUNC_2(VAR_9);
}
