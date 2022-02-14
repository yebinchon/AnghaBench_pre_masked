
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_qla_host {TYPE_1__* pdev; int flags; } ;
struct TYPE_3__ {scalar_t__ msix_enabled; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct scsi_qla_host*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int ,int *) ;

void FUNC_4(struct scsi_qla_host *VAR_1)
{
 if (!FUNC_3(VAR_0, &VAR_1->flags))
  return;

 if (VAR_1->pdev->msix_enabled)
  FUNC_0(FUNC_2(VAR_1->pdev, 1), VAR_1);
 FUNC_0(FUNC_2(VAR_1->pdev, 0), VAR_1);
 FUNC_1(VAR_1->pdev);
}
