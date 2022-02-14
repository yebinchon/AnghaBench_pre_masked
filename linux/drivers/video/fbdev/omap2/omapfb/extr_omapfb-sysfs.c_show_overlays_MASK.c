
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omapfb_info {int num_overlays; struct omap_overlay** overlays; struct omapfb2_device* fbdev; } ;
struct omapfb2_device {int num_overlays; struct omap_overlay** overlays; } ;
struct omap_overlay {int dummy; } ;
struct fb_info {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct omapfb_info* FUNC_0 (struct fb_info*) ;
 int VAR_0 ;
 struct fb_info* FUNC_1 (struct device*) ;
 int FUNC_2 (struct fb_info*) ;
 int FUNC_3 (struct omapfb2_device*) ;
 int FUNC_4 (struct omapfb2_device*) ;
 int FUNC_5 (char*,int,char*,...) ;
 int FUNC_6 (struct fb_info*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_1,
  struct device_attribute *VAR_2, char *VAR_3)
{
 struct fb_info *VAR_4 = FUNC_1(VAR_1);
 struct omapfb_info *VAR_5 = FUNC_0(VAR_4);
 struct omapfb2_device *VAR_6 = VAR_5->fbdev;
 ssize_t VAR_7 = 0;
 int VAR_8;

 FUNC_2(VAR_4);
 FUNC_3(VAR_6);

 for (VAR_8 = 0; VAR_8 < VAR_5->num_overlays; VAR_8++) {
  struct omap_overlay *VAR_9 = VAR_5->overlays[VAR_8];
  int VAR_10;

  for (VAR_10 = 0; VAR_10 < VAR_6->num_overlays; ++VAR_10)
   if (VAR_9 == VAR_6->overlays[VAR_10])
    break;

  VAR_7 += FUNC_5(VAR_3 + VAR_7, VAR_0 - VAR_7, "%s%d",
    VAR_8 == 0 ? "" : ",", VAR_10);
 }

 VAR_7 += FUNC_5(VAR_3 + VAR_7, VAR_0 - VAR_7, "\n");

 FUNC_4(VAR_6);
 FUNC_6(VAR_4);

 return VAR_7;
}
