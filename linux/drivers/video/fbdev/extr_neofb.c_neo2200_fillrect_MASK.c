
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
typedef int u32 ;
struct neofb_par {TYPE_2__* neo2200; } ;
struct TYPE_3__ {int xres_virtual; int bits_per_pixel; } ;
struct fb_info {TYPE_1__ var; scalar_t__ pseudo_palette; struct neofb_par* par; } ;
struct fb_fillrect {int dx; int dy; int color; int height; int width; scalar_t__ rop; } ;
struct TYPE_4__ {int xyExt; int dstStart; int fgColor; int bltCntl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fb_info*,int) ;
 int FUNC_1 (int,int *) ;

__attribute__((used)) static void
FUNC_2(struct fb_info *VAR_3, const struct fb_fillrect *VAR_4)
{
 struct neofb_par *VAR_5 = VAR_3->par;
 u_long VAR_6, VAR_7;

 VAR_6 = VAR_4->dx + VAR_4->dy * VAR_3->var.xres_virtual;
 VAR_7 = VAR_4->rop ? 0x060000 : 0x0c0000;

 FUNC_0(VAR_3, 4);


 FUNC_1(VAR_1 |
        VAR_0 | VAR_2 |


        VAR_7, &VAR_5->neo2200->bltCntl);

 switch (VAR_3->var.bits_per_pixel) {
 case 8:
  FUNC_1(VAR_4->color, &VAR_5->neo2200->fgColor);
  break;
 case 16:
 case 24:
  FUNC_1(((u32 *) (VAR_3->pseudo_palette))[VAR_4->color],
         &VAR_5->neo2200->fgColor);
  break;
 }

 FUNC_1(VAR_6 * ((VAR_3->var.bits_per_pixel + 7) >> 3),
        &VAR_5->neo2200->dstStart);
 FUNC_1((VAR_4->height << 16) | (VAR_4->width & 0xffff),
        &VAR_5->neo2200->xyExt);
}
