
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mailbox {int dummy; } ;
struct device {int dummy; } ;
struct ccb {int dummy; } ;
struct aha1542_hostdata {int mb_handle; int mb; int ccb_handle; int ccb; } ;
struct Scsi_Host {int dma_channel; scalar_t__ n_io_port; scalar_t__ io_port; scalar_t__ irq; struct device* dma_dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,int,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,struct Scsi_Host*) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (struct Scsi_Host*) ;
 int FUNC_5 (struct Scsi_Host*) ;
 struct aha1542_hostdata* FUNC_6 (struct Scsi_Host*) ;

__attribute__((used)) static int FUNC_7(struct Scsi_Host *VAR_1)
{
 struct aha1542_hostdata *VAR_2 = FUNC_6(VAR_1);
 struct device *VAR_3 = VAR_1->dma_dev;

 FUNC_5(VAR_1);
 if (VAR_1->dma_channel != 0xff)
  FUNC_1(VAR_1->dma_channel);
 FUNC_0(VAR_3, VAR_0 * sizeof(struct ccb),
     VAR_2->ccb, VAR_2->ccb_handle);
 FUNC_0(VAR_3, VAR_0 * 2 * sizeof(struct mailbox),
     VAR_2->mb, VAR_2->mb_handle);
 if (VAR_1->irq)
  FUNC_2(VAR_1->irq, VAR_1);
 if (VAR_1->io_port && VAR_1->n_io_port)
  FUNC_3(VAR_1->io_port, VAR_1->n_io_port);
 FUNC_4(VAR_1);
 return 0;
}
