
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_queue {int CQ_mbox; } ;
struct lpfc_mcqe {int dummy; } ;
struct lpfc_hba {int dummy; } ;
struct lpfc_cqe {int dummy; } ;


 int FUNC_0 (int ,struct lpfc_mcqe*) ;
 int FUNC_1 (struct lpfc_cqe*,struct lpfc_mcqe*,int) ;
 int FUNC_2 (struct lpfc_hba*,struct lpfc_mcqe*) ;
 int FUNC_3 (struct lpfc_hba*,struct lpfc_mcqe*) ;
 int VAR_0 ;

__attribute__((used)) static bool
FUNC_4(struct lpfc_hba *VAR_1, struct lpfc_queue *VAR_2,
    struct lpfc_cqe *VAR_3)
{
 struct lpfc_mcqe VAR_4;
 bool VAR_5;

 VAR_2->CQ_mbox++;


 FUNC_1(VAR_3, &VAR_4, sizeof(struct lpfc_mcqe));


 if (!FUNC_0(VAR_0, &VAR_4))
  VAR_5 = FUNC_3(VAR_1, &VAR_4);
 else
  VAR_5 = FUNC_2(VAR_1, &VAR_4);
 return VAR_5;
}
