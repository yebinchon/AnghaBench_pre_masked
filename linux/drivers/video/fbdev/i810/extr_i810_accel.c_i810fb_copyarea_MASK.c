
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct i810fb_par {int dev_flags; int depth; int blit_bpp; } ;
struct TYPE_4__ {int line_length; int smem_start; } ;
struct TYPE_3__ {int accel_flags; } ;
struct fb_info {TYPE_2__ fix; TYPE_1__ var; struct i810fb_par* par; } ;
struct fb_copyarea {int dx; int sx; int width; int sy; int dy; int height; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct fb_info*,struct fb_copyarea const*) ;
 int FUNC_1 (int,int,int,int,int,int,int ,int ,struct fb_info*) ;

void FUNC_2(struct fb_info *VAR_4, const struct fb_copyarea *VAR_5)
{
 struct i810fb_par *VAR_6 = VAR_4->par;
 u32 VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;

 if (!VAR_4->var.accel_flags || VAR_6->dev_flags & VAR_2 ||
     VAR_6->depth == 4) {
  FUNC_0(VAR_4, VAR_5);
  return;
 }

 VAR_9 = VAR_5->dx * VAR_6->depth;
 VAR_7 = VAR_5->sx * VAR_6->depth;
 VAR_12 = VAR_5->width * VAR_6->depth;
 VAR_8 = VAR_5->sy;
 VAR_10 = VAR_5->dy;
 VAR_13 = VAR_5->height;

 if (VAR_9 <= VAR_7) {
  VAR_16 = VAR_1;
 }
 else {
  VAR_16 = VAR_0;
  VAR_7 += VAR_12 - 1;
  VAR_9 += VAR_12 - 1;
 }
 if (VAR_10 <= VAR_8) {
  VAR_11 = VAR_4->fix.line_length;
 }
 else {
  VAR_11 = (-(VAR_4->fix.line_length)) & 0xFFFF;
  VAR_8 += VAR_13 - 1;
  VAR_10 += VAR_13 - 1;
 }
 VAR_14 = VAR_4->fix.smem_start + (VAR_8 * VAR_4->fix.line_length) + VAR_7;
 VAR_15 = VAR_4->fix.smem_start + (VAR_10 * VAR_4->fix.line_length) + VAR_9;

 FUNC_1(VAR_12, VAR_13, VAR_11, VAR_16, VAR_14, VAR_15,
    VAR_3, VAR_6->blit_bpp, VAR_4);
}
