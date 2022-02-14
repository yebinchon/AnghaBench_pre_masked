
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ io_xri_cnt; scalar_t__ els_xri_cnt; int lpfc_abts_nvmet_ctx_list; int lpfc_nvmet_sgl_list; int lpfc_abts_els_sgl_list; int lpfc_els_sgl_list; } ;
struct lpfc_hba {TYPE_1__ sli4_hba; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct lpfc_hba *VAR_0)
{

 FUNC_0(&VAR_0->sli4_hba.lpfc_els_sgl_list);
 FUNC_0(&VAR_0->sli4_hba.lpfc_abts_els_sgl_list);
 FUNC_0(&VAR_0->sli4_hba.lpfc_nvmet_sgl_list);
 FUNC_0(&VAR_0->sli4_hba.lpfc_abts_nvmet_ctx_list);


 VAR_0->sli4_hba.els_xri_cnt = 0;


 VAR_0->sli4_hba.io_xri_cnt = 0;
}
