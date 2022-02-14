
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mmci_host {int mask1_reg; int lock; TYPE_1__* variant; int data; int cmd; int mmc; scalar_t__ base; scalar_t__ singleirq; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int irq_pio_mask; int busy_detect_mask; int busy_detect_flag; scalar_t__ reversed_irq_handling; scalar_t__ busy_detect; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mmci_host*,int ,int) ;
 int FUNC_4 (struct mmci_host*,int ,int) ;
 int FUNC_5 (int,void*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_3, void *VAR_4)
{
 struct mmci_host *VAR_5 = VAR_4;
 u32 VAR_6;
 int VAR_7 = 0;

 FUNC_7(&VAR_5->lock);

 do {
  VAR_6 = FUNC_6(VAR_5->base + VAR_2);

  if (VAR_5->singleirq) {
   if (VAR_6 & VAR_5->mask1_reg)
    FUNC_5(VAR_3, VAR_4);

   VAR_6 &= ~VAR_5->variant->irq_pio_mask;
  }





  VAR_6 &= FUNC_6(VAR_5->base + VAR_1);
  if (VAR_5->variant->busy_detect)
   FUNC_9(VAR_6 & ~VAR_5->variant->busy_detect_mask,
          VAR_5->base + VAR_0);
  else
   FUNC_9(VAR_6, VAR_5->base + VAR_0);

  FUNC_1(FUNC_2(VAR_5->mmc), "irq0 (data+cmd) %08x\n", VAR_6);

  if (VAR_5->variant->reversed_irq_handling) {
   FUNC_4(VAR_5, VAR_5->data, VAR_6);
   FUNC_3(VAR_5, VAR_5->cmd, VAR_6);
  } else {
   FUNC_3(VAR_5, VAR_5->cmd, VAR_6);
   FUNC_4(VAR_5, VAR_5->data, VAR_6);
  }





  if (VAR_5->variant->busy_detect_flag)
   VAR_6 &= ~VAR_5->variant->busy_detect_flag;

  VAR_7 = 1;
 } while (VAR_6);

 FUNC_8(&VAR_5->lock);

 return FUNC_0(VAR_7);
}
