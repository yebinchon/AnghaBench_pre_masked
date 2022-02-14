
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i810fb_par {int ddc_num; int edid; } ;
struct fb_videomode {int dummy; } ;
struct fb_var_screeninfo {int bits_per_pixel; } ;
struct fb_monspecs {int * modedb; int modedb_len; } ;
struct fb_info {struct fb_var_screeninfo var; int modelist; struct fb_monspecs monspecs; struct i810fb_par* par; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct fb_monspecs*) ;
 struct fb_videomode* FUNC_3 (struct fb_monspecs*,int *) ;
 struct fb_videomode* FUNC_4 (struct fb_var_screeninfo*,int *) ;
 int FUNC_5 (struct fb_var_screeninfo*,struct fb_info*,scalar_t__,int *,int ,struct fb_videomode*,int ) ;
 int FUNC_6 (int *,int ,int *) ;
 int FUNC_7 (struct fb_var_screeninfo*,struct fb_videomode*) ;
 int FUNC_8 (struct i810fb_par*) ;
 int FUNC_9 (struct fb_info*,int *,int) ;
 int FUNC_10 (struct fb_videomode*,int ,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_11 (char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_12(struct fb_info *VAR_3)
{
 struct fb_videomode VAR_4;
 struct fb_var_screeninfo VAR_5;
 struct fb_monspecs *VAR_6 = &VAR_3->monspecs;
 int VAR_7 = 0;






 FUNC_0(&VAR_3->modelist);
 FUNC_10(&VAR_4, 0, sizeof(struct fb_videomode));
 VAR_5 = VAR_3->var;
 if (VAR_0)
  FUNC_5(&VAR_5, VAR_3, VAR_0, VAR_6->modedb,
        VAR_6->modedb_len, (VAR_7) ? &VAR_4 : ((void*)0),
        VAR_3->var.bits_per_pixel);

 VAR_3->var = VAR_5;
 FUNC_1(VAR_6->modedb);
 VAR_6->modedb = ((void*)0);
}
