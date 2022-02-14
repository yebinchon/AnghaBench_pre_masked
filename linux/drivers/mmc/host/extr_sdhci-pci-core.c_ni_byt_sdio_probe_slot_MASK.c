
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sdhci_pci_slot {TYPE_2__* host; } ;
struct TYPE_4__ {TYPE_1__* mmc; } ;
struct TYPE_3__ {int caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sdhci_pci_slot*) ;
 int FUNC_1 (struct sdhci_pci_slot*) ;

__attribute__((used)) static int FUNC_2(struct sdhci_pci_slot *VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_3);

 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_3->host->mmc->caps |= VAR_1 | VAR_0 |
     VAR_2;
 return 0;
}
