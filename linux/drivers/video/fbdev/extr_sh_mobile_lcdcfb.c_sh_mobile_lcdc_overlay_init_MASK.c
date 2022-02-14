
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sh_mobile_lcdc_overlay {int enabled; int alpha; int xres; int xres_virtual; int yres; int yres_virtual; int pitch; int fb_size; int fb_mem; int dma_handle; TYPE_3__* cfg; struct sh_mobile_lcdc_format_info const* format; scalar_t__ pos_y; scalar_t__ pos_x; scalar_t__ rop3; int mode; TYPE_2__* channel; } ;
struct sh_mobile_lcdc_format_info {int bpp; int yuv; } ;
struct device {int dummy; } ;
struct TYPE_6__ {int max_xres; int max_yres; int fourcc; } ;
struct TYPE_5__ {TYPE_1__* lcdc; } ;
struct TYPE_4__ {struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct device*,int,int *,int ) ;
 struct sh_mobile_lcdc_format_info* FUNC_2 (int ) ;
 int FUNC_3 (struct sh_mobile_lcdc_overlay*) ;

__attribute__((used)) static int
FUNC_4(struct sh_mobile_lcdc_overlay *VAR_4)
{
 const struct sh_mobile_lcdc_format_info *VAR_5;
 struct device *VAR_6 = VAR_4->channel->lcdc->dev;
 int VAR_7;

 if (VAR_4->cfg->fourcc == 0)
  return 0;


 VAR_5 = FUNC_2(VAR_4->cfg->fourcc);
 if (VAR_5 == ((void*)0)) {
  FUNC_0(VAR_6, "Invalid FOURCC %08x\n", VAR_4->cfg->fourcc);
  return -VAR_0;
 }

 VAR_4->enabled = 0;
 VAR_4->mode = VAR_3;
 VAR_4->alpha = 255;
 VAR_4->rop3 = 0;
 VAR_4->pos_x = 0;
 VAR_4->pos_y = 0;




 VAR_4->format = VAR_5;
 VAR_4->xres = VAR_4->cfg->max_xres;
 VAR_4->xres_virtual = VAR_4->xres;
 VAR_4->yres = VAR_4->cfg->max_yres;
 VAR_4->yres_virtual = VAR_4->yres * 2;

 if (!VAR_5->yuv)
  VAR_4->pitch = VAR_4->xres_virtual * VAR_5->bpp / 8;
 else
  VAR_4->pitch = VAR_4->xres_virtual;


 VAR_4->fb_size = VAR_4->cfg->max_xres * VAR_4->cfg->max_yres
         * VAR_5->bpp / 8 * 2;
 VAR_4->fb_mem = FUNC_1(VAR_6, VAR_4->fb_size, &VAR_4->dma_handle,
      VAR_2);
 if (!VAR_4->fb_mem) {
  FUNC_0(VAR_6, "unable to allocate buffer\n");
  return -VAR_1;
 }

 VAR_7 = FUNC_3(VAR_4);
 if (VAR_7 < 0)
  return VAR_7;

 return 0;
}
