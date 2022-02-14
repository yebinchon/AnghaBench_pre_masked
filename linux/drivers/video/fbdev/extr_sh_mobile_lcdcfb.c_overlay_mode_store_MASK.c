
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_mobile_lcdc_overlay {unsigned int mode; scalar_t__ enabled; } ;
struct fb_info {struct sh_mobile_lcdc_overlay* par; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 struct fb_info* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (struct sh_mobile_lcdc_overlay*) ;
 unsigned int FUNC_3 (char const*,char**,int) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_3, struct device_attribute *VAR_4,
     const char *VAR_5, size_t VAR_6)
{
 struct fb_info *VAR_7 = FUNC_0(VAR_3);
 struct sh_mobile_lcdc_overlay *VAR_8 = VAR_7->par;
 unsigned int VAR_9;
 char *VAR_10;

 VAR_9 = FUNC_3(VAR_5, &VAR_10, 10);
 if (FUNC_1(*VAR_10))
  VAR_10++;

 if (VAR_10 - VAR_5 != VAR_6)
  return -VAR_0;

 if (VAR_9 != VAR_1 && VAR_9 != VAR_2)
  return -VAR_0;

 if (VAR_8->mode != VAR_9) {
  VAR_8->mode = VAR_9;

  if (VAR_8->enabled)
   FUNC_2(VAR_8);
 }

 return VAR_6;
}
