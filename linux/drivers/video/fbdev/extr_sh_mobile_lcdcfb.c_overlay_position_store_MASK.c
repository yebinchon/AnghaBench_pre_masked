
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_mobile_lcdc_overlay {int pos_x; int pos_y; scalar_t__ enabled; } ;
struct fb_info {struct sh_mobile_lcdc_overlay* par; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 struct fb_info* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (struct sh_mobile_lcdc_overlay*) ;
 int FUNC_3 (char const*,char**,int) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_1, struct device_attribute *VAR_2,
         const char *VAR_3, size_t VAR_4)
{
 struct fb_info *VAR_5 = FUNC_0(VAR_1);
 struct sh_mobile_lcdc_overlay *VAR_6 = VAR_5->par;
 char *VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_8 = FUNC_3(VAR_3, &VAR_7, 10);
 if (*VAR_7 != ',')
  return -VAR_0;

 VAR_9 = FUNC_3(VAR_7 + 1, &VAR_7, 10);
 if (FUNC_1(*VAR_7))
  VAR_7++;

 if (VAR_7 - VAR_3 != VAR_4)
  return -VAR_0;

 if (VAR_6->pos_x != VAR_8 || VAR_6->pos_y != VAR_9) {
  VAR_6->pos_x = VAR_8;
  VAR_6->pos_y = VAR_9;

  if (VAR_6->enabled)
   FUNC_2(VAR_6);
 }

 return VAR_4;
}
