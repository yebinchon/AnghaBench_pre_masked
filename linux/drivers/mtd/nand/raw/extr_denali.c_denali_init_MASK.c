
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int * ops; } ;
struct denali_controller {int revision; int nbanks; int dma_avail; int caps; int oob_skip_bytes; int dev; int irq; scalar_t__ reg; int host_write; int host_read; int setup_dma; int active_bank; int chips; int irq_lock; int complete; TYPE_1__ controller; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_4 (struct denali_controller*) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_5 (struct denali_controller*) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ,int ,int ,int ,int ,struct denali_controller*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int *) ;
 void* FUNC_11 (scalar_t__) ;
 int FUNC_12 (int,scalar_t__) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (void*) ;

int FUNC_16(struct denali_controller *VAR_26)
{
 u32 VAR_27 = FUNC_11(VAR_26->reg + VAR_8);
 int VAR_28;

 FUNC_13(&VAR_26->controller);
 VAR_26->controller.ops = &VAR_18;
 FUNC_10(&VAR_26->complete);
 FUNC_14(&VAR_26->irq_lock);
 FUNC_3(&VAR_26->chips);
 VAR_26->active_bank = VAR_4;





 if (!VAR_26->revision)
  VAR_26->revision = FUNC_15(FUNC_11(VAR_26->reg + VAR_14));

 VAR_26->nbanks = 1 << FUNC_1(VAR_11, VAR_27);


 if (VAR_26->revision < 0x0501)
  VAR_26->nbanks <<= 1;

 if (VAR_27 & VAR_9)
  VAR_26->dma_avail = 1;

 if (VAR_26->dma_avail) {
  int VAR_29 = VAR_26->caps & VAR_2 ? 64 : 32;

  VAR_28 = FUNC_9(VAR_26->dev, FUNC_0(VAR_29));
  if (VAR_28) {
   FUNC_7(VAR_26->dev,
     "Failed to set DMA mask. Disabling DMA.\n");
   VAR_26->dma_avail = 0;
  }
 }

 if (VAR_26->dma_avail) {
  if (VAR_26->caps & VAR_2)
   VAR_26->setup_dma = VAR_25;
  else
   VAR_26->setup_dma = VAR_24;
 }

 if (VAR_27 & VAR_10) {
  VAR_26->host_read = VAR_21;
  VAR_26->host_write = VAR_22;
 } else {
  VAR_26->host_read = VAR_19;
  VAR_26->host_write = VAR_20;
 }






 VAR_26->oob_skip_bytes = FUNC_11(VAR_26->reg + VAR_16);
 if (!VAR_26->oob_skip_bytes) {
  VAR_26->oob_skip_bytes = VAR_3;
  FUNC_12(VAR_26->oob_skip_bytes,
     VAR_26->reg + VAR_16);
 }

 FUNC_12(0, VAR_26->reg + VAR_17);
 FUNC_12(FUNC_2(VAR_26->nbanks - 1, 0), VAR_26->reg + VAR_13);
 FUNC_12(VAR_1, VAR_26->reg + VAR_0);
 FUNC_12(VAR_7, VAR_26->reg + VAR_6);
 FUNC_12(0xffff, VAR_26->reg + VAR_15);

 FUNC_4(VAR_26);

 VAR_28 = FUNC_8(VAR_26->dev, VAR_26->irq, VAR_23,
          VAR_12, VAR_5, VAR_26);
 if (VAR_28) {
  FUNC_6(VAR_26->dev, "Unable to request IRQ\n");
  return VAR_28;
 }

 FUNC_5(VAR_26);

 return 0;
}
