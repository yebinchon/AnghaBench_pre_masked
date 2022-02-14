
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct lm3533_bl {int cb; } ;
struct TYPE_2__ {int brightness; scalar_t__ power; scalar_t__ fb_blank; } ;
struct backlight_device {TYPE_1__ props; } ;


 scalar_t__ VAR_0 ;
 struct lm3533_bl* FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int FUNC_2(struct backlight_device *VAR_1)
{
 struct lm3533_bl *VAR_2 = FUNC_0(VAR_1);
 int VAR_3 = VAR_1->props.brightness;

 if (VAR_1->props.power != VAR_0)
  VAR_3 = 0;
 if (VAR_1->props.fb_blank != VAR_0)
  VAR_3 = 0;

 return FUNC_1(&VAR_2->cb, (u8)VAR_3);
}
