
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lpfc_vport {struct lpfc_hba* phba; } ;
struct TYPE_2__ {int sli_intf; } ;
struct lpfc_hba {scalar_t__ sli_rev; TYPE_1__ sli4_hba; } ;
struct bsg_job {int dummy; } ;
struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 struct Scsi_Host* FUNC_1 (struct bsg_job*) ;
 int FUNC_2 (struct lpfc_hba*,struct bsg_job*) ;
 int FUNC_3 (struct lpfc_hba*,struct bsg_job*) ;
 int VAR_3 ;
 struct lpfc_vport* FUNC_4 (struct Scsi_Host*) ;

__attribute__((used)) static int
FUNC_5(struct bsg_job *VAR_4)
{
 struct Scsi_Host *VAR_5;
 struct lpfc_vport *VAR_6;
 struct lpfc_hba *VAR_7;
 int VAR_8;

 VAR_5 = FUNC_1(VAR_4);
 if (!VAR_5)
  return -VAR_0;
 VAR_6 = FUNC_4(VAR_5);
 if (!VAR_6)
  return -VAR_0;
 VAR_7 = VAR_6->phba;
 if (!VAR_7)
  return -VAR_0;

 if (VAR_7->sli_rev < VAR_2)
  VAR_8 = FUNC_2(VAR_7, VAR_4);
 else if (FUNC_0(VAR_3, &VAR_7->sli4_hba.sli_intf) >=
   VAR_1)
  VAR_8 = FUNC_3(VAR_7, VAR_4);
 else
  VAR_8 = -VAR_0;

 return VAR_8;
}
