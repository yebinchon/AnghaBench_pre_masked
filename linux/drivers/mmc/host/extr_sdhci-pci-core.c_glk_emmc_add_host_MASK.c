
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sdhci_pci_slot {struct sdhci_host* host; TYPE_2__* chip; } ;
struct sdhci_host {int flags; int mmc; scalar_t__ ioaddr; } ;
struct device {int dummy; } ;
struct cqhci_host {int caps; int * ops; int quirks; scalar_t__ mmio; } ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sdhci_host*) ;
 int FUNC_1 (struct cqhci_host*,int ,int) ;
 struct cqhci_host* FUNC_2 (struct device*,int,int ) ;
 int VAR_5 ;
 int FUNC_3 (struct sdhci_host*) ;
 int FUNC_4 (struct sdhci_host*) ;

__attribute__((used)) static int FUNC_5(struct sdhci_pci_slot *VAR_6)
{
 struct device *VAR_7 = &VAR_6->chip->pdev->dev;
 struct sdhci_host *VAR_8 = VAR_6->host;
 struct cqhci_host *VAR_9;
 bool VAR_10;
 int VAR_11;

 VAR_11 = FUNC_4(VAR_8);
 if (VAR_11)
  return VAR_11;

 VAR_9 = FUNC_2(VAR_7, sizeof(*VAR_9), VAR_3);
 if (!VAR_9) {
  VAR_11 = -VAR_2;
  goto cleanup;
 }

 VAR_9->mmio = VAR_8->ioaddr + 0x200;
 VAR_9->quirks |= VAR_0;
 VAR_9->ops = &VAR_5;

 VAR_10 = VAR_8->flags & VAR_4;
 if (VAR_10)
  VAR_9->caps |= VAR_1;

 VAR_11 = FUNC_1(VAR_9, VAR_8->mmc, VAR_10);
 if (VAR_11)
  goto cleanup;

 VAR_11 = FUNC_0(VAR_8);
 if (VAR_11)
  goto cleanup;

 return 0;

cleanup:
 FUNC_3(VAR_8);
 return VAR_11;
}
