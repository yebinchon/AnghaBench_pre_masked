
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct pm2fb_par {int dummy; } ;
struct TYPE_4__ {int xres_virtual; int yres_virtual; int bits_per_pixel; } ;
struct TYPE_3__ {scalar_t__ visual; } ;
struct fb_info {scalar_t__ state; int flags; TYPE_2__ var; scalar_t__ pseudo_palette; TYPE_1__ fix; struct pm2fb_par* par; } ;
struct fb_fillrect {size_t color; scalar_t__ rop; int width; int height; int dx; int dy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_0 (struct pm2fb_par*,int) ;
 int FUNC_1 (struct fb_info*,struct fb_fillrect const*) ;
 int FUNC_2 (struct fb_fillrect*,struct fb_fillrect const*,int) ;
 int FUNC_3 (struct pm2fb_par*,int ,int) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct fb_info *VAR_16,
    const struct fb_fillrect *VAR_17)
{
 struct pm2fb_par *VAR_18 = VAR_16->par;
 struct fb_fillrect VAR_19;
 int VAR_20, VAR_21;
 u32 VAR_22 = (VAR_16->fix.visual == VAR_2) ?
  ((u32 *)VAR_16->pseudo_palette)[VAR_17->color] : VAR_17->color;

 if (VAR_16->state != VAR_1)
  return;
 if ((VAR_16->flags & VAR_0) ||
  VAR_17->rop != VAR_15 ) {
  FUNC_1(VAR_16, VAR_17);
  return;
 }

 VAR_20 = VAR_16->var.xres_virtual;
 VAR_21 = VAR_16->var.yres_virtual;

 FUNC_2(&VAR_19, VAR_17, sizeof(struct fb_fillrect));

 if (!VAR_19.width || !VAR_19.height ||
     VAR_19.dx >= VAR_20 || VAR_19.dy >= VAR_21)
  return;

 if (VAR_19.dx + VAR_19.width > VAR_20)
  VAR_19.width = VAR_20 - VAR_19.dx;
 if (VAR_19.dy + VAR_19.height > VAR_21)
  VAR_19.height = VAR_21 - VAR_19.dy;

 if (VAR_16->var.bits_per_pixel == 8)
  VAR_22 |= VAR_22 << 8;
 if (VAR_16->var.bits_per_pixel <= 16)
  VAR_22 |= VAR_22 << 16;

 FUNC_0(VAR_18, 3);
 FUNC_3(VAR_18, VAR_9, VAR_3);
 FUNC_3(VAR_18, VAR_12, (VAR_19.dy << 16) | VAR_19.dx);
 FUNC_3(VAR_18, VAR_13, (VAR_19.height << 16) | VAR_19.width);
 if (VAR_16->var.bits_per_pixel != 24) {
  FUNC_0(VAR_18, 2);
  FUNC_3(VAR_18, VAR_11, VAR_22);
  FUNC_4();
  FUNC_3(VAR_18, VAR_14,
    VAR_7 | VAR_6);
 } else {
  FUNC_0(VAR_18, 4);
  FUNC_3(VAR_18, VAR_8, 1);
  FUNC_3(VAR_18, VAR_10, VAR_22);
  FUNC_4();
  FUNC_3(VAR_18, VAR_14,
    VAR_7 |
    VAR_4 | VAR_5 );
  FUNC_3(VAR_18, VAR_8, 0);
 }
}
