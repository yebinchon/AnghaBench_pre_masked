
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {struct device* parent; } ;
struct platform_device {TYPE_2__ dev; int name; } ;
struct pcf50633_platform_data {struct pcf50633_bl_platform_data* backlight_data; } ;
struct pcf50633_bl_platform_data {int default_brightness; int default_brightness_limit; int ramp_time; } ;
struct pcf50633_bl {int brightness_limit; TYPE_3__* bl; scalar_t__ brightness; int pcf; } ;
struct device {int dummy; } ;
struct backlight_properties {int max_brightness; int brightness; int power; int type; } ;
typedef int bl_props ;
struct TYPE_9__ {scalar_t__ brightness; } ;
struct TYPE_11__ {TYPE_1__ props; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int VAR_4 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 struct pcf50633_platform_data* FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;
 TYPE_3__* FUNC_5 (TYPE_2__*,int ,TYPE_2__*,struct pcf50633_bl*,int *,struct backlight_properties*) ;
 struct pcf50633_bl* FUNC_6 (TYPE_2__*,int,int ) ;
 int FUNC_7 (struct backlight_properties*,int ,int) ;
 int VAR_5 ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (struct platform_device*,struct pcf50633_bl*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_6)
{
 struct pcf50633_bl *VAR_7;
 struct device *VAR_8 = VAR_6->dev.parent;
 struct pcf50633_platform_data *VAR_9 = FUNC_3(VAR_8);
 struct pcf50633_bl_platform_data *VAR_10 = VAR_9->backlight_data;
 struct backlight_properties VAR_11;

 VAR_7 = FUNC_6(&VAR_6->dev, sizeof(*VAR_7), VAR_3);
 if (!VAR_7)
  return -VAR_1;

 FUNC_7(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.type = VAR_0;
 VAR_11.max_brightness = 0x3f;
 VAR_11.power = VAR_2;

 if (VAR_10) {
  VAR_11.brightness = VAR_10->default_brightness;
  VAR_7->brightness_limit = VAR_10->default_brightness_limit;
 } else {
  VAR_11.brightness = 0x3f;
  VAR_7->brightness_limit = 0x3f;
 }

 VAR_7->pcf = FUNC_4(VAR_6->dev.parent);

 VAR_7->bl = FUNC_5(&VAR_6->dev, VAR_6->name,
      &VAR_6->dev, VAR_7,
      &VAR_5, &VAR_11);

 if (FUNC_0(VAR_7->bl))
  return FUNC_1(VAR_7->bl);

 FUNC_9(VAR_6, VAR_7);

 FUNC_8(VAR_7->pcf, VAR_4, VAR_10->ramp_time);





 VAR_7->brightness = VAR_7->bl->props.brightness + 1;

 FUNC_2(VAR_7->bl);

 return 0;
}
