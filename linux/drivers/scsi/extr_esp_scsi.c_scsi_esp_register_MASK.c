
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct esp {size_t rev; int cfreq; TYPE_1__* host; int dev; int scsi_id; int cfact; int dma_regs; int regs; scalar_t__ num_tags; } ;
struct TYPE_3__ {int cmd_per_lun; int unique_id; int irq; int max_lun; int transportt; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*,int,int ,int,int ,...) ;
 int FUNC_1 (struct esp*) ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_2 (struct esp*) ;
 int FUNC_3 (struct esp*) ;
 int FUNC_4 (struct esp*) ;
 int VAR_5 ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ) ;

int FUNC_8(struct esp *VAR_6)
{
 static int VAR_7;
 int VAR_8;

 if (!VAR_6->num_tags)
  VAR_6->num_tags = VAR_0;
 VAR_6->host->transportt = VAR_5;
 VAR_6->host->max_lun = VAR_1;
 VAR_6->host->cmd_per_lun = 2;
 VAR_6->host->unique_id = VAR_7;

 FUNC_4(VAR_6);

 FUNC_2(VAR_6);

 FUNC_3(VAR_6);

 FUNC_1(VAR_6);

 FUNC_0(VAR_2, VAR_6->dev, "esp%u: regs[%1p:%1p] irq[%u]\n",
     VAR_6->host->unique_id, VAR_6->regs, VAR_6->dma_regs,
     VAR_6->host->irq);
 FUNC_0(VAR_2, VAR_6->dev,
     "esp%u: is a %s, %u MHz (ccf=%u), SCSI ID %u\n",
     VAR_6->host->unique_id, VAR_4[VAR_6->rev],
     VAR_6->cfreq / 1000000, VAR_6->cfact, VAR_6->scsi_id);


 FUNC_7(VAR_3);

 VAR_8 = FUNC_5(VAR_6->host, VAR_6->dev);
 if (VAR_8)
  return VAR_8;

 VAR_7++;

 FUNC_6(VAR_6->host);

 return 0;
}
