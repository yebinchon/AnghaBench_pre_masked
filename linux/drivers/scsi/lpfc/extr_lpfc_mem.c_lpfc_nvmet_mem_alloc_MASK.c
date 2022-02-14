
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lpfc_hba {int lpfc_nvmet_drb_pool; TYPE_1__* pcidev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int *,int ,int ,int ) ;
 int FUNC_1 (struct lpfc_hba*,int ,int ,char*) ;

int
FUNC_2(struct lpfc_hba *VAR_5)
{
 VAR_5->lpfc_nvmet_drb_pool =
  FUNC_0("lpfc_nvmet_drb_pool",
    &VAR_5->pcidev->dev, VAR_3,
    VAR_4, 0);
 if (!VAR_5->lpfc_nvmet_drb_pool) {
  FUNC_1(VAR_5, VAR_1, VAR_2,
    "6024 Can't enable NVME Target - no memory\n");
  return -VAR_0;
 }
 return 0;
}
