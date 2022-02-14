
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
typedef int u16 ;
struct TYPE_4__ {int visual; } ;
struct TYPE_3__ {int xres_virtual; int yres_virtual; } ;
struct fb_info {scalar_t__ pseudo_palette; TYPE_2__ fix; TYPE_1__ var; } ;
struct fb_image {int width; int height; int dx; int dy; int depth; size_t fg_color; size_t bg_color; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void FUNC_0 (struct fb_info*,struct fb_image const*) ;
 int FUNC_1 (size_t*) ;
 size_t* FUNC_2 (size_t,int,int ) ;
 void FUNC_3 (size_t*,u16,u16,u16,u16,u16,size_t,size_t,struct fb_image const*,struct fb_info*) ;
 void FUNC_4 (size_t*,u16,u16,u16,u16,u16,size_t,size_t,struct fb_image const*,struct fb_info*) ;
 void FUNC_5 (size_t*,u16,u16,u16,u16,u16,size_t,size_t,struct fb_image const*,struct fb_info*) ;
 int FUNC_6 (size_t,size_t*,struct fb_info*) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static void FUNC_8(struct fb_info *VAR_4,
    const struct fb_image *VAR_5)
{
 int VAR_6;
 u32 *VAR_7 = ((void*)0);
 void (*VAR_8) (u32 *, u16, u16, u16, u16, u16, u32, u32,
         const struct fb_image *, struct fb_info *) = ((void*)0);
 u32 VAR_9;
 u32 VAR_10 = 0, VAR_11 = 0;
 u16 VAR_12;

 u16 VAR_13 = VAR_5->width, VAR_14 = VAR_5->height;
 u16 VAR_15 = VAR_5->dx, VAR_16 = VAR_5->dy;
 int VAR_17, VAR_18, VAR_19, VAR_20;

 VAR_6 = (VAR_2 << 9);
 VAR_17 = VAR_5->dx + VAR_5->width;
 VAR_18 = VAR_5->dy + VAR_5->height;
 VAR_19 = VAR_4->var.xres_virtual;
 VAR_20 = VAR_4->var.yres_virtual;
 VAR_17 = FUNC_7(VAR_17, VAR_19);
 VAR_18 = FUNC_7(VAR_18, VAR_20);
 VAR_13 = VAR_17 - VAR_15;
 VAR_14 = VAR_18 - VAR_16;

 switch (VAR_5->depth) {
 case 1:
  VAR_12 = (VAR_13 + 31) >> 5;
  VAR_9 = 9 + VAR_14 * VAR_12;
  VAR_8 = FUNC_3;
  if (VAR_4->fix.visual == VAR_1 ||
      VAR_4->fix.visual == VAR_0) {
   VAR_10 =
       ((u32 *) (VAR_4->pseudo_palette))[VAR_5->fg_color];
   VAR_11 =
       ((u32 *) (VAR_4->pseudo_palette))[VAR_5->bg_color];
  } else {
   VAR_10 = VAR_5->fg_color;
   VAR_11 = VAR_5->bg_color;
  }

  break;

 case 8:
  VAR_12 = (VAR_13 + 1) >> 1;
  VAR_9 = 3 + VAR_14 * VAR_12;
  VAR_8 = FUNC_5;
  break;

 case 16:
  VAR_12 = (VAR_13 + 1) >> 1;
  VAR_9 = 3 + VAR_14 * VAR_12;
  VAR_8 = FUNC_4;
  break;

 default:
  FUNC_0(VAR_4, VAR_5);
  return;
 }

 VAR_7 = FUNC_2(VAR_9, 4, VAR_3);
 if (!VAR_7)
  return FUNC_0(VAR_4, VAR_5);
 VAR_8(VAR_7, VAR_12, VAR_15, VAR_16, VAR_13, VAR_14, VAR_10, VAR_11, VAR_5, VAR_4);
 FUNC_6(VAR_9, VAR_7, VAR_4);
 FUNC_1(VAR_7);
}
