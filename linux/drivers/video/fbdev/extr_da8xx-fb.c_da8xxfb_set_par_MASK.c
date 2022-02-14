
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int line_length; scalar_t__ smem_start; int visual; } ;
struct TYPE_9__ {int bits_per_pixel; int yoffset; int xoffset; int yres; } ;
struct fb_info {TYPE_1__ fix; TYPE_5__ var; struct da8xx_fb_par* par; } ;
struct TYPE_8__ {int xres; } ;
struct TYPE_7__ {int bpp; } ;
struct da8xx_fb_par {scalar_t__ dma_end; scalar_t__ dma_start; int dev; TYPE_3__ mode; TYPE_2__ cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (struct da8xx_fb_par*,TYPE_2__*,TYPE_3__*) ;
 int FUNC_6 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_7(struct fb_info *VAR_7)
{
 struct da8xx_fb_par *VAR_8 = VAR_7->par;
 int VAR_9;
 bool VAR_10 = FUNC_0();

 if (VAR_10)
  FUNC_3(VAR_0);

 FUNC_2(&VAR_8->mode, &VAR_7->var);

 VAR_8->cfg.bpp = VAR_7->var.bits_per_pixel;

 VAR_7->fix.visual = (VAR_8->cfg.bpp <= 8) ?
    VAR_1 : VAR_2;
 VAR_7->fix.line_length = (VAR_8->mode.xres * VAR_8->cfg.bpp) / 8;

 VAR_9 = FUNC_5(VAR_8, &VAR_8->cfg, &VAR_8->mode);
 if (VAR_9 < 0) {
  FUNC_1(VAR_8->dev, "lcd init failed\n");
  return VAR_9;
 }

 VAR_8->dma_start = VAR_7->fix.smem_start +
    VAR_7->var.yoffset * VAR_7->fix.line_length +
    VAR_7->var.xoffset * VAR_7->var.bits_per_pixel / 8;
 VAR_8->dma_end = VAR_8->dma_start +
    VAR_7->var.yres * VAR_7->fix.line_length - 1;

 FUNC_6(VAR_8->dma_start, VAR_3);
 FUNC_6(VAR_8->dma_end, VAR_5);
 FUNC_6(VAR_8->dma_start, VAR_4);
 FUNC_6(VAR_8->dma_end, VAR_6);

 if (VAR_10)
  FUNC_4();

 return 0;
}
