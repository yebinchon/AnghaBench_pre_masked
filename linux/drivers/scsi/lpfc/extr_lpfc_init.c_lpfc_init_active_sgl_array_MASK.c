
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lpfc_sglq {int dummy; } ;
struct TYPE_3__ {int max_xri; } ;
struct TYPE_4__ {int lpfc_sglq_active_list; TYPE_1__ max_cfg_param; } ;
struct lpfc_hba {TYPE_2__ sli4_hba; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static int
FUNC_1(struct lpfc_hba *VAR_2)
{
 int VAR_3;
 VAR_3 = sizeof(struct lpfc_sglq *);
 VAR_3 *= VAR_2->sli4_hba.max_cfg_param.max_xri;

 VAR_2->sli4_hba.lpfc_sglq_active_list =
  FUNC_0(VAR_3, VAR_1);
 if (!VAR_2->sli4_hba.lpfc_sglq_active_list)
  return -VAR_0;
 return 0;
}
