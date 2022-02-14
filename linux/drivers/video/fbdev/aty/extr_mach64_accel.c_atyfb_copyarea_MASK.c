
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int bits_per_pixel; } ;
struct fb_info {TYPE_1__ var; scalar_t__ par; } ;
struct fb_copyarea {int dy; int sy; int sx; int dx; int width; int height; } ;
struct TYPE_4__ {int dp_pix_width; } ;
struct atyfb_par {TYPE_2__ crtc; int accel_flags; scalar_t__ asleep; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int,struct atyfb_par*) ;
 int FUNC_1 (struct fb_info*,struct fb_copyarea const*) ;
 int FUNC_2 (int,int,int,int,struct atyfb_par*) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,struct atyfb_par*) ;

void FUNC_5(struct fb_info *VAR_9, const struct fb_copyarea *VAR_10)
{
 struct atyfb_par *VAR_11 = (struct atyfb_par *) VAR_9->par;
 u32 VAR_12 = VAR_10->dy, VAR_13 = VAR_10->sy, VAR_14 = VAR_3;
 u32 VAR_15 = VAR_10->sx, VAR_16 = VAR_10->dx, VAR_17 = VAR_10->width, VAR_18 = 0;

 if (VAR_11->asleep)
  return;
 if (!VAR_10->width || !VAR_10->height)
  return;
 if (!VAR_11->accel_flags) {
  FUNC_1(VAR_9, VAR_10);
  return;
 }

 if (VAR_9->var.bits_per_pixel == 24) {


  VAR_15 *= 3;
  VAR_16 *= 3;
  VAR_17 *= 3;
 }

 if (VAR_10->sy < VAR_10->dy) {
  VAR_12 += VAR_10->height - 1;
  VAR_13 += VAR_10->height - 1;
 } else
  VAR_14 |= VAR_5;

 if (VAR_15 < VAR_16) {
  VAR_16 += VAR_17 - 1;
  VAR_15 += VAR_17 - 1;
 } else
  VAR_14 |= VAR_4;

 if (VAR_9->var.bits_per_pixel == 24) {
  VAR_18 = FUNC_3(VAR_16, VAR_14);
 }

 FUNC_4(5, VAR_11);
 FUNC_0(VAR_0, VAR_11->crtc.dp_pix_width, VAR_11);
 FUNC_0(VAR_1, VAR_6, VAR_11);
 FUNC_0(VAR_8, (VAR_15 << 16) | VAR_13, VAR_11);
 FUNC_0(VAR_7, (VAR_17 << 16) | VAR_10->height, VAR_11);
 FUNC_0(VAR_2, VAR_14 | VAR_18, VAR_11);
 FUNC_2(VAR_16, VAR_12, VAR_17, VAR_10->height, VAR_11);
}
