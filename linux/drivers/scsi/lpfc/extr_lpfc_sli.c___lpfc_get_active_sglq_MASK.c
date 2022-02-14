
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint16_t ;
struct lpfc_sglq {int dummy; } ;
struct TYPE_2__ {struct lpfc_sglq** lpfc_sglq_active_list; } ;
struct lpfc_hba {TYPE_1__ sli4_hba; } ;



struct lpfc_sglq *
FUNC_0(struct lpfc_hba *VAR_0, uint16_t VAR_1)
{
 struct lpfc_sglq *VAR_2;

 VAR_2 = VAR_0->sli4_hba.lpfc_sglq_active_list[VAR_1];
 return VAR_2;
}
