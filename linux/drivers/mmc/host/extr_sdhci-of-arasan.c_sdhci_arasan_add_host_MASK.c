
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdhci_host {int flags; TYPE_1__* mmc; scalar_t__ ioaddr; } ;
struct sdhci_arasan_data {int has_cqe; struct sdhci_host* host; } ;
struct cqhci_host {int caps; int * ops; scalar_t__ mmio; } ;
struct TYPE_2__ {int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sdhci_host*) ;
 int FUNC_1 (struct cqhci_host*,TYPE_1__*,int) ;
 struct cqhci_host* FUNC_2 (int ,int,int ) ;
 int FUNC_3 (struct sdhci_host*) ;
 int VAR_5 ;
 int FUNC_4 (struct sdhci_host*) ;
 int FUNC_5 (struct sdhci_host*) ;

__attribute__((used)) static int FUNC_6(struct sdhci_arasan_data *VAR_6)
{
 struct sdhci_host *VAR_7 = VAR_6->host;
 struct cqhci_host *VAR_8;
 bool VAR_9;
 int VAR_10;

 if (!VAR_6->has_cqe)
  return FUNC_3(VAR_7);

 VAR_10 = FUNC_5(VAR_7);
 if (VAR_10)
  return VAR_10;

 VAR_8 = FUNC_2(VAR_7->mmc->parent,
          sizeof(*VAR_8), VAR_2);
 if (!VAR_8) {
  VAR_10 = -VAR_1;
  goto cleanup;
 }

 VAR_8->mmio = VAR_7->ioaddr + VAR_3;
 VAR_8->ops = &VAR_5;

 VAR_9 = VAR_7->flags & VAR_4;
 if (VAR_9)
  VAR_8->caps |= VAR_0;

 VAR_10 = FUNC_1(VAR_8, VAR_7->mmc, VAR_9);
 if (VAR_10)
  goto cleanup;

 VAR_10 = FUNC_0(VAR_7);
 if (VAR_10)
  goto cleanup;

 return 0;

cleanup:
 FUNC_4(VAR_7);
 return VAR_10;
}
