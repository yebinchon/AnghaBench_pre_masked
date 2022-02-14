
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8505fb_info {unsigned long contrast; } ;
struct fb_info {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 struct fb_info* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (char const*,int,unsigned long*) ;
 struct wm8505fb_info* FUNC_2 (struct fb_info*) ;
 int FUNC_3 (struct fb_info*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
         struct device_attribute *VAR_2,
         const char *VAR_3, size_t VAR_4)
{
 struct fb_info *VAR_5 = FUNC_0(VAR_1);
 struct wm8505fb_info *VAR_6 = FUNC_2(VAR_5);
 unsigned long VAR_7;

 if (FUNC_1(VAR_3, 10, &VAR_7) || (VAR_7 > 0xff))
  return -VAR_0;
 VAR_6->contrast = VAR_7;

 FUNC_3(VAR_5);

 return VAR_4;
}
