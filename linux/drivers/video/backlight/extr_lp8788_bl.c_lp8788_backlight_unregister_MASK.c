
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lp8788_bl {struct backlight_device* bl_dev; } ;
struct backlight_device {int dummy; } ;


 int FUNC_0 (struct backlight_device*) ;

__attribute__((used)) static void FUNC_1(struct lp8788_bl *VAR_0)
{
 struct backlight_device *VAR_1 = VAR_0->bl_dev;

 FUNC_0(VAR_1);
}
