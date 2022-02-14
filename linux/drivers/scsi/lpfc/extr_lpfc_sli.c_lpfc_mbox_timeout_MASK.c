
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct timer_list {int dummy; } ;
struct lpfc_hba {TYPE_1__* pport; } ;
struct TYPE_4__ {int mbox_tmo; } ;
struct TYPE_3__ {int work_port_events; int work_port_lock; } ;


 int VAR_0 ;
 struct lpfc_hba* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (struct lpfc_hba*) ;
 struct lpfc_hba* VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void
FUNC_4(struct timer_list *VAR_3)
{
 struct lpfc_hba *VAR_4 = FUNC_0(VAR_4, VAR_3, VAR_2.mbox_tmo);
 unsigned long VAR_5;
 uint32_t VAR_6;

 FUNC_2(&VAR_4->pport->work_port_lock, VAR_5);
 VAR_6 = VAR_4->pport->work_port_events & VAR_0;
 if (!VAR_6)
  VAR_4->pport->work_port_events |= VAR_0;
 FUNC_3(&VAR_4->pport->work_port_lock, VAR_5);

 if (!VAR_6)
  FUNC_1(VAR_4);
 return;
}
