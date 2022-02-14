
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct sdhci_pci_slot {struct sdhci_host* host; struct sdhci_pci_chip* chip; } ;
struct sdhci_pci_chip {TYPE_2__* pdev; } ;
struct TYPE_5__ {int execute_tuning; int get_cd; } ;
struct sdhci_host {TYPE_1__ mmc_host_ops; TYPE_4__* mmc; int flags; int quirks; } ;
struct o2_host {scalar_t__ dll_adjust_count; } ;
struct TYPE_7__ {int caps2; int caps; } ;
struct TYPE_6__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;





 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_2__*,int ,int*) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int FUNC_3 (char*,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_4 (struct sdhci_pci_chip*,struct sdhci_host*) ;
 struct o2_host* FUNC_5 (struct sdhci_pci_slot*) ;
 int FUNC_6 (struct sdhci_host*,int ) ;
 int FUNC_7 (struct sdhci_host*,int,int ) ;

int FUNC_8(struct sdhci_pci_slot *VAR_15)
{
 struct sdhci_pci_chip *VAR_16;
 struct sdhci_host *VAR_17;
 struct o2_host *VAR_18 = FUNC_5(VAR_15);
 u32 VAR_19, VAR_20;
 int VAR_21;

 VAR_16 = VAR_15->chip;
 VAR_17 = VAR_15->host;

 VAR_18->dll_adjust_count = 0;
 VAR_20 = FUNC_6(VAR_17, VAR_9);





 if (VAR_20 & VAR_8)
  VAR_17->mmc->caps |= VAR_3;

 switch (VAR_16->pdev->device) {
 case 131:
 case 129:
 case 128:
 case 130:
 case 132:
  VAR_19 = FUNC_6(VAR_17, VAR_6);
  if (VAR_19 & 0x1)
   VAR_17->quirks |= VAR_10;

  FUNC_4(VAR_16, VAR_17);

  if (VAR_16->pdev->device == 129) {
   VAR_21 = FUNC_1(VAR_16->pdev,
          VAR_5, &VAR_19);
   if (VAR_21)
    return -VAR_0;
   if (VAR_19 & (1 << 4)) {
    FUNC_3("%s: emmc 1.8v flag is set, force 1.8v signaling voltage\n",
     FUNC_0(VAR_17->mmc));
    VAR_17->flags &= ~VAR_12;
    VAR_17->flags |= VAR_11;
    VAR_17->mmc->caps2 |= VAR_1;
    VAR_17->mmc->caps2 |= VAR_2;
    FUNC_2(VAR_16->pdev,
             VAR_4, 3);
   }

   VAR_15->host->mmc_host_ops.get_cd = VAR_14;
  }

  VAR_17->mmc_host_ops.execute_tuning = VAR_13;

  if (VAR_16->pdev->device != 132)
   break;

  VAR_19 = FUNC_6(VAR_17, VAR_7);
  VAR_19 |= (1 << 12);
  FUNC_7(VAR_17, VAR_19, VAR_7);

  break;
 default:
  break;
 }

 return 0;
}
