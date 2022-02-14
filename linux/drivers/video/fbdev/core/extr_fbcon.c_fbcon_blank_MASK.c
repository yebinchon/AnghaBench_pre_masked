
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {size_t vc_num; } ;
struct fb_var_screeninfo {int activate; } ;
struct fbcon_ops {int graphics; int blank_state; int cursor_flash; struct fb_var_screeninfo var; } ;
struct fb_info {struct fb_var_screeninfo var; struct fbcon_ops* fbcon_par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t* VAR_5 ;
 scalar_t__ FUNC_0 (struct fb_info*,int) ;
 int FUNC_1 (struct fb_info*,struct fb_var_screeninfo*) ;
 int FUNC_2 (struct fb_info*) ;
 int FUNC_3 (struct vc_data*,int ) ;
 int FUNC_4 (struct fb_info*) ;
 int FUNC_5 (struct vc_data*,struct fb_info*,int) ;
 scalar_t__ FUNC_6 (struct vc_data*,struct fb_info*) ;
 struct fb_info** VAR_6 ;
 int FUNC_7 (struct vc_data*) ;

__attribute__((used)) static int FUNC_8(struct vc_data *VAR_7, int VAR_8, int VAR_9)
{
 struct fb_info *VAR_10 = VAR_6[VAR_5[VAR_7->vc_num]];
 struct fbcon_ops *VAR_11 = VAR_10->fbcon_par;

 if (VAR_9) {
  struct fb_var_screeninfo VAR_12 = VAR_10->var;

  VAR_11->graphics = 1;

  if (!VAR_8) {
   VAR_12.activate = VAR_3 | VAR_2;
   FUNC_1(VAR_10, &VAR_12);
   VAR_11->graphics = 0;
   VAR_11->var = VAR_10->var;
  }
 }

  if (!FUNC_6(VAR_7, VAR_10)) {
  if (VAR_11->blank_state != VAR_8) {
   VAR_11->blank_state = VAR_8;
   FUNC_3(VAR_7, VAR_8 ? VAR_1 : VAR_0);
   VAR_11->cursor_flash = (!VAR_8);

   if (FUNC_0(VAR_10, VAR_8))
    FUNC_5(VAR_7, VAR_10, VAR_8);
  }

  if (!VAR_8)
   FUNC_7(VAR_7);
 }

 if (VAR_9 || FUNC_6(VAR_7, VAR_10) ||
     VAR_11->blank_state != VAR_4)
  FUNC_4(VAR_10);
 else
  FUNC_2(VAR_10);

 return 0;
}
