
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_host_template {int dummy; } ;
struct resource {int start; } ;
struct platform_device {int dev; } ;
struct esp {int scsi_id; int scsi_id_mask; int cfreq; void* regs; void* dma_regs; int command_block_dma; int command_block; int * dev; struct Scsi_Host* host; int * ops; } ;
struct Scsi_Host {int max_id; int this_id; int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,struct esp*) ;
 int FUNC_1 (int *,int,int *,int ) ;
 int FUNC_2 (int *,int,int ,int ) ;
 int FUNC_3 (int ,struct esp*) ;
 void* FUNC_4 (int ,int) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (struct platform_device*,int ) ;
 struct resource* FUNC_7 (struct platform_device*,int ,int) ;
 int FUNC_8 (int ,int ,int ,char*,struct esp*) ;
 int VAR_4 ;
 int FUNC_9 (struct esp*) ;
 struct scsi_host_template VAR_5 ;
 struct Scsi_Host* FUNC_10 (struct scsi_host_template*,int) ;
 int FUNC_11 (struct Scsi_Host*) ;
 struct esp* FUNC_12 (struct Scsi_Host*) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_7)
{
 struct scsi_host_template *VAR_8 = &VAR_5;
 struct Scsi_Host *VAR_9;
 struct esp *VAR_10;
 struct resource *VAR_11;
 int VAR_12 = -VAR_0;

 VAR_9 = FUNC_10(VAR_8, sizeof(struct esp));
 if (!VAR_9)
  goto fail;

 VAR_9->max_id = 8;
 VAR_10 = FUNC_12(VAR_9);

 VAR_10->host = VAR_9;
 VAR_10->dev = &VAR_7->dev;
 VAR_10->ops = &VAR_6;

 VAR_11 = FUNC_7(VAR_7, VAR_2, 0);
 if (!VAR_11 || !VAR_11->start)
  goto fail_unlink;

 VAR_10->regs = FUNC_4(VAR_11->start, 0x20);
 if (!VAR_10->regs)
  goto fail_unmap_regs;

 VAR_11 = FUNC_7(VAR_7, VAR_2, 1);
 if (!VAR_11 || !VAR_11->start)
  goto fail_unmap_regs;

 VAR_10->dma_regs = FUNC_4(VAR_11->start, 0x10);

 VAR_10->command_block = FUNC_1(VAR_10->dev, 16,
      &VAR_10->command_block_dma,
      VAR_1);
 if (!VAR_10->command_block)
  goto fail_unmap_regs_dma;

 VAR_9->irq = FUNC_6(VAR_7, 0);
 VAR_12 = FUNC_8(VAR_9->irq, VAR_4, VAR_3,
     "SUN3X ESP", VAR_10);
 if (VAR_12 < 0)
  goto fail_unmap_command_block;

 VAR_10->scsi_id = 7;
 VAR_10->host->this_id = VAR_10->scsi_id;
 VAR_10->scsi_id_mask = (1 << VAR_10->scsi_id);
 VAR_10->cfreq = 20000000;

 FUNC_0(&VAR_7->dev, VAR_10);

 VAR_12 = FUNC_9(VAR_10);
 if (VAR_12)
  goto fail_free_irq;

 return 0;

fail_free_irq:
 FUNC_3(VAR_9->irq, VAR_10);
fail_unmap_command_block:
 FUNC_2(VAR_10->dev, 16,
     VAR_10->command_block,
     VAR_10->command_block_dma);
fail_unmap_regs_dma:
 FUNC_5(VAR_10->dma_regs);
fail_unmap_regs:
 FUNC_5(VAR_10->regs);
fail_unlink:
 FUNC_11(VAR_9);
fail:
 return VAR_12;
}
