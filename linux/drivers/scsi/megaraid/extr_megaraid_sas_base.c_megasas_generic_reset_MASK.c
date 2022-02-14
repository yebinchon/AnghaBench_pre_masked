
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scsi_cmnd {int retries; int * cmnd; TYPE_2__* device; } ;
struct megasas_instance {TYPE_1__* pdev; int adprecovery; } ;
struct TYPE_6__ {scalar_t__ hostdata; } ;
struct TYPE_5__ {TYPE_3__* host; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct megasas_instance*) ;
 int FUNC_4 (int ,struct scsi_cmnd*,char*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct scsi_cmnd *VAR_4)
{
 int VAR_5;
 struct megasas_instance *VAR_6;

 VAR_6 = (struct megasas_instance *)VAR_4->device->host->hostdata;

 FUNC_4(VAR_1, VAR_4, "megasas: RESET cmd=%x retries=%x\n",
   VAR_4->cmnd[0], VAR_4->retries);

 if (FUNC_0(&VAR_6->adprecovery) == VAR_2) {
  FUNC_1(&VAR_6->pdev->dev, "cannot recover from previous reset failures\n");
  return VAR_0;
 }

 VAR_5 = FUNC_3(VAR_6);
 if (VAR_5 == VAR_3)
  FUNC_2(&VAR_6->pdev->dev, "reset successful\n");
 else
  FUNC_1(&VAR_6->pdev->dev, "failed to do reset\n");

 return VAR_5;
}
