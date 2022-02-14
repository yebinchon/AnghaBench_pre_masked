
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int state; int brightness; } ;
struct backlight_device {TYPE_1__ props; } ;
struct apple_gmux_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct apple_gmux_data* FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (struct apple_gmux_data*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct backlight_device *VAR_2)
{
 struct apple_gmux_data *VAR_3 = FUNC_0(VAR_2);
 u32 VAR_4 = VAR_2->props.brightness;

 if (VAR_2->props.state & VAR_0)
  return 0;

 FUNC_1(VAR_3, VAR_1, VAR_4);

 return 0;
}
