
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef enum omapfb_update_mode { ____Placeholder_omapfb_update_mode } omapfb_update_mode ;


 int VAR_0 ;
 struct fb_info* FUNC_0 (struct device*) ;
 int FUNC_1 (struct fb_info*,int*) ;
 int FUNC_2 (char*,int ,char*,unsigned int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
  struct device_attribute *VAR_2, char *VAR_3)
{
 struct fb_info *VAR_4 = FUNC_0(VAR_1);
 enum omapfb_update_mode VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_4, &VAR_5);

 if (VAR_6)
  return VAR_6;

 return FUNC_2(VAR_3, VAR_0, "%u\n", (unsigned)VAR_5);
}
