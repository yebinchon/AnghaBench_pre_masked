
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct via_display_timing {int dummy; } ;
struct fb_var_screeninfo {int bits_per_pixel; int pixclock; scalar_t__ yres; scalar_t__ xres; } ;
struct TYPE_4__ {TYPE_1__* chip_info; } ;
struct TYPE_3__ {scalar_t__ gfx_chip_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct via_display_timing FUNC_1 (struct fb_var_screeninfo const*,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct via_display_timing*) ;
 int FUNC_3 (struct via_display_timing*) ;
 int FUNC_4 (int,scalar_t__,scalar_t__) ;
 int FUNC_5 (scalar_t__,int,int) ;
 int FUNC_6 (int,int) ;
 TYPE_2__* VAR_4 ;

void FUNC_7(const struct fb_var_screeninfo *VAR_5,
 u16 VAR_6, u16 VAR_7, int VAR_8)
{
 struct via_display_timing VAR_9 = FUNC_1(VAR_5,
  VAR_6 ? VAR_6 : VAR_5->xres, VAR_7 ? VAR_7 : VAR_5->yres);

 if (VAR_8 == VAR_0)
  FUNC_2(&VAR_9);
 else if (VAR_8 == VAR_1)
  FUNC_3(&VAR_9);

 FUNC_5(VAR_5->xres, VAR_5->bits_per_pixel / 8, VAR_8);
 if (VAR_4->chip_info->gfx_chip_name != VAR_2
  && VAR_4->chip_info->gfx_chip_name != VAR_3)
  FUNC_4(VAR_8, VAR_5->xres, VAR_5->yres);

 FUNC_6(FUNC_0(VAR_5->pixclock) * 1000, VAR_8);
}
