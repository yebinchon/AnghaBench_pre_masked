
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct pm3_par {int dummy; } ;
struct TYPE_2__ {scalar_t__ xres_virtual; scalar_t__ yres_virtual; } ;
struct fb_info {scalar_t__ state; int flags; TYPE_1__ var; struct pm3_par* par; } ;
struct fb_copyarea {scalar_t__ width; scalar_t__ height; scalar_t__ sx; scalar_t__ sy; scalar_t__ dx; scalar_t__ dy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_8 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_6 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_7 (struct pm3_par*,int) ;
 int FUNC_8 (struct pm3_par*,int ,int) ;
 int FUNC_9 (struct fb_info*,struct fb_copyarea const*) ;
 int FUNC_10 (struct fb_copyarea*,struct fb_copyarea const*,int) ;

__attribute__((used)) static void FUNC_11(struct fb_info *VAR_17,
    const struct fb_copyarea *VAR_18)
{
 struct pm3_par *VAR_19 = VAR_17->par;
 struct fb_copyarea VAR_20;
 u32 VAR_21, VAR_22;
 int VAR_23, VAR_24, VAR_25;

 if (VAR_17->state != VAR_1)
  return;
 if (VAR_17->flags & VAR_0) {
  FUNC_9(VAR_17, VAR_18);
  return;
 }

 FUNC_10(&VAR_20, VAR_18, sizeof(struct fb_copyarea));

 VAR_21 = VAR_17->var.xres_virtual;
 VAR_22 = VAR_17->var.yres_virtual;

 if (!VAR_20.width || !VAR_20.height ||
     VAR_20.sx >= VAR_21 || VAR_20.sy >= VAR_22 ||
     VAR_20.dx >= VAR_21 || VAR_20.dy >= VAR_22)
  return;

 if (VAR_20.sx + VAR_20.width > VAR_21)
  VAR_20.width = VAR_21 - VAR_20.sx;
 if (VAR_20.dx + VAR_20.width > VAR_21)
  VAR_20.width = VAR_21 - VAR_20.dx;
 if (VAR_20.sy + VAR_20.height > VAR_22)
  VAR_20.height = VAR_22 - VAR_20.sy;
 if (VAR_20.dy + VAR_20.height > VAR_22)
  VAR_20.height = VAR_22 - VAR_20.dy;

 VAR_24 = VAR_20.sx - VAR_20.dx;
 VAR_25 = VAR_20.sy - VAR_20.dy;

 VAR_23 = (VAR_20.sx & 0x1f);

 FUNC_7(VAR_19, 6);

 FUNC_8(VAR_19, VAR_2,
   VAR_6 |
   VAR_5 |
   VAR_3 |
   FUNC_0(0x3) |
   VAR_4);

 FUNC_8(VAR_19, VAR_16,
   ((VAR_20.dy & 0x0fff) << 16) | (VAR_20.dx & 0x0fff));
 FUNC_8(VAR_19, VAR_15,
   (((VAR_20.dy + VAR_20.height) & 0x0fff) << 16) |
   ((VAR_20.dx + VAR_20.width) & 0x0fff));

 FUNC_8(VAR_19, VAR_7,
   FUNC_1(VAR_24) |
   FUNC_2(VAR_25));

 FUNC_8(VAR_19, VAR_8,
   FUNC_3(VAR_20.dx - VAR_23) |
   FUNC_4(VAR_20.dy));

 FUNC_8(VAR_19, VAR_9,
   ((VAR_20.sx > VAR_20.dx) ? VAR_13 : 0) |
   ((VAR_20.sy > VAR_20.dy) ? VAR_14 : 0) |
   VAR_11 |
   VAR_12 |
   VAR_10 |
   FUNC_6(VAR_20.width + VAR_23) |
   FUNC_5(VAR_20.height));
}
