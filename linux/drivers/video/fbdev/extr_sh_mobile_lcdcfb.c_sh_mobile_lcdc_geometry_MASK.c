
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct fb_videomode {unsigned long xres; unsigned long hsync_len; unsigned long left_margin; unsigned long right_margin; int yres; int vsync_len; int upper_margin; int lower_margin; } ;
struct TYPE_6__ {struct fb_videomode mode; } ;
struct sh_mobile_lcdc_chan {int ldmt1r_value; int yres; int xres; TYPE_4__* cfg; TYPE_2__ display; TYPE_1__* info; } ;
struct fb_var_screeninfo {int sync; } ;
struct TYPE_7__ {int ldmt2r; int ldmt3r; } ;
struct TYPE_8__ {int flags; TYPE_3__ sys_bus_cfg; } ;
struct TYPE_5__ {struct fb_var_screeninfo var; } ;


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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (struct sh_mobile_lcdc_chan*,int ,int) ;
 int FUNC_1 (struct sh_mobile_lcdc_chan*,int ,int) ;
 int FUNC_2 (unsigned long,int ) ;

__attribute__((used)) static void FUNC_3(struct sh_mobile_lcdc_chan *VAR_22)
{
 const struct fb_var_screeninfo *VAR_23 = &VAR_22->info->var;
 const struct fb_videomode *VAR_24 = &VAR_22->display.mode;
 unsigned long VAR_25, VAR_26, VAR_27;
 u32 VAR_28;

 VAR_28 = VAR_22->ldmt1r_value;
 VAR_28 |= (VAR_23->sync & VAR_1) ? 0 : VAR_17;
 VAR_28 |= (VAR_23->sync & VAR_0) ? 0 : VAR_15;
 VAR_28 |= (VAR_22->cfg->flags & VAR_5) ? VAR_14 : 0;
 VAR_28 |= (VAR_22->cfg->flags & VAR_3) ? VAR_12 : 0;
 VAR_28 |= (VAR_22->cfg->flags & VAR_2) ? VAR_11 : 0;
 VAR_28 |= (VAR_22->cfg->flags & VAR_6) ? VAR_16 : 0;
 VAR_28 |= (VAR_22->cfg->flags & VAR_4) ? VAR_13 : 0;
 FUNC_0(VAR_22, VAR_10, VAR_28);


 FUNC_0(VAR_22, VAR_18, VAR_22->cfg->sys_bus_cfg.ldmt2r);
 FUNC_0(VAR_22, VAR_19, VAR_22->cfg->sys_bus_cfg.ldmt3r);


 VAR_25 = VAR_24->xres + VAR_24->hsync_len + VAR_24->left_margin
  + VAR_24->right_margin;
 VAR_28 = VAR_25 / 8;
 VAR_28 |= (FUNC_2(VAR_24->xres, VAR_22->xres) / 8) << 16;
 FUNC_0(VAR_22, VAR_8, VAR_28);

 VAR_26 = VAR_24->xres + VAR_24->right_margin;
 VAR_28 = VAR_26 / 8;
 VAR_28 |= (VAR_24->hsync_len / 8) << 16;
 FUNC_0(VAR_22, VAR_9, VAR_28);


 VAR_28 = VAR_24->yres + VAR_24->vsync_len + VAR_24->upper_margin
     + VAR_24->lower_margin;
 VAR_28 |= FUNC_2(VAR_24->yres, VAR_22->yres) << 16;
 FUNC_0(VAR_22, VAR_20, VAR_28);

 VAR_28 = VAR_24->yres + VAR_24->lower_margin;
 VAR_28 |= VAR_24->vsync_len << 16;
 FUNC_0(VAR_22, VAR_21, VAR_28);


 VAR_27 = VAR_24->xres + VAR_24->hsync_len + VAR_24->left_margin
   + VAR_24->right_margin;
 VAR_28 = ((VAR_24->xres & 7) << 24) | ((VAR_27 & 7) << 16)
     | ((VAR_24->hsync_len & 7) << 8) | (VAR_26 & 7);
 FUNC_0(VAR_22, VAR_7, VAR_28);
 FUNC_1(VAR_22, VAR_7, VAR_28);
}
