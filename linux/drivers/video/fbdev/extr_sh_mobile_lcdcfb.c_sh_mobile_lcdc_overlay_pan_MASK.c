
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sh_mobile_lcdc_overlay {int xres_virtual; unsigned long pan_y_offset; unsigned long dma_handle; unsigned long yres_virtual; unsigned long base_addr_y; unsigned long base_addr_c; int index; TYPE_2__* channel; TYPE_1__* format; } ;
struct fb_var_screeninfo {int yoffset; int xoffset; } ;
struct fb_info {struct sh_mobile_lcdc_overlay* par; } ;
struct TYPE_4__ {int lcdc; } ;
struct TYPE_3__ {int bpp; int yuv; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (struct sh_mobile_lcdc_overlay*,int ,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct fb_var_screeninfo *VAR_1,
        struct fb_info *VAR_2)
{
 struct sh_mobile_lcdc_overlay *VAR_3 = VAR_2->par;
 unsigned long VAR_4;
 unsigned long VAR_5;
 unsigned long VAR_6;
 unsigned long VAR_7;

 if (!VAR_3->format->yuv) {
  VAR_6 = (VAR_1->yoffset * VAR_3->xres_virtual + VAR_1->xoffset)
    * VAR_3->format->bpp / 8;
  VAR_7 = 0;
 } else {
  unsigned int VAR_8 = VAR_3->format->bpp < 24 ? 2 : 1;
  unsigned int VAR_9 = VAR_3->format->bpp < 16 ? 2 : 1;

  VAR_6 = VAR_1->yoffset * VAR_3->xres_virtual + VAR_1->xoffset;
  VAR_7 = VAR_1->yoffset / VAR_9 * VAR_3->xres_virtual * 2 / VAR_8
    + VAR_1->xoffset * 2 / VAR_8;
 }




 if (VAR_6 == VAR_3->pan_y_offset)
  return 0;


 VAR_4 = VAR_3->dma_handle + VAR_6;
 VAR_5 = VAR_3->dma_handle + VAR_3->xres_virtual * VAR_3->yres_virtual
      + VAR_7;

 VAR_3->base_addr_y = VAR_4;
 VAR_3->base_addr_c = VAR_5;
 VAR_3->pan_y_offset = VAR_6;

 FUNC_5(VAR_3->channel->lcdc, VAR_0, FUNC_0(VAR_3->index));

 FUNC_6(VAR_3, FUNC_4(VAR_3->index), VAR_3->base_addr_y);
 FUNC_6(VAR_3, FUNC_3(VAR_3->index), VAR_3->base_addr_c);

 FUNC_5(VAR_3->channel->lcdc, VAR_0,
     FUNC_2(VAR_3->index) | FUNC_1(VAR_3->index));

 return 0;
}
