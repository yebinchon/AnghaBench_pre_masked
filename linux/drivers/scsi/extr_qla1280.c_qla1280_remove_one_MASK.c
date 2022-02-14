
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_qla_host {int response_dma; int response_ring; TYPE_1__* pdev; int request_dma; int request_ring; int mmpbase; } ;
struct response {int dummy; } ;
struct pci_dev {int irq; } ;
struct Scsi_Host {int io_port; scalar_t__ hostdata; } ;
typedef int request_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int ,int ) ;
 int FUNC_1 (int ,struct scsi_qla_host*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct pci_dev*) ;
 struct Scsi_Host* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct scsi_qla_host*) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (struct Scsi_Host*) ;
 int FUNC_8 (struct Scsi_Host*) ;

__attribute__((used)) static void
FUNC_9(struct pci_dev *VAR_2)
{
 struct Scsi_Host *VAR_3 = FUNC_4(VAR_2);
 struct scsi_qla_host *VAR_4 = (struct scsi_qla_host *)VAR_3->hostdata;

 FUNC_8(VAR_3);

 FUNC_5(VAR_4);

 FUNC_1(VAR_2->irq, VAR_4);




 FUNC_6(VAR_3->io_port, 0xff);


 FUNC_0(&VAR_4->pdev->dev,
   ((VAR_0 + 1) * (sizeof(request_t))),
   VAR_4->request_ring, VAR_4->request_dma);
 FUNC_0(&VAR_4->pdev->dev,
   ((VAR_1 + 1) * (sizeof(struct response))),
   VAR_4->response_ring, VAR_4->response_dma);

 FUNC_3(VAR_2);

 FUNC_7(VAR_3);
}
