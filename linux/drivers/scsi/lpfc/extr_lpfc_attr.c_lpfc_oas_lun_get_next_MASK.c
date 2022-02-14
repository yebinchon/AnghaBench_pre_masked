
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct lpfc_name {int dummy; } ;
struct TYPE_2__ {int oas_next_lun; scalar_t__ oas_next_tgt_wwpn; scalar_t__ oas_next_vpt_wwpn; } ;
struct lpfc_hba {TYPE_1__ sli4_hba; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct lpfc_hba*,struct lpfc_name*,struct lpfc_name*,int *,struct lpfc_name*,struct lpfc_name*,int *,int *,int *) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static uint64_t
FUNC_2(struct lpfc_hba *VAR_1, uint8_t VAR_2[],
        uint8_t VAR_3[], uint32_t *VAR_4,
        uint32_t *VAR_5)
{
 uint64_t VAR_6;

 if (FUNC_1(!VAR_1) || !VAR_2 || !VAR_3)
  return VAR_0;
 if (FUNC_0(VAR_1, (struct lpfc_name *)
       VAR_1->sli4_hba.oas_next_vpt_wwpn,
       (struct lpfc_name *)
       VAR_1->sli4_hba.oas_next_tgt_wwpn,
       &VAR_1->sli4_hba.oas_next_lun,
       (struct lpfc_name *)VAR_2,
       (struct lpfc_name *)VAR_3,
       &VAR_6, VAR_4, VAR_5))
  return VAR_6;
 else
  return VAR_0;
}
