
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_qla_host {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (struct scsi_qla_host*) ;
 int FUNC_2 (struct scsi_qla_host*) ;

void FUNC_3(struct scsi_qla_host *VAR_0)
{
 if (FUNC_1(VAR_0)) {

  FUNC_0(&VAR_0->pdev->dev, "Resetting rom_lock\n");
 }






 FUNC_2(VAR_0);
}
