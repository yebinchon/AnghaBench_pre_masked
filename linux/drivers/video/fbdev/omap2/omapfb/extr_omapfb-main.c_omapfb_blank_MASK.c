
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omapfb_info {struct omapfb2_device* fbdev; } ;
struct omapfb_display_data {int auto_update_work_enabled; int update_mode; } ;
struct omapfb2_device {int dummy; } ;
struct omap_dss_device {int caps; TYPE_1__* driver; int state; } ;
struct fb_info {int dummy; } ;
struct TYPE_2__ {int (* enable ) (struct omap_dss_device*) ;int (* disable ) (struct omap_dss_device*) ;} ;


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
 int FUNC_7 (struct omap_dss_device*) ;
 int FUNC_8 (struct omap_dss_device*) ;

__attribute__((used)) static int FUNC_9(int VAR_4, struct fb_info *VAR_5)
{
 struct omapfb_info *VAR_6 = FUNC_0(VAR_5);
 struct omapfb2_device *VAR_7 = VAR_6->fbdev;
 struct omap_dss_device *VAR_8 = FUNC_1(VAR_5);
 struct omapfb_display_data *VAR_9;
 int VAR_10 = 0;

 if (!VAR_8)
  return -VAR_0;

 FUNC_3(VAR_7);

 VAR_9 = FUNC_2(VAR_7, VAR_8);

 switch (VAR_4) {
 case 129:
  if (VAR_8->state == VAR_2)
   goto exit;

  VAR_10 = VAR_8->driver->enable(VAR_8);

  if ((VAR_8->caps & VAR_3) &&
    VAR_9->update_mode == VAR_1 &&
    !VAR_9->auto_update_work_enabled)
   FUNC_4(VAR_7, VAR_8);

  break;

 case 131:


 case 128:
 case 132:
 case 130:
  if (VAR_8->state != VAR_2)
   goto exit;

  if (VAR_9->auto_update_work_enabled)
   FUNC_5(VAR_7, VAR_8);

  VAR_8->driver->disable(VAR_8);

  break;

 default:
  VAR_10 = -VAR_0;
 }

exit:
 FUNC_6(VAR_7);

 return VAR_10;
}
