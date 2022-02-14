
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lpfc_queue {int max_proc_limit; int notify_interval; int EQ_processed; int EQ_max_eqe; scalar_t__ queue_claimed; } ;
struct TYPE_2__ {int (* sli4_write_eq_db ) (struct lpfc_hba*,struct lpfc_queue*,int,int ) ;} ;
struct lpfc_hba {TYPE_1__ sli4_hba; } ;
struct lpfc_eqe {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lpfc_hba*,struct lpfc_queue*,struct lpfc_eqe*) ;
 scalar_t__ FUNC_1 (scalar_t__*,int ,int) ;
 struct lpfc_eqe* FUNC_2 (struct lpfc_queue*) ;
 int FUNC_3 (struct lpfc_hba*,struct lpfc_queue*,struct lpfc_eqe*) ;
 int FUNC_4 (struct lpfc_hba*,struct lpfc_queue*,int,int ) ;
 int FUNC_5 (struct lpfc_hba*,struct lpfc_queue*,int,int ) ;

__attribute__((used)) static int
FUNC_6(struct lpfc_hba *VAR_2, struct lpfc_queue *VAR_3)
{
 struct lpfc_eqe *VAR_4;
 int VAR_5 = 0, VAR_6 = 0;

 if (FUNC_1(&VAR_3->queue_claimed, 0, 1) != 0)
  goto rearm_and_exit;

 VAR_4 = FUNC_2(VAR_3);
 while (VAR_4) {
  FUNC_3(VAR_2, VAR_3, VAR_4);
  FUNC_0(VAR_2, VAR_3, VAR_4);

  VAR_6++;
  if (!(++VAR_5 % VAR_3->max_proc_limit))
   break;

  if (!(VAR_5 % VAR_3->notify_interval)) {
   VAR_2->sli4_hba.sli4_write_eq_db(VAR_2, VAR_3, VAR_6,
       VAR_0);
   VAR_6 = 0;
  }

  VAR_4 = FUNC_2(VAR_3);
 }
 VAR_3->EQ_processed += VAR_5;


 if (VAR_5 > VAR_3->EQ_max_eqe)
  VAR_3->EQ_max_eqe = VAR_5;

 VAR_3->queue_claimed = 0;

rearm_and_exit:

 VAR_2->sli4_hba.sli4_write_eq_db(VAR_2, VAR_3, VAR_6, VAR_1);

 return VAR_5;
}
