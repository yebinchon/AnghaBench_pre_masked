
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_host {int flags; int lock; } ;
struct mmc_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mmc_host*) ;
 struct sdhci_host* FUNC_1 (struct mmc_host*) ;
 int FUNC_2 (struct sdhci_host*,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct mmc_host *VAR_3)
{
 int VAR_4 = FUNC_0(VAR_3);
 struct sdhci_host *VAR_5 = FUNC_1(VAR_3);
 unsigned long VAR_6;
 int VAR_7 = 0;

 if (!VAR_4)
  return 0;

 FUNC_3(&VAR_5->lock, VAR_6);

 if (VAR_5->flags & VAR_1)
  goto out;

 VAR_7 = !!(FUNC_2(VAR_5, VAR_2) & VAR_0);
out:
 FUNC_4(&VAR_5->lock, VAR_6);

 return VAR_7;
}
