
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sdhci_host {int caps1; int flags; int cqe_on; int lock; int ier; int cqe_ier; int sdma_boundary; scalar_t__ v4_mode; } ;
struct mmc_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct mmc_host*) ;
 struct sdhci_host* FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (char*,int ,int ,int ) ;
 int FUNC_4 (struct sdhci_host*,int ) ;
 int FUNC_5 (struct sdhci_host*,int ) ;
 int FUNC_6 (struct sdhci_host*,int *) ;
 int FUNC_7 (struct sdhci_host*,int ,int ) ;
 int FUNC_8 (struct sdhci_host*,int ,int ) ;
 int FUNC_9 (struct sdhci_host*,int ,int ) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;

void FUNC_12(struct mmc_host *VAR_11)
{
 struct sdhci_host *VAR_12 = FUNC_2(VAR_11);
 unsigned long VAR_13;
 u8 VAR_14;

 FUNC_10(&VAR_12->lock, VAR_13);

 VAR_14 = FUNC_4(VAR_12, VAR_6);
 VAR_14 &= ~VAR_5;





 if (VAR_12->v4_mode && (VAR_12->caps1 & VAR_1))
  VAR_14 |= VAR_2;
 else if (VAR_12->flags & VAR_10)
  VAR_14 |= VAR_4;
 else
  VAR_14 |= VAR_3;
 FUNC_7(VAR_12, VAR_14, VAR_6);

 FUNC_9(VAR_12, FUNC_0(VAR_12->sdma_boundary, 512),
       VAR_0);


 FUNC_6(VAR_12, ((void*)0));

 VAR_12->ier = VAR_12->cqe_ier;

 FUNC_8(VAR_12, VAR_12->ier, VAR_7);
 FUNC_8(VAR_12, VAR_12->ier, VAR_9);

 VAR_12->cqe_on = 1;

 FUNC_3("%s: sdhci: CQE on, IRQ mask %#x, IRQ status %#x\n",
   FUNC_1(VAR_11), VAR_12->ier,
   FUNC_5(VAR_12, VAR_8));

 FUNC_11(&VAR_12->lock, VAR_13);
}
