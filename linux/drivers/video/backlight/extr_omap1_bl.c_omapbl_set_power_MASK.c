
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_backlight {int powermode; } ;
struct backlight_device {int dummy; } ;


 struct omap_backlight* FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (struct omap_backlight*,int) ;

__attribute__((used)) static int FUNC_2(struct backlight_device *VAR_0, int VAR_1)
{
 struct omap_backlight *VAR_2 = FUNC_0(VAR_0);

 FUNC_1(VAR_2, VAR_1);
 VAR_2->powermode = VAR_1;

 return 0;
}
