
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bd6107 {TYPE_1__* pdata; } ;
struct TYPE_4__ {int brightness; scalar_t__ power; scalar_t__ fb_blank; int state; } ;
struct backlight_device {TYPE_2__ props; } ;
struct TYPE_3__ {int reset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct bd6107*,int ,int) ;
 struct bd6107* FUNC_2 (struct backlight_device*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct backlight_device *VAR_7)
{
 struct bd6107 *VAR_8 = FUNC_2(VAR_7);
 int VAR_9 = VAR_7->props.brightness;

 if (VAR_7->props.power != VAR_6 ||
     VAR_7->props.fb_blank != VAR_6 ||
     VAR_7->props.state & (VAR_5 | VAR_4))
  VAR_9 = 0;

 if (VAR_9) {
  FUNC_1(VAR_8, VAR_3, FUNC_0(2) |
        FUNC_0(1) | FUNC_0(0));
  FUNC_1(VAR_8, VAR_2, VAR_9);
  FUNC_1(VAR_8, VAR_0, VAR_1);
 } else {
  FUNC_3(VAR_8->pdata->reset, 0);
  FUNC_4(24);
  FUNC_3(VAR_8->pdata->reset, 1);
 }

 return 0;
}
