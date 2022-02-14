
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sony_backlight_props {int offset; int cmd_base; int handle; } ;
struct TYPE_2__ {int brightness; } ;
struct backlight_device {TYPE_1__ props; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct backlight_device*) ;
 scalar_t__ FUNC_1 (int ,int,int*) ;

__attribute__((used)) static int FUNC_2(struct backlight_device *VAR_1)
{
 int VAR_2, VAR_3;
 struct sony_backlight_props *VAR_4 =
  (struct sony_backlight_props *)FUNC_0(VAR_1);

 VAR_2 = VAR_1->props.brightness + VAR_4->offset;
 if (FUNC_1(VAR_4->handle, VAR_4->cmd_base | (VAR_2 << 0x10),
    &VAR_3))
  return -VAR_0;

 return VAR_2;
}
