
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fb_info {int * dev; } ;
struct bd6107 {TYPE_1__* pdata; } ;
struct backlight_device {int dummy; } ;
struct TYPE_2__ {int * fbdev; } ;


 struct bd6107* FUNC_0 (struct backlight_device*) ;

__attribute__((used)) static int FUNC_1(struct backlight_device *VAR_0,
           struct fb_info *VAR_1)
{
 struct bd6107 *VAR_2 = FUNC_0(VAR_0);

 return VAR_2->pdata->fbdev == ((void*)0) || VAR_2->pdata->fbdev == VAR_1->dev;
}
