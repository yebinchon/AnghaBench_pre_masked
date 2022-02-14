
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sh_mobile_lcdc_priv {scalar_t__ forced_fourcc; } ;
struct sh_mobile_lcdc_chan {TYPE_1__* cfg; struct sh_mobile_lcdc_priv* lcdc; } ;
struct fb_videomode {int xres; int yres; } ;
struct fb_var_screeninfo {int xres; int yres; } ;
struct fb_info {struct sh_mobile_lcdc_chan* par; } ;
struct TYPE_2__ {unsigned int num_modes; struct fb_videomode* lcd_modes; } ;


 int VAR_0 ;
 int FUNC_0 (struct fb_var_screeninfo*,struct fb_info*) ;
 int FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (struct fb_var_screeninfo*) ;

__attribute__((used)) static int FUNC_3(struct fb_var_screeninfo *VAR_1,
        struct fb_info *VAR_2)
{
 struct sh_mobile_lcdc_chan *VAR_3 = VAR_2->par;
 struct sh_mobile_lcdc_priv *VAR_4 = VAR_3->lcdc;
 unsigned int VAR_5 = (unsigned int)-1;
 unsigned int VAR_6 = 0;
 unsigned int VAR_7 = 0;
 unsigned int VAR_8;
 int VAR_9;






 for (VAR_8 = 0; VAR_8 < VAR_3->cfg->num_modes; ++VAR_8) {
  const struct fb_videomode *VAR_10 = &VAR_3->cfg->lcd_modes[VAR_8];
  unsigned int VAR_11;


  if (VAR_1->xres > VAR_10->xres || VAR_1->yres > VAR_10->yres)
   continue;

  VAR_11 = VAR_1->xres * VAR_1->yres + VAR_10->xres * VAR_10->yres
       - 2 * FUNC_1(VAR_1->xres, VAR_10->xres)
    * FUNC_1(VAR_1->yres, VAR_10->yres);

  if (VAR_11 < VAR_5) {
   VAR_6 = VAR_10->xres;
   VAR_7 = VAR_10->yres;
   VAR_5 = VAR_11;
  }
 }


 if (VAR_3->cfg->num_modes != 0) {
  if (VAR_5 == (unsigned int)-1)
   return -VAR_0;

  VAR_1->xres = VAR_6;
  VAR_1->yres = VAR_7;
 }

 VAR_9 = FUNC_0(VAR_1, VAR_2);
 if (VAR_9 < 0)
  return VAR_9;


 if (VAR_4->forced_fourcc &&
     VAR_4->forced_fourcc != FUNC_2(VAR_1))
  return -VAR_0;

 return 0;
}
