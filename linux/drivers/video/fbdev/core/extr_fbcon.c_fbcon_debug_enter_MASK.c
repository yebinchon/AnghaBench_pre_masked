
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vc_data {size_t vc_num; } ;
struct fbcon_ops {scalar_t__ graphics; scalar_t__ save_graphics; } ;
struct fb_info {TYPE_1__* fbops; struct fbcon_ops* fbcon_par; } ;
struct TYPE_2__ {int (* fb_debug_enter ) (struct fb_info*) ;} ;


 int VAR_0 ;
 size_t* VAR_1 ;
 int FUNC_0 (struct vc_data*,int ) ;
 struct fb_info** VAR_2 ;
 int FUNC_1 (struct fb_info*) ;

__attribute__((used)) static int FUNC_2(struct vc_data *VAR_3)
{
 struct fb_info *VAR_4 = VAR_2[VAR_1[VAR_3->vc_num]];
 struct fbcon_ops *VAR_5 = VAR_4->fbcon_par;

 VAR_5->save_graphics = VAR_5->graphics;
 VAR_5->graphics = 0;
 if (VAR_4->fbops->fb_debug_enter)
  VAR_4->fbops->fb_debug_enter(VAR_4);
 FUNC_0(VAR_3, VAR_0);
 return 0;
}
