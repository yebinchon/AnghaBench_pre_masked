
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvidia_par {int pci_dev; } ;
struct fb_info {struct backlight_device* bl_dev; } ;
struct backlight_device {int dummy; } ;


 int FUNC_0 (struct backlight_device*) ;
 struct fb_info* FUNC_1 (int ) ;
 int FUNC_2 (char*) ;

void FUNC_3(struct nvidia_par *VAR_0)
{
 struct fb_info *VAR_1 = FUNC_1(VAR_0->pci_dev);
 struct backlight_device *VAR_2 = VAR_1->bl_dev;

 FUNC_0(VAR_2);
 FUNC_2("nvidia: Backlight unloaded\n");
}
