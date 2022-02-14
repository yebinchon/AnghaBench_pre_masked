
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct lpfc_queue {int hba_index; int qe_valid; int entry_count; } ;
struct lpfc_mcqe {int dummy; } ;
struct TYPE_3__ {scalar_t__ cqav; } ;
struct TYPE_4__ {TYPE_1__ pc_sli4_params; struct lpfc_queue* mbx_cq; } ;
struct lpfc_hba {scalar_t__ sli_rev; TYPE_2__ sli4_hba; } ;
typedef struct lpfc_mcqe lpfc_cqe ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,struct lpfc_mcqe*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct lpfc_queue*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static bool
FUNC_3(struct lpfc_hba *VAR_4)
{

 uint32_t VAR_5;
 struct lpfc_queue *VAR_6;
 struct lpfc_mcqe *VAR_7;
 bool VAR_8 = 0;
 uint8_t VAR_9;

 if (FUNC_2(!VAR_4) || (VAR_4->sli_rev != VAR_0))
  return 0;



 VAR_6 = VAR_4->sli4_hba.mbx_cq;
 VAR_5 = VAR_6->hba_index;
 VAR_9 = VAR_6->qe_valid;
 while (FUNC_0(VAR_1,
        (struct lpfc_cqe *)FUNC_1(VAR_6, VAR_5)) == VAR_9) {
  VAR_7 = (struct lpfc_mcqe *)(FUNC_1(VAR_6, VAR_5));
  if (FUNC_0(VAR_3, VAR_7) &&
      (!FUNC_0(VAR_2, VAR_7))) {
   VAR_8 = 1;
   break;
  }
  VAR_5 = (VAR_5 + 1) % VAR_6->entry_count;
  if (VAR_6->hba_index == VAR_5)
   break;


  if (VAR_4->sli4_hba.pc_sli4_params.cqav && !VAR_5)
   VAR_9 = (VAR_9) ? 0 : 1;
 }
 return VAR_8;

}
