
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lv5207lp {int dummy; } ;
struct TYPE_2__ {int brightness; scalar_t__ power; scalar_t__ fb_blank; int state; } ;
struct backlight_device {TYPE_1__ props; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct lv5207lp* FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (struct lv5207lp*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct backlight_device *VAR_10)
{
 struct lv5207lp *VAR_11 = FUNC_0(VAR_10);
 int VAR_12 = VAR_10->props.brightness;

 if (VAR_10->props.power != VAR_2 ||
     VAR_10->props.fb_blank != VAR_2 ||
     VAR_10->props.state & (VAR_1 | VAR_0))
  VAR_12 = 0;

 if (VAR_12) {
  FUNC_1(VAR_11, VAR_6,
          VAR_5 | VAR_3 | VAR_4);
  FUNC_1(VAR_11, VAR_7,
          VAR_9 | VAR_8 |
          (VAR_12 - 1));
 } else {
  FUNC_1(VAR_11, VAR_6, 0);
  FUNC_1(VAR_11, VAR_7, 0);
 }

 return 0;
}
