
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ fb_blank; scalar_t__ power; unsigned int brightness; } ;
struct backlight_device {TYPE_1__ props; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,char*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct backlight_device *VAR_2)
{
 unsigned int VAR_3 =
  (VAR_2->props.fb_blank == VAR_0 &&
   VAR_2->props.power == VAR_0) ?
    VAR_2->props.brightness : 0;

 FUNC_1(VAR_1,
   "backlight: attempt to set level to %d\n",
   VAR_3);



 return FUNC_0(VAR_3);
}
