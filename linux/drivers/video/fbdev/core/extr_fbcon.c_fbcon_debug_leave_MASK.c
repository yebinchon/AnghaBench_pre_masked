
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vc_data {size_t vc_num; } ;
struct fbcon_ops {int save_graphics; int graphics; } ;
struct fb_info {TYPE_1__* fbops; struct fbcon_ops* fbcon_par; } ;
struct TYPE_2__ {int (* fb_debug_leave ) (struct fb_info*) ;} ;


 size_t* VAR_0 ;
 struct fb_info** VAR_1 ;
 int FUNC_0 (struct fb_info*) ;

__attribute__((used)) static int FUNC_1(struct vc_data *VAR_2)
{
 struct fb_info *VAR_3 = VAR_1[VAR_0[VAR_2->vc_num]];
 struct fbcon_ops *VAR_4 = VAR_3->fbcon_par;

 VAR_4->graphics = VAR_4->save_graphics;
 if (VAR_3->fbops->fb_debug_leave)
  VAR_3->fbops->fb_debug_leave(VAR_3);
 return 0;
}
