
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_hba {int device_data_mem_pool; int cfg_fof; } ;
struct lpfc_device_data {int listentry; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct lpfc_device_data*,int ) ;
 scalar_t__ FUNC_3 (int) ;

void
FUNC_4(struct lpfc_hba *VAR_0,
   struct lpfc_device_data *VAR_1)
{

 if (FUNC_3(!VAR_0) || !VAR_1 ||
     !(VAR_0->cfg_fof))
  return;

 if (!FUNC_1(&VAR_1->listentry))
  FUNC_0(&VAR_1->listentry);
 FUNC_2(VAR_1, VAR_0->device_data_mem_pool);
 return;
}
