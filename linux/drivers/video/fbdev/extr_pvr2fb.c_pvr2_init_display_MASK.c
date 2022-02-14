
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pvr2fb_par {int vsync_total; int hsync_total; int is_interlaced; int disp_start; int borderstart_h; int borderstop_h; int borderstart_v; int borderstop_v; int diwstart_h; int diwstart_v; int is_lowres; int is_doublescan; } ;
struct fb_var_screeninfo {int bits_per_pixel; int yres; scalar_t__ xres; scalar_t__ xoffset; } ;
struct TYPE_2__ {int line_length; } ;
struct fb_info {TYPE_1__ fix; struct fb_var_screeninfo var; scalar_t__ par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (scalar_t__,int) ;
 scalar_t__ VAR_14 ;

__attribute__((used)) static void FUNC_3(struct fb_info *VAR_15)
{
 struct pvr2fb_par *VAR_16 = (struct pvr2fb_par *) VAR_15->par;
 struct fb_var_screeninfo *VAR_17 = &VAR_15->var;
 unsigned int VAR_18, VAR_19, VAR_20 = 1;
 unsigned int VAR_21 = VAR_17->bits_per_pixel >> 3;


 FUNC_1((VAR_16->vsync_total << 16) | VAR_16->hsync_total, VAR_12);




 if (VAR_14 != VAR_13 && VAR_16->is_interlaced)
  VAR_20 += VAR_15->fix.line_length / 4;
 VAR_18 = (VAR_16->is_interlaced ? VAR_17->yres / 2 : VAR_17->yres);
 VAR_19 = FUNC_2(VAR_17->xres, VAR_17->bits_per_pixel) / 4;
 FUNC_1((VAR_20 << 20) | (--VAR_18 << 10) | --VAR_19,
           VAR_8);


 FUNC_1(VAR_16->disp_start, VAR_3);
 FUNC_1(VAR_16->disp_start +
           FUNC_2(VAR_17->xoffset+VAR_17->xres, VAR_17->bits_per_pixel),
           VAR_4);


 FUNC_1((VAR_16->borderstart_h << 16) | VAR_16->borderstop_h, VAR_1);
 FUNC_1((VAR_16->borderstart_v << 16) | VAR_16->borderstop_v, VAR_2);
 FUNC_1(0, VAR_0);


 FUNC_1(VAR_16->diwstart_h, VAR_6);
 FUNC_1((VAR_16->diwstart_v << 16) | VAR_16->diwstart_v, VAR_9);


 FUNC_1((0x16 << 16) | VAR_16->is_lowres, VAR_5);


 FUNC_1(((VAR_14 == VAR_13) << 23) |
           (VAR_16->is_doublescan << 1) | 1, VAR_7);


 FUNC_1(FUNC_0(VAR_7) | (--VAR_21 << 2), VAR_7);
 FUNC_1(VAR_21 << 2, VAR_10);



 FUNC_1(0x100 | ((VAR_16->is_interlaced ) << 4), VAR_11);
}
