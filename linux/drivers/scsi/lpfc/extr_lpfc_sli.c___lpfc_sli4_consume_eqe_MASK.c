
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lpfc_queue {int host_index; int entry_count; int qe_valid; } ;
struct TYPE_4__ {scalar_t__ eqav; } ;
struct TYPE_3__ {TYPE_2__ pc_sli4_params; } ;
struct lpfc_hba {TYPE_1__ sli4_hba; } ;
struct lpfc_eqe {int dummy; } ;


 int FUNC_0 (int ,struct lpfc_eqe*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(struct lpfc_hba *VAR_1, struct lpfc_queue *VAR_2,
   struct lpfc_eqe *VAR_3)
{
 if (!VAR_1->sli4_hba.pc_sli4_params.eqav)
  FUNC_0(VAR_0, VAR_3, 0);

 VAR_2->host_index = ((VAR_2->host_index + 1) % VAR_2->entry_count);


 if (VAR_1->sli4_hba.pc_sli4_params.eqav && !VAR_2->host_index)
  VAR_2->qe_valid = (VAR_2->qe_valid) ? 0 : 1;
}
