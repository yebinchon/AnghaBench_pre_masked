
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lcd_ctrl_config {int bpp; int fdd; int raster_order; int fifo_th; int dma_burst_sz; } ;
struct fb_videomode {int sync; scalar_t__ yres; scalar_t__ xres; int right_margin; int hsync_len; int left_margin; int lower_margin; int vsync_len; int upper_margin; } ;
struct da8xx_fb_par {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct da8xx_fb_par*,struct fb_videomode*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct lcd_ctrl_config const*,struct fb_videomode*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct da8xx_fb_par*,unsigned int,unsigned int,int,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int,int ) ;

__attribute__((used)) static int FUNC_9(struct da8xx_fb_par *VAR_4, const struct lcd_ctrl_config *VAR_5,
  struct fb_videomode *VAR_6)
{
 u32 VAR_7;
 int VAR_8 = 0;

 VAR_8 = FUNC_0(VAR_4, VAR_6);
 if (VAR_8) {
  FUNC_1(VAR_4->dev, "unable to configure clock\n");
  return VAR_8;
 }

 if (VAR_6->sync & VAR_0)
  FUNC_8((FUNC_7(VAR_3) |
   VAR_1), VAR_3);
 else
  FUNC_8((FUNC_7(VAR_3) &
   ~VAR_1), VAR_3);


 VAR_8 = FUNC_3(VAR_5->dma_burst_sz, VAR_5->fifo_th);
 if (VAR_8 < 0)
  return VAR_8;


 FUNC_6(VAR_6->upper_margin, VAR_6->vsync_len,
   VAR_6->lower_margin);
 FUNC_5(VAR_6->left_margin, VAR_6->hsync_len,
   VAR_6->right_margin);


 VAR_8 = FUNC_2(VAR_5, VAR_6);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_7 = VAR_5->bpp;

 if (VAR_7 == 12)
  VAR_7 = 16;
 VAR_8 = FUNC_4(VAR_4, (unsigned int)VAR_6->xres,
    (unsigned int)VAR_6->yres, VAR_7,
    VAR_5->raster_order);
 if (VAR_8 < 0)
  return VAR_8;


 FUNC_8((FUNC_7(VAR_2) & 0xfff00fff) |
         (VAR_5->fdd << 12), VAR_2);

 return 0;
}
