
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct fb_var_screeninfo {int xres; int bits_per_pixel; int yres; int vmode; scalar_t__ activate; } ;
struct TYPE_2__ {int line_length; int smem_len; } ;
struct fb_info {struct fb_var_screeninfo var; TYPE_1__ fix; scalar_t__ screen_base; struct dlfb_data* par; } ;
struct dlfb_data {scalar_t__ fb_count; struct fb_var_screeninfo current_mode; } ;


 int VAR_0 ;
 int FUNC_0 (struct dlfb_data*,int ,int ,int,int) ;
 int FUNC_1 (struct dlfb_data*,struct fb_info*,int) ;
 int FUNC_2 (struct dlfb_data*,struct fb_var_screeninfo*) ;
 int FUNC_3 (struct fb_var_screeninfo*,struct fb_var_screeninfo*,int) ;

__attribute__((used)) static int FUNC_4(struct fb_info *VAR_1)
{
 struct dlfb_data *VAR_2 = VAR_1->par;
 int VAR_3;
 u16 *VAR_4;
 int VAR_5;
 struct fb_var_screeninfo VAR_6;
 u32 VAR_7 = VAR_1->var.xres * (VAR_1->var.bits_per_pixel / 8);


 VAR_6 = VAR_1->var;
 VAR_6.activate = 0;
 VAR_6.vmode &= ~VAR_0;

 if (!FUNC_3(&VAR_2->current_mode, &VAR_6, sizeof(struct fb_var_screeninfo)))
  return 0;

 VAR_3 = FUNC_1(VAR_2, VAR_1, VAR_1->var.yres * VAR_7);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_2(VAR_2, &VAR_1->var);

 if (VAR_3)
  return VAR_3;

 VAR_2->current_mode = VAR_6;
 VAR_1->fix.line_length = VAR_7;

 if (VAR_2->fb_count == 0) {



  VAR_4 = (u16 *) VAR_1->screen_base;
  for (VAR_5 = 0; VAR_5 < VAR_1->fix.smem_len / 2; VAR_5++)
   VAR_4[VAR_5] = 0x37e6;
 }

 FUNC_0(VAR_2, 0, 0, VAR_1->var.xres, VAR_1->var.yres);

 return 0;
}
