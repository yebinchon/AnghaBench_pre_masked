
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sh_mobile_lcdc_priv {int dev; } ;
struct TYPE_4__ {int height; int width; } ;
struct sh_mobile_lcdc_chan {TYPE_2__* format; int yres_virtual; int xres_virtual; TYPE_1__ display; int pitch; int fb_size; int dma_handle; int pseudo_palette; int fb_mem; struct fb_info* info; struct sh_mobile_lcdc_priv* lcdc; } ;
struct fb_videomode {int dummy; } ;
struct fb_var_screeninfo {int grayscale; int bits_per_pixel; int activate; int yres_virtual; int xres_virtual; int height; int width; } ;
struct TYPE_6__ {int ypanstep; int xpanstep; int visual; int line_length; int smem_len; int smem_start; } ;
struct fb_info {struct fb_var_screeninfo var; TYPE_3__ fix; int cmap; int modelist; struct sh_mobile_lcdc_chan* par; int * pseudo_palette; int screen_base; int device; int * fbops; int flags; } ;
struct TYPE_5__ {int fourcc; int bpp; scalar_t__ yuv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (struct fb_videomode const*,unsigned int,int *) ;
 int FUNC_3 (struct fb_var_screeninfo*,struct fb_videomode const*) ;
 struct fb_info* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct fb_var_screeninfo*,struct fb_info*) ;
 TYPE_3__ VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_6(struct sh_mobile_lcdc_chan *VAR_8,
          const struct fb_videomode *VAR_9,
          unsigned int VAR_10)
{
 struct sh_mobile_lcdc_priv *VAR_11 = VAR_8->lcdc;
 struct fb_var_screeninfo *VAR_12;
 struct fb_info *VAR_13;
 int VAR_14;




 VAR_13 = FUNC_4(0, VAR_11->dev);
 if (!VAR_13)
  return -VAR_0;

 VAR_8->info = VAR_13;

 VAR_13->flags = VAR_1;
 VAR_13->fbops = &VAR_7;
 VAR_13->device = VAR_11->dev;
 VAR_13->screen_base = VAR_8->fb_mem;
 VAR_13->pseudo_palette = &VAR_8->pseudo_palette;
 VAR_13->par = VAR_8;

 FUNC_2(VAR_9, VAR_10, &VAR_13->modelist);

 VAR_14 = FUNC_1(&VAR_13->cmap, VAR_5, 0);
 if (VAR_14 < 0) {
  FUNC_0(VAR_11->dev, "unable to allocate cmap\n");
  return VAR_14;
 }




 VAR_13->fix = VAR_6;
 VAR_13->fix.smem_start = VAR_8->dma_handle;
 VAR_13->fix.smem_len = VAR_8->fb_size;
 VAR_13->fix.line_length = VAR_8->pitch;

 if (VAR_8->format->yuv)
  VAR_13->fix.visual = VAR_3;
 else
  VAR_13->fix.visual = VAR_4;

 switch (VAR_8->format->fourcc) {
 case 131:
 case 129:
  VAR_13->fix.ypanstep = 2;

 case 130:
 case 128:
  VAR_13->fix.xpanstep = 2;
 }




 VAR_12 = &VAR_13->var;
 FUNC_3(VAR_12, VAR_9);
 VAR_12->width = VAR_8->display.width;
 VAR_12->height = VAR_8->display.height;
 VAR_12->xres_virtual = VAR_8->xres_virtual;
 VAR_12->yres_virtual = VAR_8->yres_virtual;
 VAR_12->activate = VAR_2;




 if (!VAR_8->format->yuv)
  VAR_12->bits_per_pixel = VAR_8->format->bpp;
 else
  VAR_12->grayscale = VAR_8->format->fourcc;

 VAR_14 = FUNC_5(VAR_12, VAR_13);
 if (VAR_14)
  return VAR_14;

 return 0;
}
