
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct lpfc_hba {TYPE_1__* pport; int hba_flag; } ;
struct TYPE_2__ {int load_flag; int work_port_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct lpfc_hba* FUNC_0 (struct lpfc_hba*,struct timer_list*,int ) ;
 int FUNC_1 (struct lpfc_hba*) ;
 int VAR_2 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_4(struct timer_list *VAR_3)
{
 struct lpfc_hba *VAR_4;
 unsigned long VAR_5;

 VAR_4 = FUNC_0(VAR_4, VAR_3, VAR_2);
 FUNC_2(&VAR_4->pport->work_port_lock, VAR_5);
 if (!(VAR_4->pport->load_flag & VAR_0))
  VAR_4->hba_flag |= VAR_1;
 else
  VAR_4->hba_flag &= ~VAR_1;
 FUNC_3(&VAR_4->pport->work_port_lock, VAR_5);

 if (!(VAR_4->pport->load_flag & VAR_0))
  FUNC_1(VAR_4);
}
