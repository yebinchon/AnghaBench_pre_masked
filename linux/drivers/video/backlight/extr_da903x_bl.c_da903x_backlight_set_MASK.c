
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct device {int dummy; } ;
struct da903x_backlight_data {int id; int current_brightness; struct device* da903x_dev; } ;
struct backlight_device {int dummy; } ;



 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct da903x_backlight_data* FUNC_1 (struct backlight_device*) ;
 int FUNC_2 (struct device*,int ,int ) ;
 int FUNC_3 (struct device*,int ,int ) ;
 int FUNC_4 (struct device*,int ,int,int) ;
 int FUNC_5 (struct device*,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct backlight_device *VAR_5, int VAR_6)
{
 struct da903x_backlight_data *VAR_7 = FUNC_1(VAR_5);
 struct device *VAR_8 = VAR_7->da903x_dev;
 uint8_t VAR_9;
 int VAR_10 = 0;

 switch (VAR_7->id) {
 case 128:
  VAR_10 = FUNC_4(VAR_8, VAR_3,
    VAR_6, 0x7f);
  if (VAR_10)
   return VAR_10;

  if (VAR_7->current_brightness && VAR_6 == 0)
   VAR_10 = FUNC_2(VAR_8,
     VAR_4,
     VAR_2);

  if (VAR_7->current_brightness == 0 && VAR_6)
   VAR_10 = FUNC_3(VAR_8,
     VAR_4,
     VAR_2);
  break;
 case 129:
  VAR_9 = FUNC_0(VAR_6);
  VAR_9 |= VAR_6 ? VAR_1 : 0;
  VAR_10 = FUNC_5(VAR_8, VAR_0, VAR_9);
  break;
 }

 if (VAR_10)
  return VAR_10;

 VAR_7->current_brightness = VAR_6;
 return 0;
}
