
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lpfc_queue {int queue_id; } ;
struct TYPE_4__ {TYPE_1__* hdwq; } ;
struct lpfc_hba {TYPE_2__ sli4_hba; } ;
struct TYPE_3__ {struct lpfc_queue* hba_eq; } ;


 int FUNC_0 (struct lpfc_queue*) ;
 int FUNC_1 (char*,int,int ) ;

__attribute__((used)) static inline void
FUNC_2(struct lpfc_hba *VAR_0, int VAR_1)
{
 struct lpfc_queue *VAR_2;

 VAR_2 = VAR_0->sli4_hba.hdwq[VAR_1].hba_eq;

 FUNC_1("EQ[Idx:%d|Qid:%d]\n", VAR_1, VAR_2->queue_id);

 FUNC_0(VAR_2);
}
