
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdhci_tegra {int enable_hwcq; } ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_host {int flags; TYPE_1__* mmc; scalar_t__ ioaddr; } ;
struct cqhci_host {int caps; int * ops; scalar_t__ mmio; } ;
struct TYPE_2__ {int caps2; int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sdhci_host*) ;
 int FUNC_1 (struct cqhci_host*,TYPE_1__*,int) ;
 struct cqhci_host* FUNC_2 (int ,int,int ) ;
 int FUNC_3 (struct sdhci_host*) ;
 int FUNC_4 (struct sdhci_host*) ;
 int FUNC_5 (struct sdhci_host*) ;
 struct sdhci_tegra* FUNC_6 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_7 (struct sdhci_host*) ;
 int FUNC_8 (struct sdhci_host*) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_9(struct sdhci_host *VAR_8)
{
 struct sdhci_pltfm_host *VAR_9 = FUNC_7(VAR_8);
 struct sdhci_tegra *VAR_10 = FUNC_6(VAR_9);
 struct cqhci_host *VAR_11;
 bool VAR_12;
 int VAR_13;

 if (!VAR_10->enable_hwcq)
  return FUNC_3(VAR_8);

 FUNC_5(VAR_8);

 VAR_13 = FUNC_8(VAR_8);
 if (VAR_13)
  return VAR_13;

 VAR_8->mmc->caps2 |= VAR_3 | VAR_4;

 VAR_11 = FUNC_2(VAR_8->mmc->parent,
    sizeof(*VAR_11), VAR_2);
 if (!VAR_11) {
  VAR_13 = -VAR_1;
  goto cleanup;
 }

 VAR_11->mmio = VAR_8->ioaddr + VAR_5;
 VAR_11->ops = &VAR_7;

 VAR_12 = VAR_8->flags & VAR_6;
 if (VAR_12)
  VAR_11->caps |= VAR_0;

 VAR_13 = FUNC_1(VAR_11, VAR_8->mmc, VAR_12);
 if (VAR_13)
  goto cleanup;

 VAR_13 = FUNC_0(VAR_8);
 if (VAR_13)
  goto cleanup;

 return 0;

cleanup:
 FUNC_4(VAR_8);
 return VAR_13;
}
