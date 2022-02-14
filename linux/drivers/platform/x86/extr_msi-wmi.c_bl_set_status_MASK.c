
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int brightness; } ;
struct backlight_device {TYPE_1__ props; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct backlight_device *VAR_2)
{
 int VAR_3 = VAR_2->props.brightness;
 if (VAR_3 >= FUNC_0(VAR_1) || VAR_3 < 0)
  return -VAR_0;


 return FUNC_1(0, VAR_1[VAR_3]);
}
