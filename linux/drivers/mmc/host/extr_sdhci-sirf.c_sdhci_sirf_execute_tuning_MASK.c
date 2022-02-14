
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct sdhci_host {struct mmc_host* mmc; } ;
struct mmc_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,...) ;
 int FUNC_1 (struct mmc_host*) ;
 int FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (struct mmc_host*,int ,int *) ;
 int FUNC_4 (struct sdhci_host*,int ) ;
 int FUNC_5 (struct sdhci_host*,int,int ) ;

__attribute__((used)) static int FUNC_6(struct sdhci_host *VAR_3, u32 VAR_4)
{
 int VAR_5 = 3;
 int VAR_6;
 u8 VAR_7 = 0;
 int VAR_8 = 0, VAR_9 = 0;
 int VAR_10 = -1, VAR_11 = 0, VAR_12 = -1, VAR_13 = 0;
 u16 VAR_14;
 struct mmc_host *VAR_15 = VAR_3->mmc;

 VAR_14 = FUNC_4(VAR_3, VAR_1);
 VAR_14 &= ~0x3fff;

retry:
 VAR_6 = 0;
 VAR_7 = 0;
 do {
  FUNC_5(VAR_3,
   VAR_14 | VAR_6,
   VAR_1);

  if (!FUNC_3(VAR_15, VAR_4, ((void*)0))) {

   VAR_7++;
   FUNC_0(FUNC_1(VAR_15), "%s: Found good phase = %d\n",
     FUNC_2(VAR_15), VAR_6);
   if (VAR_10 == -1)
    VAR_10 = VAR_6;
   VAR_11 = VAR_6;
   VAR_13++;
   if (VAR_6 == (VAR_2 - 1)
    && VAR_13 > VAR_9)
    VAR_12 = (VAR_10 + VAR_11) / 2;
  } else {
   FUNC_0(FUNC_1(VAR_15), "%s: Found bad phase = %d\n",
     FUNC_2(VAR_15), VAR_6);
   if (VAR_13 > VAR_9) {
    VAR_12 = (VAR_10 + VAR_11) / 2;
    VAR_9 = VAR_13;
   }
   VAR_10 = -1;
   VAR_11 = VAR_13 = 0;
  }
 } while (++VAR_6 < VAR_2);

 if (VAR_7 && VAR_12 > 0) {




  VAR_6 = VAR_12;
  FUNC_5(VAR_3,
   VAR_14 | VAR_6,
   VAR_1);

  FUNC_0(FUNC_1(VAR_15), "%s: Setting the tuning phase to %d\n",
    FUNC_2(VAR_15), VAR_6);
 } else {
  if (--VAR_5)
   goto retry;

  FUNC_0(FUNC_1(VAR_15), "%s: No tuning point found\n",
         FUNC_2(VAR_15));
  VAR_8 = -VAR_0;
 }

 return VAR_8;
}
