
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omapfb_info {int rotation_type; int region; } ;
struct omapfb2_mem_region {scalar_t__ size; } ;
struct fb_info {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct omapfb_info* FUNC_0 (struct fb_info*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct fb_info* FUNC_1 (struct device*) ;
 int FUNC_2 (char const*,int ,int*) ;
 int FUNC_3 (struct fb_info*) ;
 struct omapfb2_mem_region* FUNC_4 (int ) ;
 int FUNC_5 (struct omapfb2_mem_region*) ;
 int FUNC_6 (struct fb_info*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_4,
  struct device_attribute *VAR_5,
  const char *VAR_6, size_t VAR_7)
{
 struct fb_info *VAR_8 = FUNC_1(VAR_4);
 struct omapfb_info *VAR_9 = FUNC_0(VAR_8);
 struct omapfb2_mem_region *VAR_10;
 int VAR_11;
 int VAR_12;

 VAR_12 = FUNC_2(VAR_6, 0, &VAR_11);
 if (VAR_12)
  return VAR_12;

 if (VAR_11 != VAR_2 && VAR_11 != VAR_3)
  return -VAR_1;

 FUNC_3(VAR_8);

 VAR_12 = 0;
 if (VAR_11 == VAR_9->rotation_type)
  goto out;

 VAR_10 = FUNC_4(VAR_9->region);

 if (VAR_10->size) {
  VAR_12 = -VAR_0;
  goto put_region;
 }

 VAR_9->rotation_type = VAR_11;





put_region:
 FUNC_5(VAR_10);
out:
 FUNC_6(VAR_8);

 return VAR_12 ? VAR_12 : VAR_7;
}
