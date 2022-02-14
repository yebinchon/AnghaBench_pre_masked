
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct lp8788_bl {int mode; int lp; } ;
struct TYPE_2__ {int state; int brightness; int max_brightness; } ;
struct backlight_device {TYPE_1__ props; } ;
typedef enum lp8788_bl_ctrl_mode { ____Placeholder_lp8788_bl_ctrl_mode } lp8788_bl_ctrl_mode ;


 int VAR_0 ;
 int VAR_1 ;
 struct lp8788_bl* FUNC_0 (struct backlight_device*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct lp8788_bl*,int,int) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static int FUNC_5(struct backlight_device *VAR_2)
{
 struct lp8788_bl *VAR_3 = FUNC_0(VAR_2);
 enum lp8788_bl_ctrl_mode VAR_4 = VAR_3->mode;

 if (VAR_2->props.state & VAR_0)
  VAR_2->props.brightness = 0;

 if (FUNC_1(VAR_4)) {
  int VAR_5 = VAR_2->props.brightness;
  int VAR_6 = VAR_2->props.max_brightness;

  FUNC_3(VAR_3, VAR_5, VAR_6);
 } else if (FUNC_2(VAR_4)) {
  u8 VAR_7 = VAR_2->props.brightness;

  FUNC_4(VAR_3->lp, VAR_1, VAR_7);
 }

 return 0;
}
