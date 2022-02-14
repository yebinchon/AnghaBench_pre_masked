
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ot200_backlight_data {int current_brightness; } ;
struct TYPE_2__ {int brightness; int state; } ;
struct backlight_device {TYPE_1__ props; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 struct ot200_backlight_data* FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 scalar_t__* VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_2(struct backlight_device *VAR_8)
{
 struct ot200_backlight_data *VAR_9 = FUNC_0(VAR_8);
 int VAR_10 = VAR_8->props.brightness;

 if (VAR_8->props.state & VAR_0)
  VAR_10 = 0;


 if (VAR_10 == 0)
  FUNC_1(VAR_7, VAR_4, 0);
 else if (VAR_9->current_brightness == 0) {
  FUNC_1(VAR_7, VAR_3, 0);
  FUNC_1(VAR_7, VAR_4,
   VAR_5);
 }


 FUNC_1(VAR_7, VAR_2,
  VAR_1 - VAR_6[VAR_10]);
 VAR_9->current_brightness = VAR_10;

 return 0;
}
