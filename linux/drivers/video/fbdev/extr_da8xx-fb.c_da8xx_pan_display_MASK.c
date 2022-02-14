
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_var_screeninfo {scalar_t__ xoffset; scalar_t__ yoffset; int bits_per_pixel; unsigned int yres; } ;
struct fb_fix_screeninfo {int smem_start; int line_length; } ;
struct fb_info {struct fb_var_screeninfo var; struct fb_fix_screeninfo fix; struct da8xx_fb_par* par; } ;
struct da8xx_fb_par {unsigned int dma_start; unsigned int dma_end; int which_dma_channel_done; int lock_for_chan_update; } ;
typedef int new_var ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct fb_var_screeninfo*,struct fb_info*) ;
 int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (struct fb_var_screeninfo*,struct fb_var_screeninfo*,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct fb_var_screeninfo *VAR_5,
        struct fb_info *VAR_6)
{
 int VAR_7 = 0;
 struct fb_var_screeninfo VAR_8;
 struct da8xx_fb_par *VAR_9 = VAR_6->par;
 struct fb_fix_screeninfo *VAR_10 = &VAR_6->fix;
 unsigned int VAR_11;
 unsigned int VAR_12;
 unsigned long VAR_13;

 if (VAR_5->xoffset != VAR_6->var.xoffset ||
   VAR_5->yoffset != VAR_6->var.yoffset) {
  FUNC_2(&VAR_8, &VAR_6->var, sizeof(VAR_8));
  VAR_8.xoffset = VAR_5->xoffset;
  VAR_8.yoffset = VAR_5->yoffset;
  if (FUNC_0(&VAR_8, VAR_6))
   VAR_7 = -VAR_0;
  else {
   FUNC_2(&VAR_6->var, &VAR_8, sizeof(VAR_8));

   VAR_12 = VAR_10->smem_start +
    VAR_8.yoffset * VAR_10->line_length +
    VAR_8.xoffset * VAR_6->var.bits_per_pixel / 8;
   VAR_11 = VAR_12 + VAR_6->var.yres * VAR_10->line_length - 1;
   VAR_9->dma_start = VAR_12;
   VAR_9->dma_end = VAR_11;
   FUNC_3(&VAR_9->lock_for_chan_update,
     VAR_13);
   if (VAR_9->which_dma_channel_done == 0) {
    FUNC_1(VAR_9->dma_start,
        VAR_1);
    FUNC_1(VAR_9->dma_end,
        VAR_3);
   } else if (VAR_9->which_dma_channel_done == 1) {
    FUNC_1(VAR_9->dma_start,
        VAR_2);
    FUNC_1(VAR_9->dma_end,
        VAR_4);
   }
   FUNC_4(&VAR_9->lock_for_chan_update,
     VAR_13);
  }
 }

 return VAR_7;
}
