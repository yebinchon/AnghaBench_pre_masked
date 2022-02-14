
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_msm_host {int use_cdr; int tuning_done; scalar_t__ saved_tuning_phase; } ;
struct sdhci_host {int flags; TYPE_1__* mmc; } ;
struct mmc_ios {int clock; } ;
struct mmc_host {int dummy; } ;
struct TYPE_2__ {struct mmc_ios ios; } ;


 scalar_t__ FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int ,...) ;
 int FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (struct mmc_host*) ;
 struct sdhci_host* FUNC_4 (struct mmc_host*) ;
 int FUNC_5 (struct mmc_host*,int ,int *) ;
 int FUNC_6 (struct sdhci_host*,scalar_t__) ;
 int FUNC_7 (struct sdhci_host*,scalar_t__*,scalar_t__) ;
 int FUNC_8 (struct sdhci_host*) ;
 int FUNC_9 (struct sdhci_host*,int ) ;
 int FUNC_10 (struct sdhci_host*) ;
 int FUNC_11 (struct sdhci_host*) ;
 int FUNC_12 (struct sdhci_host*,int) ;
 struct sdhci_msm_host* FUNC_13 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_14 (struct sdhci_host*) ;

__attribute__((used)) static int FUNC_15(struct mmc_host *VAR_2, u32 VAR_3)
{
 struct sdhci_host *VAR_4 = FUNC_4(VAR_2);
 int VAR_5 = 3;
 u8 VAR_6, VAR_7[16], VAR_8 = 0;
 int VAR_9;
 struct mmc_ios VAR_10 = VAR_4->mmc->ios;
 struct sdhci_pltfm_host *VAR_11 = FUNC_14(VAR_4);
 struct sdhci_msm_host *VAR_12 = FUNC_13(VAR_11);

 if (!FUNC_11(VAR_4)) {
  VAR_12->use_cdr = 0;
  FUNC_12(VAR_4, 0);
  return 0;
 }


 VAR_12->use_cdr = 1;






 if (VAR_4->flags & VAR_1) {
  FUNC_10(VAR_4);
  FUNC_9(VAR_4, VAR_10.clock);
  VAR_4->flags &= ~VAR_1;
 }

retry:

 VAR_9 = FUNC_8(VAR_4);
 if (VAR_9)
  return VAR_9;

 VAR_6 = 0;
 do {

  VAR_9 = FUNC_6(VAR_4, VAR_6);
  if (VAR_9)
   return VAR_9;

  VAR_9 = FUNC_5(VAR_2, VAR_3, ((void*)0));
  if (!VAR_9) {

   VAR_7[VAR_8++] = VAR_6;
   FUNC_1(FUNC_2(VAR_2), "%s: Found good phase = %d\n",
     FUNC_3(VAR_2), VAR_6);
  }
 } while (++VAR_6 < FUNC_0(VAR_7));

 if (VAR_8) {
  VAR_9 = FUNC_7(VAR_4, VAR_7,
           VAR_8);
  if (VAR_9 < 0)
   return VAR_9;
  else
   VAR_6 = VAR_9;





  VAR_9 = FUNC_6(VAR_4, VAR_6);
  if (VAR_9)
   return VAR_9;
  VAR_12->saved_tuning_phase = VAR_6;
  FUNC_1(FUNC_2(VAR_2), "%s: Setting the tuning phase to %d\n",
    FUNC_3(VAR_2), VAR_6);
 } else {
  if (--VAR_5)
   goto retry;

  FUNC_1(FUNC_2(VAR_2), "%s: No tuning point found\n",
         FUNC_3(VAR_2));
  VAR_9 = -VAR_0;
 }

 if (!VAR_9)
  VAR_12->tuning_done = 1;
 return VAR_9;
}
