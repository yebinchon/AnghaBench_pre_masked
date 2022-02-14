
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {struct lpfc_device_data* hostdata; TYPE_1__* host; } ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_hba {int devicelock; scalar_t__ cfg_fof; int sdev_cnt; } ;
struct lpfc_device_data {int available; int oas_enabled; } ;
struct TYPE_2__ {scalar_t__ hostdata; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct lpfc_hba*,struct lpfc_device_data*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_4(struct scsi_device *VAR_0)
{
 struct lpfc_vport *VAR_1 = (struct lpfc_vport *) VAR_0->host->hostdata;
 struct lpfc_hba *VAR_2 = VAR_1->phba;
 unsigned long VAR_3;
 struct lpfc_device_data *VAR_4 = VAR_0->hostdata;

 FUNC_0(&VAR_2->sdev_cnt);
 if ((VAR_2->cfg_fof) && (VAR_4)) {
  FUNC_2(&VAR_2->devicelock, VAR_3);
  VAR_4->available = 0;
  if (!VAR_4->oas_enabled)
   FUNC_1(VAR_2, VAR_4);
  FUNC_3(&VAR_2->devicelock, VAR_3);
 }
 VAR_0->hostdata = ((void*)0);
 return;
}
