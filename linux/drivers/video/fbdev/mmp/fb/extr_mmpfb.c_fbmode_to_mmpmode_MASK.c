
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long long u64 ;
typedef scalar_t__ u32 ;
struct mmp_mode {int hsync_invert; int vsync_invert; int invert_pixclock; int pix_fmt_out; int vsync_len; int hsync_len; int lower_margin; int upper_margin; int right_margin; int left_margin; scalar_t__ pixclock_freq; int yres; int xres; int refresh; int name; } ;
struct fb_videomode {int sync; int vmode; int vsync_len; int hsync_len; int lower_margin; int upper_margin; int right_margin; int left_margin; int pixclock; int yres; int xres; int refresh; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (long long,int ) ;

__attribute__((used)) static void FUNC_1(struct mmp_mode *VAR_2,
  struct fb_videomode *VAR_3, int VAR_4)
{
 u64 VAR_5 = 1000000000000ll;
 VAR_2->name = VAR_3->name;
 VAR_2->refresh = VAR_3->refresh;
 VAR_2->xres = VAR_3->xres;
 VAR_2->yres = VAR_3->yres;

 FUNC_0(VAR_5, VAR_3->pixclock);
 VAR_2->pixclock_freq = (u32)VAR_5;

 VAR_2->left_margin = VAR_3->left_margin;
 VAR_2->right_margin = VAR_3->right_margin;
 VAR_2->upper_margin = VAR_3->upper_margin;
 VAR_2->lower_margin = VAR_3->lower_margin;
 VAR_2->hsync_len = VAR_3->hsync_len;
 VAR_2->vsync_len = VAR_3->vsync_len;
 VAR_2->hsync_invert = !!(VAR_3->sync & VAR_0);
 VAR_2->vsync_invert = !!(VAR_3->sync & VAR_1);

 VAR_2->invert_pixclock = !!(VAR_3->vmode & 8);
 VAR_2->pix_fmt_out = VAR_4;
}
