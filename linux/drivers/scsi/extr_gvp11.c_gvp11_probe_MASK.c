
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int * SCMD; int * SASR; } ;
typedef TYPE_3__ wd33c93_regs ;
struct zorro_device_id {unsigned int driver_data; } ;
struct TYPE_5__ {unsigned long start; } ;
struct zorro_dev {int slotaddr; TYPE_1__ resource; } ;
struct gvp11_scsiregs {int secret2; int secret3; int CNTR; int SCMD; int SASR; scalar_t__ BANK; scalar_t__ secret1; } ;
struct TYPE_6__ {unsigned int dma_xfer_mask; int no_sync; int dma_mode; scalar_t__ fast; } ;
struct gvp11_hostdata {struct gvp11_scsiregs* regs; TYPE_2__ wh; } ;
struct Scsi_Host {int unique_id; int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct gvp11_scsiregs* FUNC_0 (unsigned long) ;
 int FUNC_1 (struct gvp11_scsiregs*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int ,struct Scsi_Host*) ;
 int VAR_13 ;
 int VAR_14 ;
 unsigned int VAR_15 ;
 int FUNC_3 (unsigned long,int) ;
 int FUNC_4 (int ,int ,int ,char*,struct Scsi_Host*) ;
 int FUNC_5 (unsigned long,int,char*) ;
 int FUNC_6 (struct Scsi_Host*,int *) ;
 struct Scsi_Host* FUNC_7 (int *,int) ;
 int FUNC_8 (struct Scsi_Host*) ;
 int FUNC_9 (struct Scsi_Host*) ;
 struct gvp11_hostdata* FUNC_10 (struct Scsi_Host*) ;
 int FUNC_11 (struct Scsi_Host*,TYPE_3__,int ,int ,int ) ;
 int FUNC_12 (struct zorro_dev*) ;
 int FUNC_13 (struct zorro_dev*,struct Scsi_Host*) ;

__attribute__((used)) static int FUNC_14(struct zorro_dev *VAR_16, const struct zorro_device_id *VAR_17)
{
 struct Scsi_Host *VAR_18;
 unsigned long VAR_19;
 int VAR_20;
 unsigned int VAR_21;
 unsigned int VAR_22;
 struct gvp11_hostdata *VAR_23;
 struct gvp11_scsiregs *VAR_24;
 wd33c93_regs VAR_25;

 VAR_22 = VAR_17->driver_data;






 if (FUNC_12(VAR_16) != 0x10000)
  return -VAR_2;

 VAR_19 = VAR_16->resource.start;
 if (!FUNC_5(VAR_19, 256, "wd33c93"))
  return -VAR_1;

 VAR_24 = FUNC_0(VAR_19);

 VAR_20 = FUNC_1(VAR_24);
 if (VAR_20)
  goto fail_check_or_alloc;

 VAR_18 = FUNC_7(&VAR_14,
       sizeof(struct gvp11_hostdata));
 if (!VAR_18) {
  VAR_20 = -VAR_3;
  goto fail_check_or_alloc;
 }

 VAR_18->irq = VAR_8;
 VAR_18->unique_id = VAR_16->slotaddr;

 VAR_24->secret2 = 1;
 VAR_24->secret1 = 0;
 VAR_24->secret3 = 15;
 while (VAR_24->CNTR & VAR_4)
  ;
 VAR_24->CNTR = 0;
 VAR_24->BANK = 0;

 VAR_25.SASR = &VAR_24->SASR;
 VAR_25.SCMD = &VAR_24->SCMD;

 VAR_23 = FUNC_10(VAR_18);
 if (VAR_15)
  VAR_23->wh.dma_xfer_mask = VAR_15;
 else
  VAR_23->wh.dma_xfer_mask = VAR_22;

 VAR_23->wh.no_sync = 0xff;
 VAR_23->wh.fast = 0;
 VAR_23->wh.dma_mode = VAR_0;
 VAR_23->regs = VAR_24;




 VAR_21 = *(unsigned short *)(FUNC_0(VAR_19) + 0x8000);
 FUNC_11(VAR_18, VAR_25, VAR_11, VAR_12,
       (VAR_21 & VAR_6) ? VAR_10
          : VAR_9);

 VAR_20 = FUNC_4(VAR_8, VAR_13, VAR_7,
       "GVP11 SCSI", VAR_18);
 if (VAR_20)
  goto fail_irq;

 VAR_24->CNTR = VAR_5;

 VAR_20 = FUNC_6(VAR_18, ((void*)0));
 if (VAR_20)
  goto fail_host;

 FUNC_13(VAR_16, VAR_18);
 FUNC_9(VAR_18);
 return 0;

fail_host:
 FUNC_2(VAR_8, VAR_18);
fail_irq:
 FUNC_8(VAR_18);
fail_check_or_alloc:
 FUNC_3(VAR_19, 256);
 return VAR_20;
}
