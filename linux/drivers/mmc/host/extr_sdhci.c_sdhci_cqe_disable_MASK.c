
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_host {int cqe_on; int lock; int ier; } ;
struct mmc_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mmc_host*) ;
 struct sdhci_host* FUNC_1 (struct mmc_host*) ;
 int FUNC_2 (char*,int ,int ,int ) ;
 int FUNC_3 (struct sdhci_host*,int ) ;
 int FUNC_4 (struct sdhci_host*,int ) ;
 int FUNC_5 (struct sdhci_host*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

void FUNC_8(struct mmc_host *VAR_3, bool VAR_4)
{
 struct sdhci_host *VAR_5 = FUNC_1(VAR_3);
 unsigned long VAR_6;

 FUNC_6(&VAR_5->lock, VAR_6);

 FUNC_5(VAR_5);

 VAR_5->cqe_on = 0;

 if (VAR_4) {
  FUNC_3(VAR_5, VAR_1);
  FUNC_3(VAR_5, VAR_2);
 }

 FUNC_2("%s: sdhci: CQE off, IRQ mask %#x, IRQ status %#x\n",
   FUNC_0(VAR_3), VAR_5->ier,
   FUNC_4(VAR_5, VAR_0));

 FUNC_7(&VAR_5->lock, VAR_6);
}
