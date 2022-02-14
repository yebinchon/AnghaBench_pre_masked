
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct lp855x {scalar_t__ mode; TYPE_1__* cfg; } ;
struct TYPE_4__ {int brightness; int state; int max_brightness; } ;
struct backlight_device {TYPE_2__ props; } ;
struct TYPE_3__ {int reg_brightness; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct lp855x* FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (struct lp855x*,int,int ) ;
 int FUNC_2 (struct lp855x*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct backlight_device *VAR_4)
{
 struct lp855x *VAR_5 = FUNC_0(VAR_4);
 int VAR_6 = VAR_4->props.brightness;

 if (VAR_4->props.state & (VAR_1 | VAR_0))
  VAR_6 = 0;

 if (VAR_5->mode == VAR_2)
  FUNC_1(VAR_5, VAR_6, VAR_4->props.max_brightness);
 else if (VAR_5->mode == VAR_3)
  FUNC_2(VAR_5, VAR_5->cfg->reg_brightness, (u8)VAR_6);

 return 0;
}
