
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct zorro_esp_priv {int zorro3; int ctrl_data; void* board_base; struct esp* esp; } ;
struct zorro_driver_data {unsigned long offset; unsigned long dma_offset; scalar_t__ scsi_option; int esp_ops; int name; scalar_t__ absolute; } ;
struct zorro_device_id {size_t driver_data; } ;
struct TYPE_6__ {int coherent_dma_mask; } ;
struct TYPE_5__ {int er_Type; } ;
struct zorro_dev {TYPE_2__ dev; TYPE_1__ rom; } ;
struct scsi_host_template {int dummy; } ;
struct fastlane_dma_registers {int dummy; } ;
struct esp {int scsi_id; int scsi_id_mask; int cfreq; void* regs; void* dma_regs; int command_block_dma; int command_block; TYPE_2__* dev; void* fifo_reg; int ops; struct Scsi_Host* host; } ;
struct Scsi_Host {unsigned long base; int this_id; int irq; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 void* FUNC_1 (unsigned long) ;
 int FUNC_2 (TYPE_2__*,struct zorro_esp_priv*) ;
 int FUNC_3 (TYPE_2__*,int,int *,int ) ;
 int FUNC_4 (TYPE_2__*,int,int ,int ) ;
 int FUNC_5 (int ,struct esp*) ;
 void* FUNC_6 (unsigned long,int) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (struct zorro_esp_priv*) ;
 struct zorro_esp_priv* FUNC_9 (int,int ) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (char*,int ,unsigned long) ;
 int FUNC_12 (int ,int ,int ,char*,struct esp*) ;
 int VAR_17 ;
 int FUNC_13 (struct esp*) ;
 struct scsi_host_template VAR_18 ;
 struct Scsi_Host* FUNC_14 (struct scsi_host_template*,int) ;
 int FUNC_15 (struct Scsi_Host*) ;
 struct esp* FUNC_16 (struct Scsi_Host*) ;
 struct zorro_driver_data* VAR_19 ;
 int FUNC_17 (struct esp*,int ) ;
 int FUNC_18 (struct esp*,int,int ) ;
 int FUNC_19 (struct zorro_dev*) ;
 int FUNC_20 (struct zorro_dev*,int ) ;
 unsigned long FUNC_21 (struct zorro_dev*) ;

__attribute__((used)) static int FUNC_22(struct zorro_dev *VAR_20,
           const struct zorro_device_id *VAR_21)
{
 struct scsi_host_template *VAR_22 = &VAR_18;
 struct Scsi_Host *VAR_23;
 struct esp *VAR_24;
 const struct zorro_driver_data *VAR_25;
 struct zorro_esp_priv *VAR_26;
 unsigned long VAR_27, VAR_28, VAR_29;
 int VAR_30;

 VAR_27 = FUNC_21(VAR_20);
 VAR_25 = &VAR_19[VAR_21->driver_data];

 FUNC_11("%s found at address 0x%lx.\n", VAR_25->name, VAR_27);

 VAR_26 = FUNC_9(sizeof(*VAR_26), VAR_12);
 if (!VAR_26) {
  FUNC_10("Can't allocate device private data!\n");
  return -VAR_2;
 }


 if ((VAR_20->rom.er_Type & VAR_3) == VAR_4) {
  if (VAR_27 > 0xffffff)
   VAR_26->zorro3 = 1;
 } else {





  VAR_20->dev.coherent_dma_mask = FUNC_0(32);
 }
 if (VAR_26->zorro3 && VAR_21->driver_data == VAR_15) {
  FUNC_11("%s at address 0x%lx is Fastlane Z3, fixing data!\n",
   VAR_25->name, VAR_27);
  VAR_25 = &VAR_19[VAR_16];
 }

 if (VAR_25->absolute) {
  VAR_28 = VAR_25->offset;
  VAR_29 = VAR_25->dma_offset;
 } else {
  VAR_28 = VAR_27 + VAR_25->offset;
  VAR_29 = VAR_27 + VAR_25->dma_offset;
 }

 if (!FUNC_20(VAR_20, VAR_25->name)) {
  FUNC_10("cannot reserve region 0x%lx, abort\n",
         VAR_27);
  VAR_30 = -VAR_0;
  goto fail_free_zep;
 }

 VAR_23 = FUNC_14(VAR_22, sizeof(struct esp));

 if (!VAR_23) {
  FUNC_10("No host detected; board configuration problem?\n");
  VAR_30 = -VAR_2;
  goto fail_release_device;
 }

 VAR_23->base = VAR_28;
 VAR_23->this_id = 7;

 VAR_24 = FUNC_16(VAR_23);
 VAR_24->host = VAR_23;
 VAR_24->dev = &VAR_20->dev;

 VAR_24->scsi_id = VAR_23->this_id;
 VAR_24->scsi_id_mask = (1 << VAR_24->scsi_id);

 VAR_24->cfreq = 40000000;

 VAR_26->esp = VAR_24;

 FUNC_2(VAR_24->dev, VAR_26);


 if (VAR_26->zorro3 && VAR_21->driver_data == VAR_15) {

  VAR_26->board_base = FUNC_6(VAR_27,
      VAR_11-1);
  if (!VAR_26->board_base) {
   FUNC_10("Cannot allocate board address space\n");
   VAR_30 = -VAR_2;
   goto fail_free_host;
  }

  VAR_26->ctrl_data = (VAR_10 |
      VAR_8 | VAR_9);
 }

 VAR_24->ops = VAR_25->esp_ops;

 if (VAR_28 > 0xffffff)
  VAR_24->regs = FUNC_6(VAR_28, 0x20);
 else

  VAR_24->regs = FUNC_1(VAR_28);

 if (!VAR_24->regs) {
  VAR_30 = -VAR_2;
  goto fail_unmap_fastlane;
 }

 VAR_24->fifo_reg = VAR_24->regs + VAR_7 * 4;


 if (VAR_25->scsi_option) {
  FUNC_18(VAR_24, (VAR_6 | 7), VAR_5);
  if (FUNC_17(VAR_24, VAR_5) != (VAR_6|7)) {
   VAR_30 = -VAR_1;
   goto fail_unmap_regs;
  }
 }

 if (VAR_26->zorro3) {




  VAR_24->dma_regs = FUNC_6(VAR_29,
    sizeof(struct fastlane_dma_registers));
 } else

  VAR_24->dma_regs = FUNC_1(VAR_29);

 if (!VAR_24->dma_regs) {
  VAR_30 = -VAR_2;
  goto fail_unmap_regs;
 }

 VAR_24->command_block = FUNC_3(VAR_24->dev, 16,
      &VAR_24->command_block_dma,
      VAR_12);

 if (!VAR_24->command_block) {
  VAR_30 = -VAR_2;
  goto fail_unmap_dma_regs;
 }

 VAR_23->irq = VAR_14;
 VAR_30 = FUNC_12(VAR_23->irq, VAR_17, VAR_13,
     "Amiga Zorro ESP", VAR_24);
 if (VAR_30 < 0) {
  VAR_30 = -VAR_1;
  goto fail_free_command_block;
 }


 VAR_30 = FUNC_13(VAR_24);

 if (VAR_30) {
  VAR_30 = -VAR_2;
  goto fail_free_irq;
 }

 return 0;

fail_free_irq:
 FUNC_5(VAR_23->irq, VAR_24);

fail_free_command_block:
 FUNC_4(VAR_24->dev, 16,
     VAR_24->command_block,
     VAR_24->command_block_dma);

fail_unmap_dma_regs:
 if (VAR_26->zorro3)
  FUNC_7(VAR_24->dma_regs);

fail_unmap_regs:
 if (VAR_28 > 0xffffff)
  FUNC_7(VAR_24->regs);

fail_unmap_fastlane:
 if (VAR_26->zorro3)
  FUNC_7(VAR_26->board_base);

fail_free_host:
 FUNC_15(VAR_23);

fail_release_device:
 FUNC_19(VAR_20);

fail_free_zep:
 FUNC_8(VAR_26);

 return VAR_30;
}
