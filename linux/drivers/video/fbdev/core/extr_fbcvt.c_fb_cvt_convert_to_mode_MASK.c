
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_videomode {int sync; int vsync_len; int lower_margin; int upper_margin; int hsync_len; int right_margin; int left_margin; int pixclock; int refresh; } ;
struct fb_cvt_data {int pixclock; int flags; int vsync; int v_front_porch; int v_back_porch; int hsync; int h_front_porch; int h_back_porch; int f_refresh; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct fb_cvt_data *VAR_3,
       struct fb_videomode *VAR_4)
{
 VAR_4->refresh = VAR_3->f_refresh;
 VAR_4->pixclock = FUNC_0(VAR_3->pixclock/1000);
 VAR_4->left_margin = VAR_3->h_back_porch;
 VAR_4->right_margin = VAR_3->h_front_porch;
 VAR_4->hsync_len = VAR_3->hsync;
 VAR_4->upper_margin = VAR_3->v_back_porch;
 VAR_4->lower_margin = VAR_3->v_front_porch;
 VAR_4->vsync_len = VAR_3->vsync;

 VAR_4->sync &= ~(VAR_1 | VAR_2);

 if (VAR_3->flags & VAR_0)
  VAR_4->sync |= VAR_1;
 else
  VAR_4->sync |= VAR_2;
}
