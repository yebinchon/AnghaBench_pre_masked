
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_hba {unsigned long last_ramp_down_time; TYPE_1__* pport; int hbalock; void* last_rsrc_error_time; int num_rsrc_err; } ;
struct TYPE_2__ {int work_port_events; int work_port_lock; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 void* VAR_2 ;
 int FUNC_1 (struct lpfc_hba*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 scalar_t__ FUNC_4 (unsigned long,void*) ;

void
FUNC_5(struct lpfc_hba *VAR_3)
{
 unsigned long VAR_4;
 uint32_t VAR_5;
 unsigned long VAR_6;

 FUNC_2(&VAR_3->hbalock, VAR_4);
 FUNC_0(&VAR_3->num_rsrc_err);
 VAR_3->last_rsrc_error_time = VAR_2;

 VAR_6 = VAR_3->last_ramp_down_time + VAR_0;
 if (FUNC_4(VAR_6, VAR_2)) {
  FUNC_3(&VAR_3->hbalock, VAR_4);
  return;
 }

 VAR_3->last_ramp_down_time = VAR_2;

 FUNC_3(&VAR_3->hbalock, VAR_4);

 FUNC_2(&VAR_3->pport->work_port_lock, VAR_4);
 VAR_5 = VAR_3->pport->work_port_events & VAR_1;
 if (!VAR_5)
  VAR_3->pport->work_port_events |= VAR_1;
 FUNC_3(&VAR_3->pport->work_port_lock, VAR_4);

 if (!VAR_5)
  FUNC_1(VAR_3);
 return;
}
