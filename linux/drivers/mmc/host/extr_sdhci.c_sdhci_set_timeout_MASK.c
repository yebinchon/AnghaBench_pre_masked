
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sdhci_host {int quirks2; int ier; TYPE_1__* ops; } ;
struct mmc_command {int dummy; } ;
struct TYPE_2__ {int (* set_timeout ) (struct sdhci_host*,struct mmc_command*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sdhci_host*,struct mmc_command*) ;
 int FUNC_1 (struct sdhci_host*,struct mmc_command*,int*) ;
 int FUNC_2 (struct sdhci_host*,int) ;
 int FUNC_3 (struct sdhci_host*,int ,int ) ;
 int FUNC_4 (struct sdhci_host*,struct mmc_command*) ;

__attribute__((used)) static void FUNC_5(struct sdhci_host *VAR_3, struct mmc_command *VAR_4)
{
 u8 VAR_5;

 if (VAR_3->ops->set_timeout) {
  VAR_3->ops->set_timeout(VAR_3, VAR_4);
 } else {
  bool VAR_6 = 0;

  VAR_5 = FUNC_1(VAR_3, VAR_4, &VAR_6);

  if (VAR_6 &&
      VAR_3->quirks2 & VAR_1) {
   FUNC_0(VAR_3, VAR_4);
   FUNC_2(VAR_3, 0);
  } else if (!(VAR_3->ier & VAR_0)) {
   FUNC_2(VAR_3, 1);
  }

  FUNC_3(VAR_3, VAR_5, VAR_2);
 }
}
