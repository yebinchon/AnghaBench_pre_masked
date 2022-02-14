
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omapfb_info {int mirror; int region; } ;
struct fb_var_screeninfo {int dummy; } ;
struct fb_info {struct fb_var_screeninfo var; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef int new_var ;


 struct omapfb_info* FUNC_0 (struct fb_info*) ;
 int FUNC_1 (struct fb_info*,struct fb_var_screeninfo*) ;
 struct fb_info* FUNC_2 (struct device*) ;
 int FUNC_3 (struct fb_info*) ;
 int FUNC_4 (struct fb_var_screeninfo*,struct fb_var_screeninfo*,int) ;
 int FUNC_5 (struct fb_info*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct fb_info*) ;
 int FUNC_9 (char const*,int*) ;
 int FUNC_10 (struct fb_info*) ;

__attribute__((used)) static ssize_t FUNC_11(struct device *VAR_0,
  struct device_attribute *VAR_1,
  const char *VAR_2, size_t VAR_3)
{
 struct fb_info *VAR_4 = FUNC_2(VAR_0);
 struct omapfb_info *VAR_5 = FUNC_0(VAR_4);
 bool VAR_6;
 int VAR_7;
 struct fb_var_screeninfo VAR_8;

 VAR_7 = FUNC_9(VAR_2, &VAR_6);
 if (VAR_7)
  return VAR_7;

 FUNC_3(VAR_4);

 VAR_5->mirror = VAR_6;

 FUNC_6(VAR_5->region);

 FUNC_4(&VAR_8, &VAR_4->var, sizeof(VAR_8));
 VAR_7 = FUNC_1(VAR_4, &VAR_8);
 if (VAR_7)
  goto out;
 FUNC_4(&VAR_4->var, &VAR_8, sizeof(VAR_4->var));

 FUNC_8(VAR_4);

 VAR_7 = FUNC_5(VAR_4, 0);
 if (VAR_7)
  goto out;

 VAR_7 = VAR_3;
out:
 FUNC_7(VAR_5->region);

 FUNC_10(VAR_4);

 return VAR_7;
}
