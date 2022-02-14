
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdhci_host {int cqe_ier; int mmc; int cqe_on; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,...) ;
 int FUNC_2 (struct sdhci_host*) ;
 int FUNC_3 (struct sdhci_host*,int,int ) ;

bool FUNC_4(struct sdhci_host *VAR_14, u32 VAR_15, int *VAR_16,
     int *VAR_17)
{
 u32 VAR_18;

 if (!VAR_14->cqe_on)
  return 0;

 if (VAR_15 & (VAR_11 | VAR_9 | VAR_5))
  *VAR_16 = -VAR_0;
 else if (VAR_15 & VAR_13)
  *VAR_16 = -VAR_2;
 else
  *VAR_16 = 0;

 if (VAR_15 & (VAR_7 | VAR_6))
  *VAR_17 = -VAR_0;
 else if (VAR_15 & VAR_8)
  *VAR_17 = -VAR_2;
 else if (VAR_15 & VAR_3)
  *VAR_17 = -VAR_1;
 else
  *VAR_17 = 0;


 VAR_18 = VAR_15 & VAR_14->cqe_ier;
 FUNC_3(VAR_14, VAR_18, VAR_12);

 if (VAR_15 & VAR_4)
  FUNC_1("%s: Card is consuming too much power!\n",
         FUNC_0(VAR_14->mmc));

 VAR_15 &= ~(VAR_14->cqe_ier | VAR_10);
 if (VAR_15) {
  FUNC_3(VAR_14, VAR_15, VAR_12);
  FUNC_1("%s: CQE: Unexpected interrupt 0x%08x.\n",
         FUNC_0(VAR_14->mmc), VAR_15);
  FUNC_2(VAR_14);
 }

 return 1;
}
