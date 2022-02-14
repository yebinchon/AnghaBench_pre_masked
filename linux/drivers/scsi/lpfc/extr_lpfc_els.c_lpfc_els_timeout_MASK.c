
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct timer_list {int dummy; } ;
struct lpfc_vport {int work_port_events; int load_flag; int work_port_lock; struct lpfc_hba* phba; } ;
struct lpfc_hba {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct lpfc_vport* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (struct lpfc_hba*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct lpfc_vport* VAR_3 ;

void
FUNC_4(struct timer_list *VAR_4)
{
 struct lpfc_vport *VAR_5 = FUNC_0(VAR_5, VAR_4, VAR_2);
 struct lpfc_hba *VAR_6 = VAR_5->phba;
 uint32_t VAR_7;
 unsigned long VAR_8;

 FUNC_2(&VAR_5->work_port_lock, VAR_8);
 VAR_7 = VAR_5->work_port_events & VAR_1;
 if ((!VAR_7) && (!(VAR_5->load_flag & VAR_0)))
  VAR_5->work_port_events |= VAR_1;
 FUNC_3(&VAR_5->work_port_lock, VAR_8);

 if ((!VAR_7) && (!(VAR_5->load_flag & VAR_0)))
  FUNC_1(VAR_6);
 return;
}
