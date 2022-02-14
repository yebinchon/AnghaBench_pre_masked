
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8505fb_info {int contrast; } ;
struct fb_info {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct fb_info* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;
 struct wm8505fb_info* FUNC_2 (struct fb_info*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
        struct device_attribute *VAR_1, char *VAR_2)
{
 struct fb_info *VAR_3 = FUNC_0(VAR_0);
 struct wm8505fb_info *VAR_4 = FUNC_2(VAR_3);

 return FUNC_1(VAR_2, "%u\n", VAR_4->contrast);
}
