
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ oas_supported; } ;
struct TYPE_4__ {TYPE_1__ pc_sli4_params; } ;
struct lpfc_hba {int cfg_fof; int * device_data_mem_pool; TYPE_2__ sli4_hba; int cfg_EnableXLane; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct lpfc_hba *VAR_0)
{

 if (!VAR_0->cfg_EnableXLane)
  return;

 if (VAR_0->sli4_hba.pc_sli4_params.oas_supported) {
  VAR_0->cfg_fof = 1;
 } else {
  VAR_0->cfg_fof = 0;
  if (VAR_0->device_data_mem_pool)
   FUNC_0(VAR_0->device_data_mem_pool);
  VAR_0->device_data_mem_pool = ((void*)0);
 }

 return;
}
