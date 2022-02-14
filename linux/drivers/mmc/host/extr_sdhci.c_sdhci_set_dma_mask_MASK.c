
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_host {int quirks2; int flags; struct mmc_host* mmc; } ;
struct mmc_host {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct device*,int ) ;
 struct device* FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static int FUNC_5(struct sdhci_host *VAR_3)
{
 struct mmc_host *VAR_4 = VAR_3->mmc;
 struct device *VAR_5 = FUNC_2(VAR_4);
 int VAR_6 = -VAR_0;

 if (VAR_3->quirks2 & VAR_1)
  VAR_3->flags &= ~VAR_2;


 if (VAR_3->flags & VAR_2) {
  VAR_6 = FUNC_1(VAR_5, FUNC_0(64));
  if (VAR_6) {
   FUNC_4("%s: Failed to set 64-bit DMA mask.\n",
    FUNC_3(VAR_4));
   VAR_3->flags &= ~VAR_2;
  }
 }


 if (VAR_6) {
  VAR_6 = FUNC_1(VAR_5, FUNC_0(32));
  if (VAR_6)
   FUNC_4("%s: Failed to set 32-bit DMA mask.\n",
    FUNC_3(VAR_4));
 }

 return VAR_6;
}
