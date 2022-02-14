
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct fb_videomode {int dummy; } ;
struct fb_var_screeninfo {int yres; int xres; int pixclock; } ;
struct TYPE_6__ {TYPE_2__* shared; } ;
struct TYPE_4__ {int max_pixel_clock; } ;
struct TYPE_5__ {TYPE_1__ tmds_setting_info; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct fb_var_screeninfo*,int ,int ,int) ;
 int FUNC_2 (struct fb_var_screeninfo*,struct fb_videomode const*) ;
 struct fb_videomode* FUNC_3 (int ,int ,int) ;
 TYPE_3__* VAR_0 ;

void FUNC_4(const struct fb_var_screeninfo *VAR_1,
 u16 VAR_2, u16 VAR_3, int VAR_4)
{
 struct fb_var_screeninfo VAR_5 = *VAR_1;
 const struct fb_videomode *VAR_6;
 int VAR_7;

 VAR_7 = VAR_0->shared->tmds_setting_info.max_pixel_clock;
 if (VAR_7 && FUNC_0(VAR_1->pixclock) / 1000 > VAR_7) {
  VAR_6 = FUNC_3(VAR_1->xres, VAR_1->yres, 60);
  if (VAR_6)
   FUNC_2(&VAR_5, VAR_6);
 }

 FUNC_1(&VAR_5, VAR_2, VAR_3, VAR_4);
}
