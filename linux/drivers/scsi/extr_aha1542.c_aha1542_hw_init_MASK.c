
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_host_template {int dummy; } ;
struct mailbox {int dummy; } ;
struct device {int dummy; } ;
struct ccb {int dummy; } ;
struct aha1542_hostdata {int aha1542_last_mbi_used; int aha1542_last_mbo_used; scalar_t__ bios_translation; int mb_handle; void* mb; int ccb_handle; void* ccb; } ;
struct Scsi_Host {unsigned int unique_id; unsigned int io_port; int dma_channel; int irq; int this_id; int n_io_port; } ;
typedef int dma_info ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct Scsi_Host*) ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (struct Scsi_Host*) ;
 int FUNC_3 (struct Scsi_Host*,int ,int ,int ) ;
 int FUNC_4 (struct Scsi_Host*) ;
 int * VAR_8 ;
 int * VAR_9 ;
 void* FUNC_5 (struct device*,int,int *,int ) ;
 int FUNC_6 (struct device*,int,void*,int ) ;
 scalar_t__ FUNC_7 (struct device*,int ) ;
 int * VAR_10 ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ,struct Scsi_Host*) ;
 unsigned int* VAR_11 ;
 int FUNC_11 (unsigned int,int ) ;
 scalar_t__ FUNC_12 (int,char*) ;
 scalar_t__ FUNC_13 (int ,int ,int ,char*,struct Scsi_Host*) ;
 int FUNC_14 (unsigned int,int ,char*) ;
 scalar_t__ FUNC_15 (struct Scsi_Host*,struct device*) ;
 struct Scsi_Host* FUNC_16 (struct scsi_host_template*,int) ;
 int FUNC_17 (struct Scsi_Host*) ;
 int FUNC_18 (struct Scsi_Host*) ;
 int FUNC_19 (int,int ) ;
 int FUNC_20 (struct Scsi_Host*) ;
 int FUNC_21 (int ,struct Scsi_Host*,char*,...) ;
 struct aha1542_hostdata* FUNC_22 (struct Scsi_Host*) ;
 int FUNC_23 (char*,int,char*,int) ;

__attribute__((used)) static struct Scsi_Host *FUNC_24(struct scsi_host_template *VAR_12, struct device *VAR_13, int VAR_14)
{
 unsigned int VAR_15 = VAR_11[VAR_14];
 struct Scsi_Host *VAR_16;
 struct aha1542_hostdata *VAR_17;
 char VAR_18[] = "no DMA";

 if (VAR_15 == 0)
  return ((void*)0);

 if (!FUNC_14(VAR_15, VAR_1, "aha1542"))
  return ((void*)0);

 VAR_16 = FUNC_16(VAR_12, sizeof(struct aha1542_hostdata));
 if (!VAR_16)
  goto release;
 VAR_17 = FUNC_22(VAR_16);

 VAR_16->unique_id = VAR_15;
 VAR_16->io_port = VAR_15;
 VAR_16->n_io_port = VAR_1;
 VAR_17->aha1542_last_mbi_used = 2 * VAR_0 - 1;
 VAR_17->aha1542_last_mbo_used = VAR_0 - 1;

 if (!FUNC_4(VAR_16))
  goto unregister;

 FUNC_3(VAR_16, VAR_9[VAR_14], VAR_8[VAR_14], VAR_10[VAR_14]);
 if (FUNC_2(VAR_16))
  goto unregister;
 if (FUNC_1(VAR_16) == -1)
  goto unregister;

 if (VAR_16->dma_channel != 0xFF)
  FUNC_23(VAR_18, sizeof(VAR_18), "DMA %d", VAR_16->dma_channel);
 FUNC_21(VAR_6, VAR_16, "Adaptec AHA-1542 (SCSI-ID %d) at IO 0x%x, IRQ %d, %s\n",
    VAR_16->this_id, VAR_15, VAR_16->irq, VAR_18);
 if (VAR_17->bios_translation == VAR_2)
  FUNC_21(VAR_6, VAR_16, "Using extended bios translation\n");

 if (FUNC_7(VAR_13, FUNC_0(24)) < 0)
  goto unregister;

 VAR_17->mb = FUNC_5(VAR_13,
   VAR_0 * 2 * sizeof(struct mailbox),
   &VAR_17->mb_handle, VAR_4);
 if (!VAR_17->mb)
  goto unregister;

 VAR_17->ccb = FUNC_5(VAR_13,
   VAR_0 * sizeof(struct ccb),
   &VAR_17->ccb_handle, VAR_4);
 if (!VAR_17->ccb)
  goto free_mb;

 FUNC_20(VAR_16);

 if (FUNC_13(VAR_16->irq, VAR_7, 0, "aha1542", VAR_16)) {
  FUNC_21(VAR_5, VAR_16, "Unable to allocate IRQ.\n");
  goto free_ccb;
 }
 if (VAR_16->dma_channel != 0xFF) {
  if (FUNC_12(VAR_16->dma_channel, "aha1542")) {
   FUNC_21(VAR_5, VAR_16, "Unable to allocate DMA channel.\n");
   goto free_irq;
  }
  if (VAR_16->dma_channel == 0 || VAR_16->dma_channel >= 5) {
   FUNC_19(VAR_16->dma_channel, VAR_3);
   FUNC_8(VAR_16->dma_channel);
  }
 }

 if (FUNC_15(VAR_16, VAR_13))
  goto free_dma;

 FUNC_18(VAR_16);

 return VAR_16;

free_dma:
 if (VAR_16->dma_channel != 0xff)
  FUNC_9(VAR_16->dma_channel);
free_irq:
 FUNC_10(VAR_16->irq, VAR_16);
free_ccb:
 FUNC_6(VAR_13, VAR_0 * sizeof(struct ccb),
     VAR_17->ccb, VAR_17->ccb_handle);
free_mb:
 FUNC_6(VAR_13, VAR_0 * 2 * sizeof(struct mailbox),
     VAR_17->mb, VAR_17->mb_handle);
unregister:
 FUNC_17(VAR_16);
release:
 FUNC_11(VAR_15, VAR_1);

 return ((void*)0);
}
