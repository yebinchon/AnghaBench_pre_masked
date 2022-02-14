
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdhci_host {int * align_buffer; int * adma_table; int align_addr; scalar_t__ adma_table_sz; scalar_t__ align_buffer_sz; int complete_wq; int data_timer; int timer; int irq; int lock; int flags; struct mmc_host* mmc; } ;
struct TYPE_2__ {int vqmmc; } ;
struct mmc_host {TYPE_1__ supply; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__,int *,int ) ;
 int FUNC_4 (int ,struct sdhci_host*) ;
 int FUNC_5 (struct mmc_host*) ;
 int FUNC_6 (struct mmc_host*) ;
 int FUNC_7 (struct mmc_host*) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct sdhci_host*) ;
 int FUNC_11 (struct sdhci_host*,int ) ;
 int FUNC_12 (struct sdhci_host*,int ) ;
 scalar_t__ FUNC_13 (struct sdhci_host*) ;
 int FUNC_14 (struct sdhci_host*) ;
 int FUNC_15 (struct sdhci_host*,int ,int ) ;
 int FUNC_16 (int *,unsigned long) ;
 int FUNC_17 (int *,unsigned long) ;

void FUNC_18(struct sdhci_host *VAR_5, int VAR_6)
{
 struct mmc_host *VAR_7 = VAR_5->mmc;
 unsigned long VAR_8;

 if (VAR_6) {
  FUNC_16(&VAR_5->lock, VAR_8);

  VAR_5->flags |= VAR_1;

  if (FUNC_13(VAR_5)) {
   FUNC_8("%s: Controller removed during "
    " transfer!\n", FUNC_6(VAR_7));
   FUNC_12(VAR_5, -VAR_0);
  }

  FUNC_17(&VAR_5->lock, VAR_8);
 }

 FUNC_10(VAR_5);

 FUNC_7(VAR_7);

 FUNC_14(VAR_5);

 if (!VAR_6)
  FUNC_11(VAR_5, VAR_3);

 FUNC_15(VAR_5, 0, VAR_2);
 FUNC_15(VAR_5, 0, VAR_4);
 FUNC_4(VAR_5->irq, VAR_5);

 FUNC_1(&VAR_5->timer);
 FUNC_1(&VAR_5->data_timer);

 FUNC_2(VAR_5->complete_wq);

 if (!FUNC_0(VAR_7->supply.vqmmc))
  FUNC_9(VAR_7->supply.vqmmc);

 if (VAR_5->align_buffer)
  FUNC_3(FUNC_5(VAR_7), VAR_5->align_buffer_sz +
      VAR_5->adma_table_sz, VAR_5->align_buffer,
      VAR_5->align_addr);

 VAR_5->adma_table = ((void*)0);
 VAR_5->align_buffer = ((void*)0);
}
