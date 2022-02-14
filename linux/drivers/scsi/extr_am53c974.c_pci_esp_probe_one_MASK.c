
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_host_template {int dummy; } ;
struct pci_esp_priv {struct esp* esp; } ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; int irq; } ;
struct esp {int scsi_id; int scsi_id_mask; int cfreq; scalar_t__ regs; int command_block_dma; int command_block; scalar_t__ dma_regs; int config2; int flags; int * ops; int * dev; struct Scsi_Host* host; } ;
struct Scsi_Host {int this_id; int max_id; int io_port; int unique_id; int n_io_port; int irq; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (struct esp*) ;
 int FUNC_2 (int ,int *,char*) ;
 int FUNC_3 (int *,int,int *,int ) ;
 int FUNC_4 (int *,int,int ,int ) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 int FUNC_6 (int ,struct esp*) ;
 int FUNC_7 (struct pci_esp_priv*) ;
 struct pci_esp_priv* FUNC_8 (int,int ) ;
 int FUNC_9 (struct pci_dev*) ;
 scalar_t__ FUNC_10 (struct pci_dev*) ;
 int VAR_11 ;
 scalar_t__ FUNC_11 (struct pci_dev*,int ,int ) ;
 int FUNC_12 (struct pci_dev*,scalar_t__) ;
 int FUNC_13 (struct pci_dev*) ;
 scalar_t__ FUNC_14 (struct pci_dev*,int ) ;
 int FUNC_15 (struct pci_dev*,int ) ;
 int FUNC_16 (struct pci_dev*,int ) ;
 int FUNC_17 (struct pci_dev*,struct pci_esp_priv*) ;
 int FUNC_18 (struct pci_dev*) ;
 int FUNC_19 (int ,int ,int ,int ,struct esp*) ;
 int VAR_12 ;
 int FUNC_20 (struct esp*) ;
 struct scsi_host_template VAR_13 ;
 struct Scsi_Host* FUNC_21 (struct scsi_host_template*,int) ;
 int FUNC_22 (struct Scsi_Host*) ;
 struct esp* FUNC_23 (struct Scsi_Host*) ;

__attribute__((used)) static int FUNC_24(struct pci_dev *VAR_14,
         const struct pci_device_id *VAR_15)
{
 struct scsi_host_template *VAR_16 = &VAR_13;
 int VAR_17 = -VAR_2;
 struct Scsi_Host *VAR_18;
 struct esp *VAR_19;
 struct pci_esp_priv *VAR_20;

 if (FUNC_10(VAR_14)) {
  FUNC_2(VAR_9, &VAR_14->dev, "cannot enable device\n");
  return -VAR_2;
 }

 if (FUNC_5(&VAR_14->dev, FUNC_0(32))) {
  FUNC_2(VAR_9, &VAR_14->dev,
      "failed to set 32bit DMA mask\n");
  goto fail_disable_device;
 }

 VAR_18 = FUNC_21(VAR_16, sizeof(struct esp));
 if (!VAR_18) {
  FUNC_2(VAR_9, &VAR_14->dev,
      "failed to allocate scsi host\n");
  VAR_17 = -VAR_3;
  goto fail_disable_device;
 }

 VAR_20 = FUNC_8(sizeof(struct pci_esp_priv), VAR_6);
 if (!VAR_20) {
  FUNC_2(VAR_9, &VAR_14->dev,
      "failed to allocate esp_priv\n");
  VAR_17 = -VAR_3;
  goto fail_host_alloc;
 }

 VAR_19 = FUNC_23(VAR_18);
 VAR_19->host = VAR_18;
 VAR_19->dev = &VAR_14->dev;
 VAR_19->ops = &VAR_11;





 VAR_19->flags |= VAR_5;



 if (VAR_10)
  VAR_19->config2 |= VAR_4;

 VAR_20->esp = VAR_19;

 if (FUNC_14(VAR_14, VAR_0)) {
  FUNC_2(VAR_8, &VAR_14->dev,
      "pci memory selection failed\n");
  goto fail_priv_alloc;
 }

 VAR_19->regs = FUNC_11(VAR_14, 0, FUNC_15(VAR_14, 0));
 if (!VAR_19->regs) {
  FUNC_2(VAR_8, &VAR_14->dev, "pci I/O map failed\n");
  VAR_17 = -VAR_1;
  goto fail_release_regions;
 }
 VAR_19->dma_regs = VAR_19->regs;

 FUNC_18(VAR_14);

 VAR_19->command_block = FUNC_3(&VAR_14->dev, 16,
   &VAR_19->command_block_dma, VAR_6);
 if (!VAR_19->command_block) {
  FUNC_2(VAR_8, &VAR_14->dev,
      "failed to allocate command block\n");
  VAR_17 = -VAR_3;
  goto fail_unmap_regs;
 }

 FUNC_17(VAR_14, VAR_20);

 VAR_17 = FUNC_19(VAR_14->irq, VAR_12, VAR_7,
     VAR_0, VAR_19);
 if (VAR_17 < 0) {
  FUNC_2(VAR_8, &VAR_14->dev, "failed to register IRQ\n");
  goto fail_unmap_command_block;
 }

 VAR_19->scsi_id = 7;
 FUNC_1(VAR_19);

 VAR_18->this_id = VAR_19->scsi_id;
 VAR_18->max_id = 8;
 VAR_18->irq = VAR_14->irq;
 VAR_18->io_port = FUNC_16(VAR_14, 0);
 VAR_18->n_io_port = FUNC_15(VAR_14, 0);
 VAR_18->unique_id = VAR_18->io_port;
 VAR_19->scsi_id_mask = (1 << VAR_19->scsi_id);

 VAR_19->cfreq = 40000000;

 VAR_17 = FUNC_20(VAR_19);
 if (VAR_17)
  goto fail_free_irq;

 return 0;

fail_free_irq:
 FUNC_6(VAR_14->irq, VAR_19);
fail_unmap_command_block:
 FUNC_17(VAR_14, ((void*)0));
 FUNC_4(&VAR_14->dev, 16, VAR_19->command_block,
     VAR_19->command_block_dma);
fail_unmap_regs:
 FUNC_12(VAR_14, VAR_19->regs);
fail_release_regions:
 FUNC_13(VAR_14);
fail_priv_alloc:
 FUNC_7(VAR_20);
fail_host_alloc:
 FUNC_22(VAR_18);
fail_disable_device:
 FUNC_9(VAR_14);

 return VAR_17;
}
