
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svga_fb_format {int xpanstep; int visual; int type_aux; int type; int nonstd; int transp; int blue; int green; int red; int bits_per_pixel; } ;
struct fb_var_screeninfo {int nonstd; int transp; int blue; int green; int red; int bits_per_pixel; } ;
struct fb_fix_screeninfo {int xpanstep; int visual; int type_aux; int type; } ;


 int FUNC_0 (struct svga_fb_format const*,struct fb_var_screeninfo*) ;

int FUNC_1(const struct svga_fb_format *VAR_0,
        struct fb_var_screeninfo *VAR_1,
        struct fb_fix_screeninfo *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_0, VAR_1);

 if (VAR_3 >= 0) {
  VAR_1->bits_per_pixel = VAR_0[VAR_3].bits_per_pixel;
  VAR_1->red = VAR_0[VAR_3].red;
  VAR_1->green = VAR_0[VAR_3].green;
  VAR_1->blue = VAR_0[VAR_3].blue;
  VAR_1->transp = VAR_0[VAR_3].transp;
  VAR_1->nonstd = VAR_0[VAR_3].nonstd;
  if (VAR_2 != ((void*)0)) {
   VAR_2->type = VAR_0[VAR_3].type;
   VAR_2->type_aux = VAR_0[VAR_3].type_aux;
   VAR_2->visual = VAR_0[VAR_3].visual;
   VAR_2->xpanstep = VAR_0[VAR_3].xpanstep;
  }
 }

 return VAR_3;
}
