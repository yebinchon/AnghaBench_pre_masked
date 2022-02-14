
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_mobile_lcdc_priv {int dummy; } ;
struct sh_mobile_lcdc_chan {int blank_status; int yres; int xres; struct sh_mobile_lcdc_priv* lcdc; } ;
struct fb_info {int fbdefio; struct sh_mobile_lcdc_chan* par; } ;
struct fb_fillrect {int height; int width; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sh_mobile_lcdc_priv*) ;
 int FUNC_1 (struct sh_mobile_lcdc_priv*) ;
 int FUNC_2 (struct fb_info*,struct fb_fillrect*) ;
 int FUNC_3 (struct sh_mobile_lcdc_chan*) ;

__attribute__((used)) static int FUNC_4(int VAR_2, struct fb_info *VAR_3)
{
 struct sh_mobile_lcdc_chan *VAR_4 = VAR_3->par;
 struct sh_mobile_lcdc_priv *VAR_5 = VAR_4->lcdc;


 if (VAR_2 > VAR_1 && VAR_4->blank_status == VAR_1) {
  struct fb_fillrect VAR_6 = {
   .width = VAR_4->xres,
   .height = VAR_4->yres,
  };
  FUNC_2(VAR_3, &VAR_6);
 }

 if (VAR_2 <= VAR_0 && VAR_4->blank_status > VAR_0) {
  FUNC_1(VAR_5);
 }

 if (VAR_2 > VAR_0 && VAR_4->blank_status <= VAR_0) {





  if (!VAR_3->fbdefio) {
   FUNC_3(VAR_4);
   FUNC_3(VAR_4);
  }
  FUNC_0(VAR_5);
 }

 VAR_4->blank_status = VAR_2;
 return 0;
}
