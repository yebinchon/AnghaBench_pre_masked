
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct corgi_lcd {int intensity; } ;
struct backlight_device {int dummy; } ;


 struct corgi_lcd* FUNC_0 (struct backlight_device*) ;

__attribute__((used)) static int FUNC_1(struct backlight_device *VAR_0)
{
 struct corgi_lcd *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->intensity;
}
