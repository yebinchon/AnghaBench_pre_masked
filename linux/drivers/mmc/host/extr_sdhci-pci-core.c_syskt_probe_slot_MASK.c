
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct sdhci_pci_slot {TYPE_3__* host; TYPE_2__* chip; } ;
struct TYPE_6__ {scalar_t__ ioaddr; int quirks; } ;
struct TYPE_5__ {TYPE_1__* pdev; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int,int,int,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct sdhci_pci_slot *VAR_10)
{
 int VAR_11, VAR_12;

 u8 VAR_13 = FUNC_2(VAR_10->host->ioaddr + VAR_2);
 u8 VAR_14 = FUNC_2(VAR_10->host->ioaddr + VAR_3);
 FUNC_1(&VAR_10->chip->pdev->dev, "SysKonnect CardBus2SDIO, "
      "board rev %d.%d, chip rev %d.%d\n",
      VAR_13 >> 4, VAR_13 & 0xf,
      VAR_14 >> 4, VAR_14 & 0xf);
 if (VAR_14 >= 0x20)
  VAR_10->host->quirks |= VAR_1;

 FUNC_5(VAR_4, VAR_10->host->ioaddr + VAR_6);
 FUNC_5(VAR_7, VAR_10->host->ioaddr + VAR_5);
 FUNC_4(50);
 VAR_11 = 10;
 do {
  VAR_12 = FUNC_3(VAR_10->host->ioaddr + VAR_8);
  if (VAR_12 & VAR_9)
   break;
  FUNC_4(100);
 } while (--VAR_11);
 if (!VAR_11) {
  FUNC_0(&VAR_10->chip->pdev->dev,
   "power regulator never stabilized");
  FUNC_5(0, VAR_10->host->ioaddr + VAR_5);
  return -VAR_0;
 }

 return 0;
}
