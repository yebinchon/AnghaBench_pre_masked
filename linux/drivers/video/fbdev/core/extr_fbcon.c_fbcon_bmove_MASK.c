
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {size_t vc_num; } ;
struct fbcon_display {scalar_t__ yscroll; scalar_t__ vrows; } ;
struct fb_info {int dummy; } ;


 size_t* VAR_0 ;
 struct fbcon_display* VAR_1 ;
 int FUNC_0 (struct vc_data*,struct fbcon_display*,int,int,int,int,int,int,scalar_t__) ;
 scalar_t__ FUNC_1 (struct vc_data*,struct fb_info*) ;
 struct fb_info** VAR_2 ;

__attribute__((used)) static void FUNC_2(struct vc_data *VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7,
   int VAR_8, int VAR_9)
{
 struct fb_info *VAR_10 = VAR_2[VAR_0[VAR_3->vc_num]];
 struct fbcon_display *VAR_11 = &VAR_1[VAR_3->vc_num];

 if (FUNC_1(VAR_3, VAR_10))
  return;

 if (!VAR_9 || !VAR_8)
  return;
 FUNC_0(VAR_3, VAR_11, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9,
   VAR_11->vrows - VAR_11->yscroll);
}
