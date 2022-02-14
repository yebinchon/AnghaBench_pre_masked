
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct lpfc_name {int dummy; } ;
struct lpfc_hba {int device_data_mem_pool; int cfg_fof; } ;
struct TYPE_2__ {int lun; int target_wwpn; int vport_wwpn; } ;
struct lpfc_device_data {int oas_enabled; int available; int priority; TYPE_1__ device_id; int * rport_data; int listentry; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct lpfc_name*,int) ;
 struct lpfc_device_data* FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int) ;

struct lpfc_device_data*
FUNC_4(struct lpfc_hba *VAR_2, struct lpfc_name *VAR_3,
   struct lpfc_name *VAR_4, uint64_t VAR_5,
   uint32_t VAR_6, bool VAR_7)
{

 struct lpfc_device_data *VAR_8;
 int VAR_9;

 if (FUNC_3(!VAR_2) || !VAR_3 || !VAR_4 ||
     !(VAR_2->cfg_fof))
  return ((void*)0);



 if (VAR_7)
  VAR_9 = VAR_0;
 else
  VAR_9 = VAR_1;
 VAR_8 = FUNC_2(VAR_2->device_data_mem_pool, VAR_9);
 if (!VAR_8)
  return ((void*)0);
 FUNC_0(&VAR_8->listentry);
 VAR_8->rport_data = ((void*)0);
 FUNC_1(&VAR_8->device_id.vport_wwpn, VAR_3,
        sizeof(struct lpfc_name));
 FUNC_1(&VAR_8->device_id.target_wwpn, VAR_4,
        sizeof(struct lpfc_name));
 VAR_8->device_id.lun = VAR_5;
 VAR_8->oas_enabled = 0;
 VAR_8->priority = VAR_6;
 VAR_8->available = 0;
 return VAR_8;
}
