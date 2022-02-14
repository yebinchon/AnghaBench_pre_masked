
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int vbe_version; } ;
struct uvesafb_par {TYPE_1__ vbe_ib; } ;
struct fb_videomode {scalar_t__ xres; scalar_t__ yres; int vmode; } ;
struct fb_var_screeninfo {scalar_t__ xres; scalar_t__ yres; scalar_t__ pixclock; } ;
struct TYPE_4__ {scalar_t__ gtf; } ;
struct fb_info {TYPE_2__ monspecs; int modelist; struct uvesafb_par* par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct fb_videomode* FUNC_0 (struct fb_var_screeninfo*,int *) ;
 int FUNC_1 (int,int,struct fb_var_screeninfo*,struct fb_info*) ;
 int FUNC_2 (struct fb_var_screeninfo*,struct fb_info*) ;
 int FUNC_3 (struct fb_var_screeninfo*,struct fb_videomode const*) ;

__attribute__((used)) static void FUNC_4(struct fb_var_screeninfo *VAR_5,
  struct fb_info *VAR_6)
{
 const struct fb_videomode *VAR_7;
 struct uvesafb_par *VAR_8 = VAR_6->par;





 if (!VAR_5->pixclock)
  return;

 if (VAR_8->vbe_ib.vbe_version < 0x0300) {
  FUNC_1(VAR_4 | VAR_0, 60, VAR_5, VAR_6);
  return;
 }

 if (!FUNC_2(VAR_5, VAR_6))
  return;

 VAR_7 = FUNC_0(VAR_5, &VAR_6->modelist);
 if (VAR_7) {
  if (VAR_7->xres == VAR_5->xres && VAR_7->yres == VAR_5->yres &&
      !(VAR_7->vmode & (VAR_3 | VAR_2))) {
   FUNC_3(VAR_5, VAR_7);
   return;
  }
 }

 if (VAR_6->monspecs.gtf && !FUNC_1(VAR_1, 0, VAR_5, VAR_6))
  return;

 VAR_5->pixclock = 0;
}
