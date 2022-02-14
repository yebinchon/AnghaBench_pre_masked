
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sony_backlight_props {int offset; scalar_t__ cmd_base; int handle; } ;
struct backlight_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (int ,scalar_t__,int*) ;

__attribute__((used)) static int FUNC_2(struct backlight_device *VAR_0)
{
 int VAR_1;
 struct sony_backlight_props *VAR_2 =
  (struct sony_backlight_props *)FUNC_0(VAR_0);

 FUNC_1(VAR_2->handle, VAR_2->cmd_base + 0x100, &VAR_1);

 return (VAR_1 & 0xff) - VAR_2->offset;
}
