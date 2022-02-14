
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_host {int flags; int complete_wq; int irq; int hw_name; int buf_ready_int; int data_timer; int timer; int complete_work; struct mmc_host* mmc; } ;
struct mmc_host {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int FUNC_1 (char*,unsigned int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,struct sdhci_host*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct mmc_host*) ;
 int FUNC_7 (struct mmc_host*) ;
 int FUNC_8 (struct mmc_host*) ;
 int FUNC_9 (char*,int ,int,...) ;
 int FUNC_10 (char*,int ,int ,int ,char*) ;
 int FUNC_11 (int ,int ,int ,int ,int ,struct sdhci_host*) ;
 int VAR_11 ;
 int FUNC_12 (struct sdhci_host*,int ) ;
 int FUNC_13 (struct sdhci_host*) ;
 int FUNC_14 (struct sdhci_host*,int ) ;
 int VAR_12 ;
 int FUNC_15 (struct sdhci_host*) ;
 int FUNC_16 (struct sdhci_host*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_17 (struct sdhci_host*,int ,int ) ;
 int FUNC_18 (int *,int ,int ) ;

int FUNC_19(struct sdhci_host *VAR_16)
{
 unsigned int VAR_17 = VAR_10 | VAR_9 | VAR_8;
 struct mmc_host *VAR_18 = VAR_16->mmc;
 int VAR_19;

 VAR_16->complete_wq = FUNC_1("sdhci", VAR_17, 0);
 if (!VAR_16->complete_wq)
  return -VAR_0;

 FUNC_0(&VAR_16->complete_work, VAR_11);

 FUNC_18(&VAR_16->timer, VAR_15, 0);
 FUNC_18(&VAR_16->data_timer, VAR_14, 0);

 FUNC_5(&VAR_16->buf_ready_int);

 FUNC_14(VAR_16, 0);

 VAR_19 = FUNC_11(VAR_16->irq, VAR_12, VAR_13,
       VAR_1, FUNC_8(VAR_18), VAR_16);
 if (VAR_19) {
  FUNC_9("%s: Failed to request IRQ %d: %d\n",
         FUNC_8(VAR_18), VAR_16->irq, VAR_19);
  goto unwq;
 }

 VAR_19 = FUNC_15(VAR_16);
 if (VAR_19) {
  FUNC_9("%s: Failed to register LED device: %d\n",
         FUNC_8(VAR_18), VAR_19);
  goto unirq;
 }

 VAR_19 = FUNC_6(VAR_18);
 if (VAR_19)
  goto unled;

 FUNC_10("%s: SDHCI controller on %s [%s] using %s\n",
  FUNC_8(VAR_18), VAR_16->hw_name, FUNC_3(FUNC_7(VAR_18)),
  (VAR_16->flags & VAR_6) ?
  (VAR_16->flags & VAR_5) ? "ADMA 64-bit" : "ADMA" :
  (VAR_16->flags & VAR_7) ? "DMA" : "PIO");

 FUNC_13(VAR_16);

 return 0;

unled:
 FUNC_16(VAR_16);
unirq:
 FUNC_12(VAR_16, VAR_3);
 FUNC_17(VAR_16, 0, VAR_2);
 FUNC_17(VAR_16, 0, VAR_4);
 FUNC_4(VAR_16->irq, VAR_16);
unwq:
 FUNC_2(VAR_16->complete_wq);

 return VAR_19;
}
