
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_qla_host {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(struct scsi_qla_host *VAR_0)
{

 if (FUNC_2(&VAR_0->pdev->dev, FUNC_0(64))) {
  FUNC_1(&VAR_0->pdev->dev,
     "Failed to set 64 bit PCI consistent mask; "
      "using 32 bit.\n");
  FUNC_2(&VAR_0->pdev->dev, FUNC_0(32));
 }
}
