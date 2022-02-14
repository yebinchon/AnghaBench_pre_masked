
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lpfc_mcqe {int trailer; int mcqe_tag1; int mcqe_tag0; int word0; } ;
struct TYPE_2__ {int sp_asynce_work_queue; } ;
struct lpfc_hba {int hbalock; int hba_flag; TYPE_1__ sli4_hba; } ;
struct lpfc_cq_event {int list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 struct lpfc_cq_event* FUNC_1 (struct lpfc_hba*,struct lpfc_mcqe*,int) ;
 int FUNC_2 (struct lpfc_hba*,int ,int ,char*,int ,int ,int ,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static bool
FUNC_5(struct lpfc_hba *VAR_3, struct lpfc_mcqe *VAR_4)
{
 struct lpfc_cq_event *VAR_5;
 unsigned long VAR_6;

 FUNC_2(VAR_3, VAR_1, VAR_2,
   "0392 Async Event: word0:x%x, word1:x%x, "
   "word2:x%x, word3:x%x\n", VAR_4->word0,
   VAR_4->mcqe_tag0, VAR_4->mcqe_tag1, VAR_4->trailer);

 VAR_5 = FUNC_1(VAR_3, VAR_4, sizeof(struct lpfc_mcqe));
 if (!VAR_5)
  return 0;
 FUNC_3(&VAR_3->hbalock, VAR_6);
 FUNC_0(&VAR_5->list, &VAR_3->sli4_hba.sp_asynce_work_queue);

 VAR_3->hba_flag |= VAR_0;
 FUNC_4(&VAR_3->hbalock, VAR_6);

 return 1;
}
