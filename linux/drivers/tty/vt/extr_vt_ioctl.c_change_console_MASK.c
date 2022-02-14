
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ mode; int relsig; } ;
struct vc_data {size_t vc_num; size_t vt_newvt; scalar_t__ vc_mode; TYPE_1__ vt_mode; int vt_pid; } ;
struct TYPE_4__ {struct vc_data* d; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct vc_data*) ;
 size_t VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct vc_data*) ;
 TYPE_2__* VAR_3 ;
 scalar_t__ VAR_4 ;

void FUNC_3(struct vc_data *VAR_5)
{
 struct vc_data *VAR_6;

 if (!VAR_5 || VAR_5->vc_num == VAR_2 || VAR_4)
  return;
 VAR_6 = VAR_3[VAR_2].d;
 if (VAR_6->vt_mode.mode == VAR_1) {
  VAR_6->vt_newvt = VAR_5->vc_num;
  if (FUNC_1(VAR_6->vt_pid, VAR_6->vt_mode.relsig, 1) == 0) {





   return;
  }
  FUNC_2(VAR_6);




 }




 if (VAR_6->vc_mode == VAR_0)
  return;

 FUNC_0(VAR_5);
}
