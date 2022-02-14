
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u_short ;
struct TYPE_4__ {scalar_t__ msb_right; scalar_t__ length; scalar_t__ offset; } ;
struct TYPE_3__ {int length; scalar_t__ msb_right; scalar_t__ offset; } ;
struct fb_var_screeninfo {size_t xres; size_t yres; int bits_per_pixel; int height; int width; int vmode; size_t hsync_len; size_t right_margin; size_t left_margin; size_t vsync_len; size_t lower_margin; size_t upper_margin; int sync; int pixclock; scalar_t__ activate; scalar_t__ nonstd; TYPE_2__ transp; TYPE_1__ red; TYPE_1__ green; TYPE_1__ blue; scalar_t__ grayscale; int yoffset; int xoffset; int yres_virtual; int xres_virtual; } ;
struct amifb_par {size_t clk_shift; size_t line_shift; size_t xres; size_t yres; int bpp; int bplcon0; int fmode; int beamcon0; size_t hsstop; size_t hsstrt; size_t htotal; size_t vsstop; size_t vsstrt; size_t vtotal; size_t diwstop_v; int vmode; int diwstop_h; int yoffset; int xoffset; int vyres; int vxres; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
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
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (struct fb_var_screeninfo*,int ,int) ;
 size_t FUNC_2 (int ) ;
 int * VAR_20 ;

__attribute__((used)) static void FUNC_3(struct fb_var_screeninfo *VAR_21,
      struct amifb_par *VAR_22)
{
 u_short VAR_23, VAR_24;

 FUNC_1(VAR_21, 0, sizeof(struct fb_var_screeninfo));

 VAR_23 = VAR_22->clk_shift;
 VAR_24 = VAR_22->line_shift;

 VAR_21->xres = VAR_22->xres;
 VAR_21->yres = VAR_22->yres;
 VAR_21->xres_virtual = VAR_22->vxres;
 VAR_21->yres_virtual = VAR_22->vyres;
 VAR_21->xoffset = VAR_22->xoffset;
 VAR_21->yoffset = VAR_22->yoffset;

 VAR_21->bits_per_pixel = VAR_22->bpp;
 VAR_21->grayscale = 0;

 VAR_21->red.offset = 0;
 VAR_21->red.msb_right = 0;
 VAR_21->red.length = VAR_22->bpp;
 if (VAR_22->bplcon0 & VAR_5)
  VAR_21->red.length -= 2;
 VAR_21->blue = VAR_21->green = VAR_21->red;
 VAR_21->transp.offset = 0;
 VAR_21->transp.length = 0;
 VAR_21->transp.msb_right = 0;

 if (VAR_22->bplcon0 & VAR_5)
  VAR_21->nonstd = VAR_7;
 else
  VAR_21->nonstd = 0;
 VAR_21->activate = 0;

 VAR_21->height = -1;
 VAR_21->width = -1;

 VAR_21->pixclock = VAR_20[VAR_23];

 if (VAR_18 && VAR_22->fmode & VAR_17)
  VAR_21->vmode = VAR_13;
 else if (VAR_22->bplcon0 & VAR_6)
  VAR_21->vmode = VAR_14;
 else
  VAR_21->vmode = VAR_15;

 if (!VAR_19 && VAR_22->beamcon0 & VAR_2) {
  VAR_21->hsync_len = (VAR_22->hsstop - VAR_22->hsstrt)>>VAR_23;
  VAR_21->right_margin = VAR_22->hsstrt>>VAR_23;
  VAR_21->left_margin = (VAR_22->htotal>>VAR_23) - VAR_21->xres - VAR_21->right_margin - VAR_21->hsync_len;
  VAR_21->vsync_len = (VAR_22->vsstop - VAR_22->vsstrt)>>VAR_24;
  VAR_21->lower_margin = VAR_22->vsstrt>>VAR_24;
  VAR_21->upper_margin = (VAR_22->vtotal>>VAR_24) - VAR_21->yres - VAR_21->lower_margin - VAR_21->vsync_len;
  VAR_21->sync = 0;
  if (VAR_22->beamcon0 & VAR_1)
   VAR_21->sync |= VAR_11;
  if (VAR_22->beamcon0 & VAR_3)
   VAR_21->sync |= VAR_12;
  if (VAR_22->beamcon0 & VAR_0)
   VAR_21->sync |= VAR_9;
 } else {
  VAR_21->sync = VAR_8;
  VAR_21->hsync_len = (152>>VAR_23) + FUNC_2(VAR_22->diwstop_h);
  VAR_21->right_margin = ((VAR_22->htotal - FUNC_0(VAR_22->diwstop_h))>>VAR_23) + VAR_21->hsync_len;
  VAR_21->left_margin = (VAR_22->htotal>>VAR_23) - VAR_21->xres - VAR_21->right_margin - VAR_21->hsync_len;
  VAR_21->vsync_len = 4>>VAR_24;
  VAR_21->lower_margin = ((VAR_22->vtotal - VAR_22->diwstop_v)>>VAR_24) + VAR_21->vsync_len;
  VAR_21->upper_margin = (((VAR_22->vtotal - 2)>>VAR_24) + 1) - VAR_21->yres -
        VAR_21->lower_margin - VAR_21->vsync_len;
 }

 if (VAR_22->bplcon0 & VAR_4)
  VAR_21->sync |= VAR_10;
 if (VAR_22->vmode & VAR_16)
  VAR_21->vmode |= VAR_16;
}
