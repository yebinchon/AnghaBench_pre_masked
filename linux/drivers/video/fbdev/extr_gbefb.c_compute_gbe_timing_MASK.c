
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gbe_timing_info {int width; int height; int pll_m; int pll_n; int pll_p; int cfreq; int htotal; int vtotal; int fields_sec; int hblank_start; int vblank_start; int hblank_end; int hsync_start; int hsync_end; int vblank_end; int vsync_start; int vsync_end; } ;
struct gbe_pll_info {int clock_rate; int fvco_min; int fvco_max; } ;
struct fb_var_screeninfo {int pixclock; int xres; int yres; int left_margin; int right_margin; int hsync_len; int upper_margin; int lower_margin; int vsync_len; } ;


 int VAR_0 ;
 struct gbe_pll_info* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct fb_var_screeninfo *VAR_3,
         struct gbe_timing_info *VAR_4)
{
 int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 int VAR_13;
 struct gbe_pll_info *VAR_14;

 if (VAR_2 < 2)
  VAR_14 = &VAR_1[0];
 else
  VAR_14 = &VAR_1[1];






 VAR_12 = 1000000000;
 VAR_10 = VAR_9 = VAR_11 = 0;
 for (VAR_7 = 0; VAR_7 < 4; VAR_7++)
  for (VAR_5 = 1; VAR_5 < 256; VAR_5++)
   for (VAR_6 = 1; VAR_6 < 64; VAR_6++) {
    VAR_13 = (1000000 / VAR_14->clock_rate) *
      (VAR_6 << VAR_7) / VAR_5;

    VAR_8 = VAR_3->pixclock - VAR_13;

    if (VAR_8 < 0)
     VAR_8 = -VAR_8;

    if (VAR_8 < VAR_12 &&
        VAR_5 / VAR_6 >
        VAR_14->fvco_min / VAR_14->clock_rate &&
         VAR_5 / VAR_6 <
        VAR_14->fvco_max / VAR_14->clock_rate) {
     VAR_12 = VAR_8;
     VAR_9 = VAR_5;
     VAR_10 = VAR_6;
     VAR_11 = VAR_7;
    }
   }

 if (!VAR_10 || !VAR_9)
  return -VAR_0;

 VAR_13 = (1000000 / VAR_14->clock_rate) *
  (VAR_10 << VAR_11) / VAR_9;


 if (VAR_4) {
  VAR_4->width = VAR_3->xres;
  VAR_4->height = VAR_3->yres;
  VAR_4->pll_m = VAR_9;
  VAR_4->pll_n = VAR_10;
  VAR_4->pll_p = VAR_11;
  VAR_4->cfreq = VAR_14->clock_rate * 1000 * VAR_4->pll_m /
   (VAR_4->pll_n << VAR_4->pll_p);
  VAR_4->htotal = VAR_3->left_margin + VAR_3->xres +
    VAR_3->right_margin + VAR_3->hsync_len;
  VAR_4->vtotal = VAR_3->upper_margin + VAR_3->yres +
    VAR_3->lower_margin + VAR_3->vsync_len;
  VAR_4->fields_sec = 1000 * VAR_4->cfreq / VAR_4->htotal *
    1000 / VAR_4->vtotal;
  VAR_4->hblank_start = VAR_3->xres;
  VAR_4->vblank_start = VAR_3->yres;
  VAR_4->hblank_end = VAR_4->htotal;
  VAR_4->hsync_start = VAR_3->xres + VAR_3->right_margin + 1;
  VAR_4->hsync_end = VAR_4->hsync_start + VAR_3->hsync_len;
  VAR_4->vblank_end = VAR_4->vtotal;
  VAR_4->vsync_start = VAR_3->yres + VAR_3->lower_margin + 1;
  VAR_4->vsync_end = VAR_4->vsync_start + VAR_3->vsync_len;
 }

 return VAR_13;
}
