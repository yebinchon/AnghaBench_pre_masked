
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct i810fb_par {int dev_flags; int depth; int blit_bpp; } ;
struct TYPE_4__ {int smem_start; int line_length; } ;
struct TYPE_3__ {int bits_per_pixel; int accel_flags; } ;
struct fb_info {TYPE_2__ fix; scalar_t__ pseudo_palette; TYPE_1__ var; struct i810fb_par* par; } ;
struct fb_image {int depth; int fg_color; int bg_color; int dy; int dx; int width; int height; scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fb_info*,struct fb_image const*) ;
 int FUNC_1 (int,int,int,int,int ,int ,int,int*,int,int,struct fb_info*) ;

void FUNC_2(struct fb_info *VAR_2, const struct fb_image *VAR_3)
{
 struct i810fb_par *VAR_4 = VAR_2->par;
 u32 VAR_5 = 0, VAR_6 = 0, VAR_7, VAR_8;

 if (!VAR_2->var.accel_flags || VAR_4->dev_flags & VAR_0 ||
     VAR_4->depth == 4 || VAR_3->depth != 1) {
  FUNC_0(VAR_2, VAR_3);
  return;
 }

 switch (VAR_2->var.bits_per_pixel) {
 case 8:
  VAR_5 = VAR_3->fg_color;
  VAR_6 = VAR_3->bg_color;
  break;
 case 16:
 case 24:
  VAR_5 = ((u32 *)(VAR_2->pseudo_palette))[VAR_3->fg_color];
  VAR_6 = ((u32 *)(VAR_2->pseudo_palette))[VAR_3->bg_color];
  break;
 }

 VAR_8 = VAR_2->fix.smem_start + (VAR_3->dy * VAR_2->fix.line_length) +
  (VAR_3->dx * VAR_4->depth);

 VAR_7 = (VAR_3->width+7)/8 + 1;
 VAR_7 &= ~1;
 VAR_7 *= VAR_3->height;
 VAR_7 += 7;
 VAR_7 &= ~7;
 FUNC_1(VAR_3->width * VAR_4->depth,
          VAR_3->height, VAR_2->fix.line_length,
          VAR_7/4, VAR_4->blit_bpp,
          VAR_1, VAR_8, (u32 *) VAR_3->data,
          VAR_6, VAR_5, VAR_2);
}
