
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sdhci_host {scalar_t__ timing; int flags; int mmc; } ;
struct TYPE_2__ {int bus_width; } ;
struct mmc_host {TYPE_1__ ios; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct sdhci_host*,int ) ;
 int FUNC_2 (int ) ;
 struct sdhci_host* FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (struct sdhci_host*) ;
 int FUNC_6 (struct mmc_host*,int ) ;
 int FUNC_7 (struct sdhci_host*) ;
 int FUNC_8 (struct sdhci_host*) ;
 int FUNC_9 (struct sdhci_host*) ;
 int FUNC_10 (struct sdhci_host*,int) ;
 int FUNC_11 (struct sdhci_host*) ;

__attribute__((used)) static int FUNC_12(struct mmc_host *VAR_6, u32 VAR_7)
{
 struct sdhci_host *VAR_8 = FUNC_3(VAR_6);
 int VAR_9 = 0;





 if (VAR_8->timing != VAR_4)
  return FUNC_6(VAR_6, VAR_7);

 if (FUNC_0(VAR_7 != VAR_3))
  return -VAR_0;




 if (!FUNC_9(VAR_8))
  if (!FUNC_7(VAR_8)) {
   FUNC_4("%s: o2 dll recovery failed\n",
    FUNC_2(VAR_8->mmc));
   return -VAR_0;
  }



 if (VAR_6->ios.bus_width == VAR_2) {
  VAR_9 = VAR_6->ios.bus_width;
  VAR_6->ios.bus_width = VAR_1;
  FUNC_10(VAR_8, VAR_1);
 }

 FUNC_8(VAR_8);

 FUNC_11(VAR_8);

 FUNC_1(VAR_8, VAR_7);

 FUNC_5(VAR_8);

 if (VAR_9 == VAR_2) {
  VAR_6->ios.bus_width = VAR_2;
  FUNC_10(VAR_8, VAR_9);
 }

 VAR_8->flags &= ~VAR_5;
 return 0;
}
