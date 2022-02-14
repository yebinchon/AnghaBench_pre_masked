
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tridentfb_par {int (* image_blit ) (struct tridentfb_par*,int ,int ,int ,int ,int ,int,int) ;int (* wait_engine ) (struct tridentfb_par*) ;} ;
struct TYPE_2__ {int bits_per_pixel; } ;
struct fb_info {int flags; scalar_t__ pseudo_palette; TYPE_1__ var; struct tridentfb_par* par; } ;
struct fb_image {int depth; int fg_color; int bg_color; int height; int width; int dy; int dx; int data; } ;


 int VAR_0 ;
 int FUNC_0 (struct fb_info*,struct fb_image const*) ;
 int FUNC_1 (struct tridentfb_par*) ;
 int FUNC_2 (struct tridentfb_par*,int ,int ,int ,int ,int ,int,int) ;

__attribute__((used)) static void FUNC_3(struct fb_info *VAR_1,
    const struct fb_image *VAR_2)
{
 struct tridentfb_par *VAR_3 = VAR_1->par;
 int VAR_4, VAR_5;

 if ((VAR_1->flags & VAR_0) || VAR_2->depth != 1) {
  FUNC_0(VAR_1, VAR_2);
  return;
 }
 if (VAR_1->var.bits_per_pixel == 8) {
  VAR_4 = VAR_2->fg_color;
  VAR_4 |= VAR_4 << 8;
  VAR_4 |= VAR_4 << 16;
  VAR_5 = VAR_2->bg_color;
  VAR_5 |= VAR_5 << 8;
  VAR_5 |= VAR_5 << 16;
 } else {
  VAR_4 = ((u32 *)(VAR_1->pseudo_palette))[VAR_2->fg_color];
  VAR_5 = ((u32 *)(VAR_1->pseudo_palette))[VAR_2->bg_color];
 }

 VAR_3->wait_engine(VAR_3);
 if (VAR_3->image_blit)
  VAR_3->image_blit(VAR_3, VAR_2->data, VAR_2->dx, VAR_2->dy,
    VAR_2->width, VAR_2->height, VAR_4, VAR_5);
 else
  FUNC_0(VAR_1, VAR_2);
}
