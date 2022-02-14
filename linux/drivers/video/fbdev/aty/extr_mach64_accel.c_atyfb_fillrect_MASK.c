
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int bits_per_pixel; } ;
struct TYPE_4__ {scalar_t__ visual; } ;
struct fb_info {TYPE_2__ var; scalar_t__ pseudo_palette; TYPE_1__ fix; scalar_t__ par; } ;
struct fb_fillrect {int dx; int width; size_t color; int height; int dy; } ;
struct TYPE_6__ {int dp_pix_width; } ;
struct atyfb_par {TYPE_3__ crtc; int accel_flags; scalar_t__ asleep; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,int,struct atyfb_par*) ;
 int FUNC_1 (struct fb_info*,struct fb_fillrect const*) ;
 int FUNC_2 (int,int ,int,int ,struct atyfb_par*) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,struct atyfb_par*) ;

void FUNC_5(struct fb_info *VAR_12, const struct fb_fillrect *VAR_13)
{
 struct atyfb_par *VAR_14 = (struct atyfb_par *) VAR_12->par;
 u32 VAR_15, VAR_16 = VAR_13->dx, VAR_17 = VAR_13->width, VAR_18 = 0;

 if (VAR_14->asleep)
  return;
 if (!VAR_13->width || !VAR_13->height)
  return;
 if (!VAR_14->accel_flags) {
  FUNC_1(VAR_12, VAR_13);
  return;
 }

 if (VAR_12->fix.visual == VAR_9 ||
     VAR_12->fix.visual == VAR_8)
  VAR_15 = ((u32 *)(VAR_12->pseudo_palette))[VAR_13->color];
 else
  VAR_15 = VAR_13->color;

 if (VAR_12->var.bits_per_pixel == 24) {


  VAR_16 *= 3;
  VAR_17 *= 3;
  VAR_18 = FUNC_3(VAR_16, VAR_6);
 }

 FUNC_4(4, VAR_14);
 FUNC_0(VAR_2, VAR_14->crtc.dp_pix_width, VAR_14);
 FUNC_0(VAR_1, VAR_15, VAR_14);
 FUNC_0(VAR_3,
      VAR_0 | VAR_10 | VAR_11,
      VAR_14);
 FUNC_0(VAR_4,
      VAR_5 | VAR_7 |
      VAR_6 | VAR_18, VAR_14);
 FUNC_2(VAR_16, VAR_13->dy, VAR_17, VAR_13->height, VAR_14);
}
