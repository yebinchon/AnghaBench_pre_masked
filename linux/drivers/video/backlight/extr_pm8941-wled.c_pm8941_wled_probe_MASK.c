
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct regmap {int dummy; } ;
struct pm8941_wled {int name; struct regmap* regmap; } ;
struct TYPE_6__ {int of_node; int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct backlight_properties {int max_brightness; int brightness; int type; } ;
struct backlight_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 struct regmap* FUNC_2 (int ,int *) ;
 struct backlight_device* FUNC_3 (TYPE_1__*,int ,TYPE_1__*,struct pm8941_wled*,int *,struct backlight_properties*) ;
 struct pm8941_wled* FUNC_4 (TYPE_1__*,int,int ) ;
 int FUNC_5 (struct backlight_properties*,int ,int) ;
 int FUNC_6 (int ,char*,int *) ;
 int FUNC_7 (struct pm8941_wled*,TYPE_1__*) ;
 int VAR_6 ;
 int FUNC_8 (struct pm8941_wled*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_7)
{
 struct backlight_properties VAR_8;
 struct backlight_device *VAR_9;
 struct pm8941_wled *VAR_10;
 struct regmap *VAR_11;
 u32 VAR_12;
 int VAR_13;

 VAR_11 = FUNC_2(VAR_7->dev.parent, ((void*)0));
 if (!VAR_11) {
  FUNC_1(&VAR_7->dev, "Unable to get regmap\n");
  return -VAR_1;
 }

 VAR_10 = FUNC_4(&VAR_7->dev, sizeof(*VAR_10), VAR_3);
 if (!VAR_10)
  return -VAR_2;

 VAR_10->regmap = VAR_11;

 VAR_13 = FUNC_7(VAR_10, &VAR_7->dev);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_8(VAR_10);
 if (VAR_13)
  return VAR_13;

 VAR_12 = VAR_4;
 FUNC_6(VAR_7->dev.of_node, "default-brightness", &VAR_12);

 FUNC_5(&VAR_8, 0, sizeof(struct backlight_properties));
 VAR_8.type = VAR_0;
 VAR_8.brightness = VAR_12;
 VAR_8.max_brightness = VAR_5;
 VAR_9 = FUNC_3(&VAR_7->dev, VAR_10->name,
         &VAR_7->dev, VAR_10,
         &VAR_6, &VAR_8);
 return FUNC_0(VAR_9);
}
