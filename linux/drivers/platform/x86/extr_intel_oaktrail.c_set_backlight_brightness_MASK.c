
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {int brightness; } ;
struct backlight_device {TYPE_1__ props; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct backlight_device *VAR_5)
{
 u8 VAR_6 = (u8) VAR_5->props.brightness;
 if (VAR_6 < 0 || VAR_6 > VAR_2)
  return -VAR_0;

 FUNC_0(VAR_1, VAR_6);
 FUNC_0(VAR_3, VAR_4);

 return 0;
}
