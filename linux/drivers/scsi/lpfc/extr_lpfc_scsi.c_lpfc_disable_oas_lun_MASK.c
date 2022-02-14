
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
struct lpfc_name {int dummy; } ;
struct lpfc_hba {int devicelock; int luns; int cfg_fof; } ;
struct lpfc_device_data {int oas_enabled; int available; int priority; } ;


 struct lpfc_device_data* FUNC_0 (struct lpfc_hba*,int *,struct lpfc_name*,struct lpfc_name*,int ) ;
 int FUNC_1 (struct lpfc_hba*,struct lpfc_device_data*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 scalar_t__ FUNC_4 (int) ;

bool
FUNC_5(struct lpfc_hba *VAR_0, struct lpfc_name *VAR_1,
       struct lpfc_name *VAR_2, uint64_t VAR_3, uint8_t VAR_4)
{

 struct lpfc_device_data *VAR_5;
 unsigned long VAR_6;

 if (FUNC_4(!VAR_0) || !VAR_1 || !VAR_2 ||
     !VAR_0->cfg_fof)
  return 0;

 FUNC_2(&VAR_0->devicelock, VAR_6);


 VAR_5 = FUNC_0(VAR_0,
       &VAR_0->luns, VAR_1,
       VAR_2, VAR_3);
 if (VAR_5) {
  VAR_5->oas_enabled = 0;
  VAR_5->priority = VAR_4;
  if (!VAR_5->available)
   FUNC_1(VAR_0, VAR_5);
  FUNC_3(&VAR_0->devicelock, VAR_6);
  return 1;
 }

 FUNC_3(&VAR_0->devicelock, VAR_6);
 return 0;
}
