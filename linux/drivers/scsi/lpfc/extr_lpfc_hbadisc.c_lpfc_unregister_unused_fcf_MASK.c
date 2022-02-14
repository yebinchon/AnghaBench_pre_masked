
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int fcf_flag; } ;
struct lpfc_hba {int hba_flag; int hbalock; TYPE_1__* pport; TYPE_2__ fcf; } ;
struct TYPE_3__ {scalar_t__ port_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (struct lpfc_hba*) ;
 int FUNC_1 (struct lpfc_hba*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4(struct lpfc_hba *VAR_5)
{





 FUNC_2(&VAR_5->hbalock);
 if (!(VAR_5->hba_flag & VAR_2) ||
     !(VAR_5->fcf.fcf_flag & VAR_1) ||
     !(VAR_5->hba_flag & VAR_3) ||
     (VAR_5->fcf.fcf_flag & VAR_0) ||
     (VAR_5->pport->port_state == VAR_4)) {
  FUNC_3(&VAR_5->hbalock);
  return;
 }
 FUNC_3(&VAR_5->hbalock);

 if (FUNC_0(VAR_5))
  return;

 FUNC_1(VAR_5);
}
