
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {scalar_t__ visual; } ;
struct TYPE_3__ {scalar_t__ xres_virtual; scalar_t__ yres_virtual; } ;
struct fb_info {scalar_t__ pseudo_palette; TYPE_2__ fix; TYPE_1__ var; } ;
struct fb_fillrect {scalar_t__ width; scalar_t__ height; scalar_t__ dx; scalar_t__ dy; size_t color; int rop; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;


 int FUNC_0 (int,scalar_t__*,struct fb_info*) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct fb_info *VAR_10,
          const struct fb_fillrect *VAR_11)
{

 u32 VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
 u32 VAR_19[7];

 VAR_14 = VAR_10->var.xres_virtual;
 VAR_15 = VAR_10->var.yres_virtual;

 if (!VAR_11->width || !VAR_11->height || VAR_11->dx > VAR_14
     || VAR_11->dy > VAR_15)
  return;



 VAR_12 = VAR_11->dx + VAR_11->width;
 VAR_13 = VAR_11->dy + VAR_11->height;
 VAR_12 = FUNC_1(VAR_12, VAR_14);
 VAR_13 = FUNC_1(VAR_13, VAR_15);
 VAR_17 = VAR_12 - VAR_11->dx;
 VAR_16 = VAR_13 - VAR_11->dy;
 if (VAR_10->fix.visual == VAR_1 ||
     VAR_10->fix.visual == VAR_0)
  VAR_18 = ((u32 *) (VAR_10->pseudo_palette))[VAR_11->color];
 else
  VAR_18 = VAR_11->color;

 switch (VAR_11->rop) {

 case 128:

  VAR_19[1] = (2 << 7) | (VAR_6 << 9);
  break;

 case 129:

  VAR_19[1] = (2 << 7) | (VAR_5 << 9);
  break;

 }

 VAR_19[0] = (VAR_9 << 24) | (1 << 16) | VAR_4;

 VAR_19[2] =
     (VAR_8 << 24) | (VAR_3 << 16);
 VAR_19[3] = VAR_18;
 VAR_19[4] = (VAR_7 << 24) | (VAR_2 << 16);
 VAR_19[5] = (VAR_11->dy << 16) | (VAR_11->dx);
 VAR_19[6] = (VAR_16 << 16) | VAR_17;

 FUNC_0(7, VAR_19, VAR_10);
}
