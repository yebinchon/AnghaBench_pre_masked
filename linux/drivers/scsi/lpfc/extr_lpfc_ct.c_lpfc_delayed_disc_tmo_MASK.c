
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct timer_list {int dummy; } ;
struct lpfc_vport {int work_port_events; int work_port_lock; struct lpfc_hba* phba; } ;
struct lpfc_hba {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct lpfc_vport* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (struct lpfc_hba*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct lpfc_vport* VAR_2 ;

void
FUNC_4(struct timer_list *VAR_3)
{
 struct lpfc_vport *VAR_4 = FUNC_0(VAR_4, VAR_3, VAR_1);
 struct lpfc_hba *VAR_5 = VAR_4->phba;
 uint32_t VAR_6;
 unsigned long VAR_7;

 FUNC_2(&VAR_4->work_port_lock, VAR_7);
 VAR_6 = VAR_4->work_port_events & VAR_0;
 if (!VAR_6)
  VAR_4->work_port_events |= VAR_0;
 FUNC_3(&VAR_4->work_port_lock, VAR_7);

 if (!VAR_6)
  FUNC_1(VAR_5);
 return;
}
