
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omapfb_info {int num_overlays; int * rotation; } ;
struct fb_info {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct omapfb_info* FUNC_0 (struct fb_info*) ;
 int VAR_0 ;
 struct fb_info* FUNC_1 (struct device*) ;
 int FUNC_2 (struct fb_info*) ;
 int FUNC_3 (char*,int,char*,...) ;
 int FUNC_4 (struct fb_info*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
  struct device_attribute *VAR_2, char *VAR_3)
{
 struct fb_info *VAR_4 = FUNC_1(VAR_1);
 struct omapfb_info *VAR_5 = FUNC_0(VAR_4);
 ssize_t VAR_6 = 0;
 int VAR_7;

 FUNC_2(VAR_4);

 for (VAR_7 = 0; VAR_7 < VAR_5->num_overlays; VAR_7++) {
  VAR_6 += FUNC_3(VAR_3 + VAR_6, VAR_0 - VAR_6, "%s%d",
    VAR_7 == 0 ? "" : ",", VAR_5->rotation[VAR_7]);
 }

 VAR_6 += FUNC_3(VAR_3 + VAR_6, VAR_0 - VAR_6, "\n");

 FUNC_4(VAR_4);

 return VAR_6;
}
