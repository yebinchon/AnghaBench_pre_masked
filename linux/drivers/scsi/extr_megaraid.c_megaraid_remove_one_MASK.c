
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef int mbox64_t ;
struct TYPE_6__ {int flag; int una_mbox64_dma; int una_mbox64; int dev; int scb_list; int buf_dma_handle; int mega_buffer; TYPE_1__* host; scalar_t__ base; } ;
typedef TYPE_2__ adapter_t ;
struct TYPE_5__ {int host_no; int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_3 ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (int ,int,int ,int ) ;
 struct Scsi_Host* FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (scalar_t__,int) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (struct Scsi_Host*) ;
 int FUNC_11 (struct Scsi_Host*) ;
 int FUNC_12 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_13(struct pci_dev *VAR_4)
{
 struct Scsi_Host *VAR_5 = FUNC_6(VAR_4);
 adapter_t *VAR_6 = (adapter_t *)VAR_5->hostdata;
 char VAR_7[12] = { 0 };

 FUNC_11(VAR_5);

 FUNC_0(VAR_6);


 if (VAR_6->flag & VAR_0) {
  FUNC_1((void *)VAR_6->base);
  FUNC_7(VAR_6->host->base, 128);
 } else
  FUNC_8(VAR_6->base, 16);

 FUNC_3(VAR_6);

 FUNC_12(VAR_7, "hba%d", VAR_6->host->host_no);
 FUNC_9(VAR_7, VAR_3);

 FUNC_5(VAR_6->dev, VAR_1,
   VAR_6->mega_buffer, VAR_6->buf_dma_handle);
 FUNC_2(VAR_6->scb_list);
 FUNC_5(VAR_6->dev, sizeof(mbox64_t),
   VAR_6->una_mbox64, VAR_6->una_mbox64_dma);

 FUNC_10(VAR_5);
 FUNC_4(VAR_4);

 VAR_2--;
}
