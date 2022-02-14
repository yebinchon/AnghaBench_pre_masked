
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sh_mobile_lcdc_priv {int dev; } ;
struct sh_mobile_lcdc_overlay {int index; TYPE_2__* format; int yres_virtual; int xres_virtual; int yres; int xres; int pitch; int fb_size; int dma_handle; int fb_mem; struct fb_info* info; TYPE_1__* channel; } ;
struct fb_var_screeninfo {int grayscale; int bits_per_pixel; int activate; int yres_virtual; int xres_virtual; int yres; int xres; } ;
struct TYPE_6__ {int ypanstep; int xpanstep; int visual; int line_length; int smem_len; int smem_start; int id; } ;
struct fb_info {struct fb_var_screeninfo var; TYPE_3__ fix; struct sh_mobile_lcdc_overlay* par; int screen_base; int device; int * fbops; int flags; } ;
struct TYPE_5__ {int fourcc; int bpp; scalar_t__ yuv; } ;
struct TYPE_4__ {struct sh_mobile_lcdc_priv* lcdc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 struct fb_info* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct fb_var_screeninfo*,int ,int) ;
 int FUNC_2 (struct fb_var_screeninfo*,struct fb_info*) ;
 TYPE_3__ VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,int,char*,int) ;

__attribute__((used)) static int
FUNC_4(struct sh_mobile_lcdc_overlay *VAR_7)
{
 struct sh_mobile_lcdc_priv *VAR_8 = VAR_7->channel->lcdc;
 struct fb_var_screeninfo *VAR_9;
 struct fb_info *VAR_10;


 VAR_10 = FUNC_0(0, VAR_8->dev);
 if (!VAR_10)
  return -VAR_0;

 VAR_7->info = VAR_10;

 VAR_10->flags = VAR_1;
 VAR_10->fbops = &VAR_6;
 VAR_10->device = VAR_8->dev;
 VAR_10->screen_base = VAR_7->fb_mem;
 VAR_10->par = VAR_7;




 VAR_10->fix = VAR_5;
 FUNC_3(VAR_10->fix.id, sizeof(VAR_10->fix.id),
   "SH Mobile LCDC Overlay %u", VAR_7->index);
 VAR_10->fix.smem_start = VAR_7->dma_handle;
 VAR_10->fix.smem_len = VAR_7->fb_size;
 VAR_10->fix.line_length = VAR_7->pitch;

 if (VAR_7->format->yuv)
  VAR_10->fix.visual = VAR_3;
 else
  VAR_10->fix.visual = VAR_4;

 switch (VAR_7->format->fourcc) {
 case 131:
 case 129:
  VAR_10->fix.ypanstep = 2;

 case 130:
 case 128:
  VAR_10->fix.xpanstep = 2;
 }


 VAR_9 = &VAR_10->var;
 FUNC_1(VAR_9, 0, sizeof(*VAR_9));
 VAR_9->xres = VAR_7->xres;
 VAR_9->yres = VAR_7->yres;
 VAR_9->xres_virtual = VAR_7->xres_virtual;
 VAR_9->yres_virtual = VAR_7->yres_virtual;
 VAR_9->activate = VAR_2;




 if (!VAR_7->format->yuv)
  VAR_9->bits_per_pixel = VAR_7->format->bpp;
 else
  VAR_9->grayscale = VAR_7->format->fourcc;

 return FUNC_2(VAR_9, VAR_10);
}
