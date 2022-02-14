
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sh_mobile_lcdc_priv {int dummy; } ;
struct sh_mobile_lcdc_chan {int xres_virtual; unsigned long pan_y_offset; unsigned long dma_handle; unsigned long yres_virtual; unsigned long base_addr_y; unsigned long base_addr_c; struct sh_mobile_lcdc_priv* lcdc; TYPE_1__* format; } ;
struct fb_var_screeninfo {int yoffset; int xoffset; } ;
struct fb_info {struct sh_mobile_lcdc_chan* par; } ;
struct TYPE_2__ {int bpp; scalar_t__ yuv; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct sh_mobile_lcdc_chan*) ;
 unsigned long FUNC_1 (struct sh_mobile_lcdc_priv*,int ) ;
 int FUNC_2 (struct sh_mobile_lcdc_priv*,int ,unsigned long) ;
 int FUNC_3 (struct sh_mobile_lcdc_chan*,int ,unsigned long) ;
 int FUNC_4 (struct fb_info*) ;

__attribute__((used)) static int FUNC_5(struct fb_var_screeninfo *VAR_5,
         struct fb_info *VAR_6)
{
 struct sh_mobile_lcdc_chan *VAR_7 = VAR_6->par;
 struct sh_mobile_lcdc_priv *VAR_8 = VAR_7->lcdc;
 unsigned long VAR_9;
 unsigned long VAR_10, VAR_11;
 unsigned long VAR_12;
 unsigned long VAR_13;

 if (!VAR_7->format->yuv) {
  VAR_12 = (VAR_5->yoffset * VAR_7->xres_virtual + VAR_5->xoffset)
    * VAR_7->format->bpp / 8;
  VAR_13 = 0;
 } else {
  unsigned int VAR_14 = VAR_7->format->bpp < 24 ? 2 : 1;
  unsigned int VAR_15 = VAR_7->format->bpp < 16 ? 2 : 1;

  VAR_12 = VAR_5->yoffset * VAR_7->xres_virtual + VAR_5->xoffset;
  VAR_13 = VAR_5->yoffset / VAR_15 * VAR_7->xres_virtual * 2 / VAR_14
    + VAR_5->xoffset * 2 / VAR_14;
 }




 if (VAR_12 == VAR_7->pan_y_offset)
  return 0;


 VAR_10 = VAR_7->dma_handle + VAR_12;
 VAR_11 = VAR_7->dma_handle + VAR_7->xres_virtual * VAR_7->yres_virtual
      + VAR_13;

 VAR_7->base_addr_y = VAR_10;
 VAR_7->base_addr_c = VAR_11;
 VAR_7->pan_y_offset = VAR_12;

 FUNC_3(VAR_7, VAR_2, VAR_10);
 if (VAR_7->format->yuv)
  FUNC_3(VAR_7, VAR_3, VAR_11);

 VAR_9 = FUNC_1(VAR_8, VAR_4);
 if (FUNC_0(VAR_7))
  FUNC_2(VAR_7->lcdc, VAR_4, VAR_9 ^ VAR_1);
 else
  FUNC_2(VAR_7->lcdc, VAR_4, VAR_9 ^ VAR_0);


 FUNC_4(VAR_6);

 return 0;
}
