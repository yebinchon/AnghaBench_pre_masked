
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct sdhci_host {int flags; int quirks2; int mmc; } ;
struct mmc_host {struct cqhci_host* cqe_private; } ;
struct cqhci_host {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (struct cqhci_host*,int ) ;
 int FUNC_1 (struct cqhci_host*,int ,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 struct sdhci_host* FUNC_6 (struct mmc_host*) ;
 int FUNC_7 (struct mmc_host*) ;
 int FUNC_8 (struct sdhci_host*,int ) ;
 int FUNC_9 (struct sdhci_host*,int ) ;
 int FUNC_10 (struct sdhci_host*,int ,int ) ;

__attribute__((used)) static void FUNC_11(struct mmc_host *VAR_10)
{
 struct sdhci_host *VAR_11 = FUNC_6(VAR_10);
 struct cqhci_host *VAR_12 = VAR_10->cqe_private;
 u32 VAR_13;
 u16 VAR_14;
 int VAR_15 = 10;





 VAR_13 = FUNC_8(VAR_11, VAR_4);
 while (VAR_13 & VAR_3) {
  FUNC_8(VAR_11, VAR_2);
  VAR_13 = FUNC_8(VAR_11, VAR_4);
  if (VAR_15-- == 0) {
   FUNC_3(FUNC_5(VAR_11->mmc),
    "CQE may get stuck because the Buffer Read Enable bit is set\n");
   break;
  }
  FUNC_4(1);
 }






 VAR_14 = FUNC_9(VAR_11, VAR_7);
 if (VAR_11->flags & VAR_6)
  VAR_14 |= VAR_9;
 if (!(VAR_11->quirks2 & VAR_5))
  VAR_14 |= VAR_8;
 FUNC_10(VAR_11, VAR_14, VAR_7);







 FUNC_1(VAR_12, 0, VAR_0);
 if (FUNC_0(VAR_12, VAR_0) && VAR_1)
  FUNC_2(FUNC_5(VAR_11->mmc),
   "failed to exit halt state when enable CQE\n");


 FUNC_7(VAR_10);
}
