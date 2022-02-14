
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct pm2fb_par {int dummy; } ;
struct TYPE_2__ {scalar_t__ xres_virtual; scalar_t__ yres_virtual; } ;
struct fb_info {scalar_t__ state; int flags; TYPE_1__ var; struct pm2fb_par* par; } ;
struct fb_copyarea {scalar_t__ width; scalar_t__ height; scalar_t__ sx; scalar_t__ sy; scalar_t__ dx; scalar_t__ dy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct pm2fb_par*,int) ;
 int FUNC_1 (struct fb_info*,struct fb_copyarea const*) ;
 int FUNC_2 (struct fb_copyarea*,struct fb_copyarea const*,int) ;
 int FUNC_3 (struct pm2fb_par*,int ,int) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct fb_info *VAR_12,
    const struct fb_copyarea *VAR_13)
{
 struct pm2fb_par *VAR_14 = VAR_12->par;
 struct fb_copyarea VAR_15;
 u32 VAR_16, VAR_17;

 if (VAR_12->state != VAR_1)
  return;
 if (VAR_12->flags & VAR_0) {
  FUNC_1(VAR_12, VAR_13);
  return;
 }

 FUNC_2(&VAR_15, VAR_13, sizeof(struct fb_copyarea));

 VAR_16 = VAR_12->var.xres_virtual;
 VAR_17 = VAR_12->var.yres_virtual;

 if (!VAR_15.width || !VAR_15.height ||
     VAR_15.sx >= VAR_16 || VAR_15.sy >= VAR_17 ||
     VAR_15.dx >= VAR_16 || VAR_15.dy >= VAR_17)
  return;

 if (VAR_15.sx + VAR_15.width > VAR_16)
  VAR_15.width = VAR_16 - VAR_15.sx;
 if (VAR_15.dx + VAR_15.width > VAR_16)
  VAR_15.width = VAR_16 - VAR_15.dx;
 if (VAR_15.sy + VAR_15.height > VAR_17)
  VAR_15.height = VAR_17 - VAR_15.sy;
 if (VAR_15.dy + VAR_15.height > VAR_17)
  VAR_15.height = VAR_17 - VAR_15.dy;

 FUNC_0(VAR_14, 5);
 FUNC_3(VAR_14, VAR_7, VAR_3 |
  VAR_2);
 FUNC_3(VAR_14, VAR_8,
   ((VAR_15.sy - VAR_15.dy) & 0xfff) << 16 |
   ((VAR_15.sx - VAR_15.dx) & 0xfff));
 FUNC_3(VAR_14, VAR_9, (VAR_15.dy << 16) | VAR_15.dx);
 FUNC_3(VAR_14, VAR_10, (VAR_15.height << 16) | VAR_15.width);
 FUNC_4();
 FUNC_3(VAR_14, VAR_11, VAR_6 |
    (VAR_15.dx < VAR_15.sx ? VAR_4 : 0) |
    (VAR_15.dy < VAR_15.sy ? VAR_5 : 0));
}
