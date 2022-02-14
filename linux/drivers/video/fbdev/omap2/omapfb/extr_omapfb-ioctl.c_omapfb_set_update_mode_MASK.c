
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omapfb_info {struct omapfb2_device* fbdev; } ;
struct omapfb_display_data {int update_mode; } ;
struct omapfb2_device {int dummy; } ;
struct omap_dss_device {int caps; } ;
struct fb_info {int dummy; } ;
typedef enum omapfb_update_mode { ____Placeholder_omapfb_update_mode } omapfb_update_mode ;


 int VAR_0 ;
 struct omapfb_info* FUNC_0 (struct fb_info*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct omap_dss_device* FUNC_1 (struct fb_info*) ;
 struct omapfb_display_data* FUNC_2 (struct omapfb2_device*,struct omap_dss_device*) ;
 int FUNC_3 (struct omapfb2_device*) ;
 int FUNC_4 (struct omapfb2_device*,struct omap_dss_device*) ;
 int FUNC_5 (struct omapfb2_device*,struct omap_dss_device*) ;
 int FUNC_6 (struct omapfb2_device*) ;

int FUNC_7(struct fb_info *VAR_4,
       enum omapfb_update_mode VAR_5)
{
 struct omap_dss_device *VAR_6 = FUNC_1(VAR_4);
 struct omapfb_info *VAR_7 = FUNC_0(VAR_4);
 struct omapfb2_device *VAR_8 = VAR_7->fbdev;
 struct omapfb_display_data *VAR_9;
 int VAR_10;

 if (!VAR_6)
  return -VAR_0;

 if (VAR_5 != VAR_1 && VAR_5 != VAR_2)
  return -VAR_0;

 FUNC_3(VAR_8);

 VAR_9 = FUNC_2(VAR_8, VAR_6);

 if (VAR_9->update_mode == VAR_5) {
  FUNC_6(VAR_8);
  return 0;
 }

 VAR_10 = 0;

 if (VAR_6->caps & VAR_3) {
  if (VAR_5 == VAR_1)
   FUNC_4(VAR_8, VAR_6);
  else
   FUNC_5(VAR_8, VAR_6);

  VAR_9->update_mode = VAR_5;
 } else {
  if (VAR_5 == VAR_2)
   VAR_10 = -VAR_0;
 }

 FUNC_6(VAR_8);

 return VAR_10;
}
