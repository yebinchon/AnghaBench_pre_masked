
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sdhci_pci_slot {TYPE_1__* chip; } ;
struct sdhci_host {TYPE_2__* mmc; } ;
struct pci_dev {int dev; } ;
struct TYPE_4__ {scalar_t__ retune_period; } ;
struct TYPE_3__ {struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct pci_dev*,int) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct sdhci_host*) ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int ,int *) ;
 int FUNC_5 (int ) ;
 struct sdhci_pci_slot* FUNC_6 (struct sdhci_host*) ;
 int FUNC_7 (struct sdhci_host*,int,int ) ;

__attribute__((used)) static int FUNC_8(struct sdhci_host *VAR_5, u32 VAR_6)
{
 struct sdhci_pci_slot *VAR_7 = FUNC_6(VAR_5);
 struct pci_dev *VAR_8 = VAR_7->chip->pdev;
 u8 VAR_9 = 0;
 u8 VAR_10 = 0;
 u8 VAR_11 = 0;
 u8 VAR_12, VAR_13;

 FUNC_2(VAR_5);

 for (VAR_13 = 0; VAR_13 < 12; VAR_13++) {
  FUNC_0(VAR_8, VAR_13);

  if (FUNC_4(VAR_5->mmc, VAR_6, ((void*)0))) {
   VAR_9 = 0;
   FUNC_5(VAR_0);
   VAR_12 = VAR_2 | VAR_3;
   FUNC_7(VAR_5, VAR_12, VAR_4);
  } else if (++VAR_9 > VAR_10) {
   VAR_10 = VAR_9;
   VAR_11 = VAR_13;
  }
 }

 if (!VAR_10) {
  FUNC_3(&VAR_8->dev, "no tuning point found\n");
  return -VAR_1;
 }

 FUNC_0(VAR_8, VAR_11 - VAR_10 / 2);

 FUNC_1(VAR_8);

 VAR_5->mmc->retune_period = 0;

 return 0;
}
