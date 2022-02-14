
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ power; int state; int brightness; } ;
struct backlight_device {TYPE_1__ props; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct backlight_device *VAR_3)
{
 int VAR_4 = FUNC_0(VAR_3->props.brightness);
 if (VAR_4)
  return VAR_4;

 FUNC_1((VAR_3->props.power == VAR_2)
  && !(VAR_3->props.state & VAR_1)
  && !(VAR_3->props.state & VAR_0));
 return 0;
}
