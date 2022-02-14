
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int var ;
struct vbe_mode_ib {int y_res; int x_res; } ;
struct uvesafb_par {int nocrtc; int vbe_modes_cnt; struct vbe_mode_ib* vbe_modes; } ;
struct uvesafb_ktask {int dummy; } ;
struct fb_videomode {int dummy; } ;
struct fb_var_screeninfo {int gtf; int dclkmax; int hfmax; int vfmin; int hfmin; int modedb_len; struct fb_videomode* modedb; int yres; int xres; scalar_t__ vfmax; scalar_t__ dclkmin; } ;
struct fb_info {int modelist; struct fb_var_screeninfo monspecs; struct uvesafb_par* par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fb_videomode*,int *) ;
 int FUNC_1 (int,int,struct fb_var_screeninfo*,struct fb_info*) ;
 int FUNC_2 (struct fb_videomode*,struct fb_var_screeninfo*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (struct fb_var_screeninfo*,int ,int) ;
 int FUNC_4 (char*,...) ;
 scalar_t__ FUNC_5 (struct fb_videomode*,struct fb_info*) ;
 scalar_t__ FUNC_6 (struct uvesafb_ktask*,struct fb_info*) ;
 struct fb_videomode* VAR_6 ;

__attribute__((used)) static void FUNC_7(struct uvesafb_ktask *VAR_7,
        struct fb_info *VAR_8)
{
 struct uvesafb_par *VAR_9 = VAR_8->par;
 int VAR_10;

 FUNC_3(&VAR_8->monspecs, 0, sizeof(VAR_8->monspecs));






 if (FUNC_6(VAR_7, VAR_8)) {
  VAR_8->monspecs.gtf = 0;
  VAR_9->nocrtc = 1;
 }


 if (VAR_3)
  VAR_8->monspecs.dclkmax = VAR_3 * 1000000;
 if (VAR_5)
  VAR_8->monspecs.vfmax = VAR_5;
 if (VAR_4)
  VAR_8->monspecs.hfmax = VAR_4 * 1000;





 if (VAR_8->monspecs.gtf == 0 && VAR_3 && VAR_5 && VAR_4) {
  VAR_8->monspecs.dclkmin = 0;
  VAR_8->monspecs.vfmin = 60;
  VAR_8->monspecs.hfmin = 29000;
  VAR_8->monspecs.gtf = 1;
  VAR_9->nocrtc = 0;
 }

 if (VAR_8->monspecs.gtf)
  FUNC_4("monitor limits: vf = %d Hz, hf = %d kHz, clk = %d MHz\n",
   VAR_8->monspecs.vfmax,
   (int)(VAR_8->monspecs.hfmax / 1000),
   (int)(VAR_8->monspecs.dclkmax / 1000000));
 else
  FUNC_4("no monitor limits have been set, default refresh rate will be used\n");


 for (VAR_10 = 0; VAR_10 < VAR_9->vbe_modes_cnt; VAR_10++) {
  struct fb_var_screeninfo VAR_11;
  struct vbe_mode_ib *VAR_12;
  struct fb_videomode VAR_13;

  VAR_12 = &VAR_9->vbe_modes[VAR_10];
  FUNC_3(&VAR_11, 0, sizeof(VAR_11));

  VAR_11.xres = VAR_12->x_res;
  VAR_11.yres = VAR_12->y_res;

  FUNC_1(VAR_1 | VAR_0, 60, &VAR_11, VAR_8);
  FUNC_2(&VAR_13, &VAR_11);
  FUNC_0(&VAR_13, &VAR_8->modelist);
 }


 for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
  if (FUNC_5((struct fb_videomode *)
      &VAR_6[VAR_10], VAR_8))
   FUNC_0(&VAR_6[VAR_10], &VAR_8->modelist);
 }

 for (VAR_10 = 0; VAR_10 < VAR_8->monspecs.modedb_len; VAR_10++) {
  if (FUNC_5(&VAR_8->monspecs.modedb[VAR_10], VAR_8))
   FUNC_0(&VAR_8->monspecs.modedb[VAR_10],
     &VAR_8->modelist);
 }

 return;
}
