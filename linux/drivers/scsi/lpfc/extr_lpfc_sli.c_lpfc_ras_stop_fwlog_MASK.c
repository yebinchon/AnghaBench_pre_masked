
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lpfc_ras_fwlog {int ras_active; } ;
struct TYPE_2__ {scalar_t__ conf_regs_memmap_p; } ;
struct lpfc_hba {TYPE_1__ sli4_hba; struct lpfc_ras_fwlog ras_fwlog; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;

void
FUNC_1(struct lpfc_hba *VAR_2)
{
 struct lpfc_ras_fwlog *VAR_3 = &VAR_2->ras_fwlog;

 VAR_3->ras_active = 0;


 FUNC_0(VAR_0,
        VAR_2->sli4_hba.conf_regs_memmap_p + VAR_1);
}
