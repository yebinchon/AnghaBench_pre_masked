
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nvidia_par {int dummy; } ;
struct TYPE_2__ {int bits_per_pixel; } ;
struct fb_info {scalar_t__ pseudo_palette; TYPE_1__ var; struct nvidia_par* par; } ;
struct fb_image {int width; int height; int fg_color; int bg_color; int dy; int dx; scalar_t__ data; } ;


 int FUNC_0 (struct nvidia_par*) ;
 int FUNC_1 (struct nvidia_par*,int) ;
 int FUNC_2 (struct fb_info*,struct nvidia_par*,int ,int) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (int*) ;

__attribute__((used)) static void FUNC_5(struct fb_info *VAR_2,
           const struct fb_image *VAR_3)
{
 struct nvidia_par *VAR_4 = VAR_2->par;
 u32 VAR_5, VAR_6, VAR_7 = ~(~0 >> (32 - VAR_2->var.bits_per_pixel));
 u32 VAR_8, VAR_9, *VAR_10 = (u32 *) VAR_3->data, VAR_11;
 int VAR_12, VAR_13 = 0;

 VAR_9 = (VAR_3->width + 31) & ~31;
 VAR_8 = (VAR_9 * VAR_3->height) >> 5;

 if (VAR_2->var.bits_per_pixel == 8) {
  VAR_5 = VAR_3->fg_color | VAR_7;
  VAR_6 = VAR_3->bg_color | VAR_7;
 } else {
  VAR_5 = ((u32 *) VAR_2->pseudo_palette)[VAR_3->fg_color] | VAR_7;
  VAR_6 = ((u32 *) VAR_2->pseudo_palette)[VAR_3->bg_color] | VAR_7;
 }

 FUNC_2(VAR_2, VAR_4, VAR_0, 7);
 FUNC_1(VAR_4, (VAR_3->dy << 16) | (VAR_3->dx & 0xffff));
 FUNC_1(VAR_4, ((VAR_3->dy + VAR_3->height) << 16) |
    ((VAR_3->dx + VAR_3->width) & 0xffff));
 FUNC_1(VAR_4, VAR_6);
 FUNC_1(VAR_4, VAR_5);
 FUNC_1(VAR_4, (VAR_3->height << 16) | VAR_9);
 FUNC_1(VAR_4, (VAR_3->height << 16) | VAR_9);
 FUNC_1(VAR_4, (VAR_3->dy << 16) | (VAR_3->dx & 0xffff));

 while (VAR_8 >= VAR_1) {
  FUNC_2(VAR_2, VAR_4, FUNC_3(0),
      VAR_1);

  for (VAR_12 = VAR_1; VAR_12--;) {
   VAR_11 = VAR_10[VAR_13++];
   FUNC_4(&VAR_11);
   FUNC_1(VAR_4, VAR_11);
  }

  VAR_8 -= VAR_1;
 }

 if (VAR_8) {
  FUNC_2(VAR_2, VAR_4, FUNC_3(0), VAR_8);

  for (VAR_12 = VAR_8; VAR_12--;) {
   VAR_11 = VAR_10[VAR_13++];
   FUNC_4(&VAR_11);
   FUNC_1(VAR_4, VAR_11);
  }
 }

 FUNC_0(VAR_4);
}
