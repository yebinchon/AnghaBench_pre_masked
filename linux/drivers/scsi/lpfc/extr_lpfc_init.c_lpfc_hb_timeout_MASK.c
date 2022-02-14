
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct timer_list {int dummy; } ;
struct lpfc_hba {TYPE_1__* pport; } ;
struct TYPE_2__ {int work_port_events; int work_port_lock; } ;


 int VAR_0 ;
 struct lpfc_hba* FUNC_0 (struct lpfc_hba*,struct timer_list*,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct lpfc_hba*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_4(struct timer_list *VAR_2)
{
 struct lpfc_hba *VAR_3;
 uint32_t VAR_4;
 unsigned long VAR_5;

 VAR_3 = FUNC_0(VAR_3, VAR_2, VAR_1);


 FUNC_2(&VAR_3->pport->work_port_lock, VAR_5);
 VAR_4 = VAR_3->pport->work_port_events & VAR_0;
 if (!VAR_4)
  VAR_3->pport->work_port_events |= VAR_0;
 FUNC_3(&VAR_3->pport->work_port_lock, VAR_5);


 if (!VAR_4)
  FUNC_1(VAR_3);
 return;
}
