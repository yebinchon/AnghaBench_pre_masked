
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uvesafb_par {int nocrtc; } ;
struct fb_info {struct uvesafb_par* par; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 struct fb_info* FUNC_0 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_1(struct device *VAR_0,
  struct device_attribute *VAR_1, const char *VAR_2, size_t VAR_3)
{
 struct fb_info *VAR_4 = FUNC_0(VAR_0);
 struct uvesafb_par *VAR_5 = VAR_4->par;

 if (VAR_3 > 0) {
  if (VAR_2[0] == '0')
   VAR_5->nocrtc = 0;
  else
   VAR_5->nocrtc = 1;
 }
 return VAR_3;
}
