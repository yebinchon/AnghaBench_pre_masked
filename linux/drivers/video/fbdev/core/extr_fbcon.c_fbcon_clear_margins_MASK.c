
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {size_t vc_num; } ;
struct fbcon_ops {int (* clear_margins ) (struct vc_data*,struct fb_info*,int ,int) ;} ;
struct fb_info {struct fbcon_ops* fbcon_par; } ;


 size_t* VAR_0 ;
 int FUNC_0 (struct vc_data*,struct fb_info*) ;
 int VAR_1 ;
 struct fb_info** VAR_2 ;
 int FUNC_1 (struct vc_data*,struct fb_info*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct vc_data *VAR_3, int VAR_4)
{
 struct fb_info *VAR_5 = VAR_2[VAR_0[VAR_3->vc_num]];
 struct fbcon_ops *VAR_6 = VAR_5->fbcon_par;

 if (!FUNC_0(VAR_3, VAR_5))
  VAR_6->clear_margins(VAR_3, VAR_5, VAR_1, VAR_4);
}
