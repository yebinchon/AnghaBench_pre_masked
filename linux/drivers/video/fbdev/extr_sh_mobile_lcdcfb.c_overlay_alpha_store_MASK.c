
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_mobile_lcdc_overlay {unsigned int alpha; scalar_t__ mode; scalar_t__ enabled; } ;
struct fb_info {struct sh_mobile_lcdc_overlay* par; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 struct fb_info* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (struct sh_mobile_lcdc_overlay*) ;
 unsigned int FUNC_3 (char const*,char**,int) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_2, struct device_attribute *VAR_3,
      const char *VAR_4, size_t VAR_5)
{
 struct fb_info *VAR_6 = FUNC_0(VAR_2);
 struct sh_mobile_lcdc_overlay *VAR_7 = VAR_6->par;
 unsigned int VAR_8;
 char *VAR_9;

 VAR_8 = FUNC_3(VAR_4, &VAR_9, 10);
 if (FUNC_1(*VAR_9))
  VAR_9++;

 if (VAR_9 - VAR_4 != VAR_5)
  return -VAR_0;

 if (VAR_8 > 255)
  return -VAR_0;

 if (VAR_7->alpha != VAR_8) {
  VAR_7->alpha = VAR_8;

  if (VAR_7->mode == VAR_1 && VAR_7->enabled)
   FUNC_2(VAR_7);
 }

 return VAR_5;
}
