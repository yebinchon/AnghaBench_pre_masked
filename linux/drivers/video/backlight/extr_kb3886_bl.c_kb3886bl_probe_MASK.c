
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct kb3886bl_machinfo {int limit_mask; int default_intensity; int max_intensity; } ;
struct backlight_properties {int max_brightness; int type; } ;
struct TYPE_8__ {int brightness; int power; } ;
struct TYPE_9__ {TYPE_1__ props; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 struct kb3886bl_machinfo* VAR_2 ;
 struct kb3886bl_machinfo* FUNC_3 (int *) ;
 TYPE_2__* FUNC_4 (int *,char*,int *,int *,int *,struct backlight_properties*) ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (struct backlight_properties*,int ,int) ;
 int FUNC_6 (struct platform_device*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_5)
{
 struct backlight_properties VAR_6;
 struct kb3886bl_machinfo *VAR_7 = FUNC_3(&VAR_5->dev);

 VAR_2 = VAR_7;
 if (!VAR_7->limit_mask)
  VAR_7->limit_mask = -1;

 FUNC_5(&VAR_6, 0, sizeof(struct backlight_properties));
 VAR_6.type = VAR_0;
 VAR_6.max_brightness = VAR_7->max_intensity;
 VAR_3 = FUNC_4(&VAR_5->dev,
       "kb3886-bl", &VAR_5->dev,
       ((void*)0), &VAR_4,
       &VAR_6);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 FUNC_6(VAR_5, VAR_3);

 VAR_3->props.power = VAR_1;
 VAR_3->props.brightness = VAR_7->default_intensity;
 FUNC_2(VAR_3);

 return 0;
}
