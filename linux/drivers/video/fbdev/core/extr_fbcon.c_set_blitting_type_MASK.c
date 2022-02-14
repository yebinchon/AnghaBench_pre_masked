
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {size_t vc_num; } ;
struct fbcon_ops {int * p; } ;
struct fb_info {int flags; struct fbcon_ops* fbcon_par; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (struct fbcon_ops*) ;
 int FUNC_1 (struct fb_info*) ;

__attribute__((used)) static void FUNC_2(struct vc_data *VAR_2, struct fb_info *VAR_3)
{
 struct fbcon_ops *VAR_4 = VAR_3->fbcon_par;

 VAR_3->flags &= ~VAR_0;
 VAR_4->p = &VAR_1[VAR_2->vc_num];
 FUNC_1(VAR_3);
 FUNC_0(VAR_4);
}
