
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int * SCMD; int * SASR; } ;
typedef TYPE_3__ wd33c93_regs ;
struct zorro_device_id {int dummy; } ;
struct TYPE_6__ {int start; } ;
struct zorro_dev {TYPE_2__ resource; int slotaddr; } ;
struct a2091_scsiregs {int CNTR; int SCMD; int SASR; int DAWR; } ;
struct TYPE_5__ {int no_sync; int dma_mode; scalar_t__ fast; } ;
struct a2091_hostdata {struct a2091_scsiregs* regs; TYPE_1__ wh; } ;
struct Scsi_Host {int unique_id; int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct a2091_scsiregs* FUNC_0 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int ,struct Scsi_Host*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ,int ,char*,struct Scsi_Host*) ;
 int FUNC_4 (int ,int,char*) ;
 int FUNC_5 (struct Scsi_Host*,int *) ;
 struct Scsi_Host* FUNC_6 (int *,int) ;
 int FUNC_7 (struct Scsi_Host*) ;
 int FUNC_8 (struct Scsi_Host*) ;
 struct a2091_hostdata* FUNC_9 (struct Scsi_Host*) ;
 int FUNC_10 (struct Scsi_Host*,TYPE_3__,int ,int ,int ) ;
 int FUNC_11 (struct zorro_dev*,struct Scsi_Host*) ;

__attribute__((used)) static int FUNC_12(struct zorro_dev *VAR_13, const struct zorro_device_id *VAR_14)
{
 struct Scsi_Host *VAR_15;
 int VAR_16;
 struct a2091_scsiregs *VAR_17;
 wd33c93_regs VAR_18;
 struct a2091_hostdata *VAR_19;

 if (!FUNC_4(VAR_13->resource.start, 256, "wd33c93"))
  return -VAR_4;

 VAR_15 = FUNC_6(&VAR_10,
       sizeof(struct a2091_hostdata));
 if (!VAR_15) {
  VAR_16 = -VAR_5;
  goto fail_alloc;
 }

 VAR_15->irq = VAR_7;
 VAR_15->unique_id = VAR_13->slotaddr;

 VAR_17 = FUNC_0(VAR_13->resource.start);
 VAR_17->DAWR = VAR_3;

 VAR_18.SASR = &VAR_17->SASR;
 VAR_18.SCMD = &VAR_17->SCMD;

 VAR_19 = FUNC_9(VAR_15);
 VAR_19->wh.no_sync = 0xff;
 VAR_19->wh.fast = 0;
 VAR_19->wh.dma_mode = VAR_2;
 VAR_19->regs = VAR_17;

 FUNC_10(VAR_15, VAR_18, VAR_11, VAR_12, VAR_8);
 VAR_16 = FUNC_3(VAR_7, VAR_9, VAR_6,
       "A2091 SCSI", VAR_15);
 if (VAR_16)
  goto fail_irq;

 VAR_17->CNTR = VAR_1 | VAR_0;

 VAR_16 = FUNC_5(VAR_15, ((void*)0));
 if (VAR_16)
  goto fail_host;

 FUNC_11(VAR_13, VAR_15);

 FUNC_8(VAR_15);
 return 0;

fail_host:
 FUNC_1(VAR_7, VAR_15);
fail_irq:
 FUNC_7(VAR_15);
fail_alloc:
 FUNC_2(VAR_13->resource.start, 256);
 return VAR_16;
}
