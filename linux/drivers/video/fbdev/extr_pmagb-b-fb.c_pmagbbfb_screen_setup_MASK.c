
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pmagbbfb_par {int dummy; } ;
struct TYPE_4__ {int xres; int xres_virtual; int yres; int yres_virtual; int left_margin; int right_margin; int upper_margin; int lower_margin; int hsync_len; int vsync_len; } ;
struct TYPE_3__ {int line_length; } ;
struct fb_info {TYPE_2__ var; TYPE_1__ fix; struct pmagbbfb_par* par; } ;


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
 int FUNC_0 (struct pmagbbfb_par*,int ) ;

__attribute__((used)) static void FUNC_1(struct fb_info *VAR_18)
{
 struct pmagbbfb_par *VAR_19 = VAR_18->par;

 VAR_18->var.xres = ((FUNC_0(VAR_19, VAR_0) >>
      VAR_7) & VAR_6) * 4;
 VAR_18->var.xres_virtual = VAR_18->var.xres;
 VAR_18->var.yres = (FUNC_0(VAR_19, VAR_1) >>
     VAR_15) & VAR_14;
 VAR_18->var.yres_virtual = VAR_18->var.yres;
 VAR_18->var.left_margin = ((FUNC_0(VAR_19, VAR_0) >>
      VAR_3) &
     VAR_2) * 4;
 VAR_18->var.right_margin = ((FUNC_0(VAR_19, VAR_0) >>
       VAR_5) &
      VAR_4) * 4;
 VAR_18->var.upper_margin = (FUNC_0(VAR_19, VAR_1) >>
      VAR_11) & VAR_10;
 VAR_18->var.lower_margin = (FUNC_0(VAR_19, VAR_1) >>
      VAR_13) & VAR_12;
 VAR_18->var.hsync_len = ((FUNC_0(VAR_19, VAR_0) >>
    VAR_9) &
          VAR_8) * 4;
 VAR_18->var.vsync_len = (FUNC_0(VAR_19, VAR_1) >>
          VAR_17) & VAR_16;

 VAR_18->fix.line_length = VAR_18->var.xres;
}
