
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct scsi_host_template {int dummy; } ;
struct platform_device {int * resource; int dev; } ;
struct esp {scalar_t__ dmarev; int regs; int command_block_dma; int command_block; int flags; int * ops; int * dev; struct Scsi_Host* host; } ;
struct Scsi_Host {int max_id; int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,struct esp*) ;
 int FUNC_1 (int *,int,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (struct esp*,struct platform_device*) ;
 int FUNC_5 (struct esp*) ;
 int FUNC_6 (struct esp*,int) ;
 int FUNC_7 (struct esp*) ;
 int FUNC_8 (struct esp*,struct platform_device*) ;
 int FUNC_9 (int ,struct esp*) ;
 int FUNC_10 (int *,int ,int ) ;
 int VAR_6 ;
 int FUNC_11 (struct esp*) ;
 struct scsi_host_template VAR_7 ;
 struct Scsi_Host* FUNC_12 (struct scsi_host_template*,int) ;
 int FUNC_13 (struct Scsi_Host*) ;
 struct esp* FUNC_14 (struct Scsi_Host*) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_8,
         struct platform_device *VAR_9, int VAR_10)
{
 struct scsi_host_template *VAR_11 = &VAR_7;
 struct Scsi_Host *VAR_12;
 struct esp *VAR_13;
 int VAR_14;

 VAR_12 = FUNC_12(VAR_11, sizeof(struct esp));

 VAR_14 = -VAR_2;
 if (!VAR_12)
  goto fail;

 VAR_12->max_id = (VAR_10 ? 16 : 8);
 VAR_13 = FUNC_14(VAR_12);

 VAR_13->host = VAR_12;
 VAR_13->dev = &VAR_8->dev;
 VAR_13->ops = &VAR_6;

 if (VAR_10)
  VAR_13->flags |= VAR_3;

 VAR_14 = FUNC_8(VAR_13, VAR_9);
 if (VAR_14 < 0)
  goto fail_unlink;

 VAR_14 = FUNC_6(VAR_13, VAR_10);
 if (VAR_14 < 0)
  goto fail_unlink;

 VAR_14 = FUNC_5(VAR_13);
 if (VAR_14 < 0)
  goto fail_unmap_regs;

 VAR_14 = FUNC_7(VAR_13);
 if (VAR_14 < 0)
  goto fail_unmap_command_block;

 FUNC_4(VAR_13, VAR_9);





 if (VAR_13->dmarev == VAR_5) {
  u32 VAR_15 = FUNC_2(VAR_0);

  FUNC_3(VAR_15 & ~VAR_1, VAR_0);
 }

 FUNC_0(&VAR_8->dev, VAR_13);

 VAR_14 = FUNC_11(VAR_13);
 if (VAR_14)
  goto fail_free_irq;

 return 0;

fail_free_irq:
 FUNC_9(VAR_12->irq, VAR_13);
fail_unmap_command_block:
 FUNC_1(&VAR_8->dev, 16,
     VAR_13->command_block,
     VAR_13->command_block_dma);
fail_unmap_regs:
 FUNC_10(&VAR_8->resource[(VAR_10 ? 1 : 0)], VAR_13->regs, VAR_4);
fail_unlink:
 FUNC_13(VAR_12);
fail:
 return VAR_14;
}
