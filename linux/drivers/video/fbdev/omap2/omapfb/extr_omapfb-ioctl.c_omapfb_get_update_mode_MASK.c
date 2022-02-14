
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omapfb_info {struct omapfb2_device* fbdev; } ;
struct omapfb_display_data {int update_mode; } ;
struct omapfb2_device {int dummy; } ;
struct omap_dss_device {int dummy; } ;
struct fb_info {int dummy; } ;
typedef enum omapfb_update_mode { ____Placeholder_omapfb_update_mode } omapfb_update_mode ;


 int VAR_0 ;
 struct omapfb_info* FUNC_0 (struct fb_info*) ;
 struct omap_dss_device* FUNC_1 (struct fb_info*) ;
 struct omapfb_display_data* FUNC_2 (struct omapfb2_device*,struct omap_dss_device*) ;
 int FUNC_3 (struct omapfb2_device*) ;
 int FUNC_4 (struct omapfb2_device*) ;

int FUNC_5(struct fb_info *VAR_1,
  enum omapfb_update_mode *VAR_2)
{
 struct omap_dss_device *VAR_3 = FUNC_1(VAR_1);
 struct omapfb_info *VAR_4 = FUNC_0(VAR_1);
 struct omapfb2_device *VAR_5 = VAR_4->fbdev;
 struct omapfb_display_data *VAR_6;

 if (!VAR_3)
  return -VAR_0;

 FUNC_3(VAR_5);

 VAR_6 = FUNC_2(VAR_5, VAR_3);

 *VAR_2 = VAR_6->update_mode;

 FUNC_4(VAR_5);

 return 0;
}
