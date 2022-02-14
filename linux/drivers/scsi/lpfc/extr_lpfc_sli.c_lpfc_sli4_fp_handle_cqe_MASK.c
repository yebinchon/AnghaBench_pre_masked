
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sli4_wcqe_xri_aborted {int dummy; } ;
struct lpfc_wcqe_release {int dummy; } ;
struct lpfc_wcqe_complete {int dummy; } ;
struct lpfc_rcqe {int dummy; } ;
struct lpfc_queue {int subtype; int CQ_xri_aborted; int CQ_release_wqe; int CQ_wq; } ;
struct lpfc_hba {void* last_completion_time; } ;
struct lpfc_cqe {int dummy; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct lpfc_wcqe_release*) ;
 void* VAR_5 ;
 int FUNC_1 (struct lpfc_hba*,int ,int ,char*,int) ;
 int FUNC_2 (struct lpfc_hba*,struct lpfc_queue*,struct lpfc_wcqe_complete*) ;
 int FUNC_3 (struct lpfc_hba*,struct lpfc_queue*,struct lpfc_wcqe_release*) ;
 int FUNC_4 (struct lpfc_hba*,struct lpfc_queue*,struct lpfc_rcqe*) ;
 int FUNC_5 (struct lpfc_cqe*,struct lpfc_wcqe_release*,int) ;
 int FUNC_6 (struct lpfc_hba*,struct lpfc_queue*,struct sli4_wcqe_xri_aborted*) ;
 int VAR_6 ;

__attribute__((used)) static bool
FUNC_7(struct lpfc_hba *VAR_7, struct lpfc_queue *VAR_8,
    struct lpfc_cqe *VAR_9)
{
 struct lpfc_wcqe_release VAR_10;
 bool VAR_11 = 0;


 FUNC_5(VAR_9, &VAR_10, sizeof(struct lpfc_cqe));


 switch (FUNC_0(VAR_6, &VAR_10)) {
 case 133:
 case 132:
  VAR_8->CQ_wq++;

  VAR_7->last_completion_time = VAR_5;
  if (VAR_8->subtype == VAR_2 || VAR_8->subtype == VAR_4)
   FUNC_2(VAR_7, VAR_8,
    (struct lpfc_wcqe_complete *)&VAR_10);
  break;
 case 129:
  VAR_8->CQ_release_wqe++;

  FUNC_3(VAR_7, VAR_8,
    (struct lpfc_wcqe_release *)&VAR_10);
  break;
 case 128:
  VAR_8->CQ_xri_aborted++;

  VAR_7->last_completion_time = VAR_5;
  VAR_11 = FUNC_6(VAR_7, VAR_8,
    (struct sli4_wcqe_xri_aborted *)&VAR_10);
  break;
 case 130:
 case 131:
  VAR_7->last_completion_time = VAR_5;
  if (VAR_8->subtype == VAR_3) {
   VAR_11 = FUNC_4(
    VAR_7, VAR_8, (struct lpfc_rcqe *)&VAR_10);
  }
  break;
 default:
  FUNC_1(VAR_7, VAR_0, VAR_1,
    "0144 Not a valid CQE code: x%x\n",
    FUNC_0(VAR_6, &VAR_10));
  break;
 }
 return VAR_11;
}
