
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vc_data {scalar_t__ vc_mode; } ;
struct fbcon_ops {size_t currcon; int blank_state; } ;
struct fb_info {struct fbcon_ops* fbcon_par; } ;
struct TYPE_2__ {struct vc_data* d; } ;


 scalar_t__ VAR_0 ;
 size_t* VAR_1 ;
 scalar_t__ FUNC_0 (struct vc_data*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct fb_info** VAR_2 ;
 TYPE_1__* VAR_3 ;

void FUNC_3(struct fb_info *VAR_4, int VAR_5)
{
 struct fbcon_ops *VAR_6 = VAR_4->fbcon_par;
 struct vc_data *VAR_7;

 if (!VAR_6 || VAR_6->currcon < 0)
  return;

 VAR_7 = VAR_3[VAR_6->currcon].d;
 if (VAR_7->vc_mode != VAR_0 ||
   VAR_2[VAR_1[VAR_6->currcon]] != VAR_4)
  return;

 if (FUNC_0(VAR_7)) {
  if (VAR_5)
   FUNC_1(0);
  else
   FUNC_2(0);
 }
 VAR_6->blank_state = VAR_5;
}
