
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int width; unsigned int height; } ;
struct vc_data {size_t vc_num; TYPE_1__ vc_font; } ;
struct fb_var_screeninfo {int xres; int yres; int activate; } ;
struct fbcon_ops {struct fb_var_screeninfo var; int rotate; } ;
struct fbcon_display {int dummy; } ;
struct fb_videomode {int dummy; } ;
struct fb_info {struct fb_var_screeninfo var; int modelist; struct fbcon_ops* fbcon_par; } ;


 int FUNC_0 (char*,int,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,unsigned int,unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t* VAR_3 ;
 scalar_t__ FUNC_2 (struct vc_data*) ;
 int FUNC_3 (struct fb_var_screeninfo*,struct fbcon_display*) ;
 struct fbcon_display* VAR_4 ;
 struct fb_videomode* FUNC_4 (struct fb_var_screeninfo*,int *) ;
 int FUNC_5 (struct fb_info*,struct fb_var_screeninfo*) ;
 int FUNC_6 (struct fb_var_screeninfo*,struct fb_videomode const*) ;
 struct fb_info** VAR_5 ;
 int FUNC_7 (struct fbcon_display*,struct fb_info*,struct vc_data*) ;
 int FUNC_8 (struct fbcon_display*,struct fb_var_screeninfo*,struct fb_info*) ;

__attribute__((used)) static int FUNC_9(struct vc_data *VAR_6, unsigned int VAR_7,
   unsigned int VAR_8, unsigned int VAR_9)
{
 struct fb_info *VAR_10 = VAR_5[VAR_3[VAR_6->vc_num]];
 struct fbcon_ops *VAR_11 = VAR_10->fbcon_par;
 struct fbcon_display *VAR_12 = &VAR_4[VAR_6->vc_num];
 struct fb_var_screeninfo VAR_13 = VAR_10->var;
 int VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;

 VAR_16 = FUNC_1(VAR_11->rotate, VAR_7, VAR_8);
 VAR_17 = FUNC_1(VAR_11->rotate, VAR_8, VAR_7);
 VAR_18 = FUNC_1(VAR_11->rotate, VAR_6->vc_font.width,
     VAR_6->vc_font.height);
 VAR_19 = FUNC_1(VAR_11->rotate, VAR_6->vc_font.height,
     VAR_6->vc_font.width);
 VAR_13.xres = VAR_16 * VAR_18;
 VAR_13.yres = VAR_17 * VAR_19;
 VAR_14 = VAR_10->var.xres - VAR_13.xres;
 VAR_15 = VAR_10->var.yres - VAR_13.yres;
 if (VAR_14 < 0 || VAR_14 > VAR_18 ||
     VAR_15 < 0 || VAR_15 > VAR_19) {
  const struct fb_videomode *VAR_20;

  FUNC_0("attempting resize %ix%i\n", VAR_13.xres, VAR_13.yres);
  VAR_20 = FUNC_4(&VAR_13, &VAR_10->modelist);
  if (VAR_20 == ((void*)0))
   return -VAR_0;
  FUNC_3(&VAR_13, VAR_12);
  FUNC_6(&VAR_13, VAR_20);

  if (VAR_16 > VAR_13.xres/VAR_18 || VAR_17 > VAR_13.yres/VAR_19)
   return -VAR_0;

  FUNC_0("resize now %ix%i\n", VAR_13.xres, VAR_13.yres);
  if (FUNC_2(VAR_6)) {
   VAR_13.activate = VAR_2 |
    VAR_1;
   FUNC_5(VAR_10, &VAR_13);
  }
  FUNC_8(VAR_12, &VAR_10->var, VAR_10);
  VAR_11->var = VAR_10->var;
 }
 FUNC_7(VAR_12, VAR_10, VAR_6);
 return 0;
}
