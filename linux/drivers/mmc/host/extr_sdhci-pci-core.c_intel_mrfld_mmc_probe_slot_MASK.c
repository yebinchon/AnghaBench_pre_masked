
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sdhci_pci_slot {TYPE_4__* host; TYPE_2__* chip; } ;
struct TYPE_8__ {int ocr_mask; TYPE_3__* mmc; int quirks2; } ;
struct TYPE_7__ {int caps; } ;
struct TYPE_6__ {TYPE_1__* pdev; } ;
struct TYPE_5__ {int devfn; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int FUNC_0 (int ) ;
 int VAR_7 ;
 int FUNC_1 (struct sdhci_pci_slot*) ;

__attribute__((used)) static int FUNC_2(struct sdhci_pci_slot *VAR_8)
{
 unsigned int VAR_9 = FUNC_0(VAR_8->chip->pdev->devfn);

 switch (VAR_9) {
 case 131:
 case 130:
  VAR_8->host->mmc->caps |= VAR_3 |
      VAR_2 |
      VAR_1;
  break;
 case 129:
  VAR_8->host->quirks2 |= VAR_7;
  break;
 case 128:

  VAR_8->host->ocr_mask = VAR_6 | VAR_5;
  VAR_8->host->mmc->caps |= VAR_3 |
      VAR_4;
  break;
 default:
  return -VAR_0;
 }

 FUNC_1(VAR_8);
 return 0;
}
