
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lynxfb_crtc {int dummy; } ;
struct lynxfb_par {struct lynxfb_crtc crtc; } ;
struct fb_var_screeninfo {int dummy; } ;
struct fb_info {struct lynxfb_par* par; } ;


 int VAR_0 ;
 int FUNC_0 (struct lynxfb_crtc*,struct fb_var_screeninfo*,struct fb_info*) ;

__attribute__((used)) static int FUNC_1(struct fb_var_screeninfo *VAR_1,
      struct fb_info *VAR_2)
{
 struct lynxfb_par *VAR_3;
 struct lynxfb_crtc *VAR_4;

 if (!VAR_2)
  return -VAR_0;

 VAR_3 = VAR_2->par;
 VAR_4 = &VAR_3->crtc;
 return FUNC_0(VAR_4, VAR_1, VAR_2);
}
