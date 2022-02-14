
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sky81452_bl_platform_data {int enable; } ;
struct regmap {int dummy; } ;
struct TYPE_4__ {scalar_t__ brightness; } ;
struct TYPE_3__ {int parent; } ;
struct backlight_device {TYPE_2__ props; TYPE_1__ dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct regmap* FUNC_1 (struct backlight_device*) ;
 struct sky81452_bl_platform_data* FUNC_2 (int ) ;
 int FUNC_3 (struct regmap*,int ,int ,int) ;
 int FUNC_4 (struct regmap*,int ,unsigned int const) ;

__attribute__((used)) static int FUNC_5(struct backlight_device *VAR_3)
{
 const struct sky81452_bl_platform_data *VAR_4 =
   FUNC_2(VAR_3->dev.parent);
 const unsigned int VAR_5 = (unsigned int)VAR_3->props.brightness;
 struct regmap *VAR_6 = FUNC_1(VAR_3);
 int VAR_7;

 if (VAR_5 > 0) {
  VAR_7 = FUNC_4(VAR_6, VAR_1, VAR_5 - 1);
  if (VAR_7 < 0)
   return VAR_7;

  return FUNC_3(VAR_6, VAR_2, VAR_0,
     VAR_4->enable << FUNC_0(VAR_0));
 }

 return FUNC_3(VAR_6, VAR_2, VAR_0, 0);
}
