
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ frsig; scalar_t__ acqsig; scalar_t__ relsig; scalar_t__ waitv; int mode; } ;
struct vc_data {int vt_newvt; int * vt_pid; TYPE_1__ vt_mode; int vc_num; int vc_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct vc_data*) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct vc_data *VAR_2)
{
 VAR_2->vc_mode = VAR_0;
 FUNC_3(VAR_2->vc_num);
 VAR_2->vt_mode.mode = VAR_1;
 VAR_2->vt_mode.waitv = 0;
 VAR_2->vt_mode.relsig = 0;
 VAR_2->vt_mode.acqsig = 0;
 VAR_2->vt_mode.frsig = 0;
 FUNC_1(VAR_2->vt_pid);
 VAR_2->vt_pid = ((void*)0);
 VAR_2->vt_newvt = -1;
 if (!FUNC_0())
  FUNC_2(VAR_2);
}
