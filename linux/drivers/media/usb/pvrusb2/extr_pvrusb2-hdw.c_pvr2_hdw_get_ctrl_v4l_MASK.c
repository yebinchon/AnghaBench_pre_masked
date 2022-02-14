
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pvr2_hdw {unsigned int control_cnt; struct pvr2_ctrl* controls; } ;
struct pvr2_ctrl {TYPE_1__* info; } ;
struct TYPE_2__ {int v4l_id; } ;



struct pvr2_ctrl *FUNC_0(struct pvr2_hdw *VAR_0,unsigned int VAR_1)
{
 struct pvr2_ctrl *VAR_2;
 unsigned int VAR_3;
 int VAR_4;


 for (VAR_3 = 0; VAR_3 < VAR_0->control_cnt; VAR_3++) {
  VAR_2 = VAR_0->controls + VAR_3;
  VAR_4 = VAR_2->info->v4l_id;
  if (VAR_4 && (VAR_4 == VAR_1)) return VAR_2;
 }
 return ((void*)0);
}
