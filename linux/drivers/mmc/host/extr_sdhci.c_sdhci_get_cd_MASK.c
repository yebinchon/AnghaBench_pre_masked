
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_host {int flags; int quirks; int mmc; } ;
struct mmc_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mmc_host*) ;
 struct sdhci_host* FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (struct sdhci_host*,int ) ;

__attribute__((used)) static int FUNC_4(struct mmc_host *VAR_4)
{
 struct sdhci_host *VAR_5 = FUNC_2(VAR_4);
 int VAR_6 = FUNC_1(VAR_4);

 if (VAR_5->flags & VAR_1)
  return 0;


 if (!FUNC_0(VAR_5->mmc))
  return 1;





 if (VAR_6 >= 0)
  return !!VAR_6;


 if (VAR_5->quirks & VAR_3)
  return 1;


 return !!(FUNC_3(VAR_5, VAR_2) & VAR_0);
}
