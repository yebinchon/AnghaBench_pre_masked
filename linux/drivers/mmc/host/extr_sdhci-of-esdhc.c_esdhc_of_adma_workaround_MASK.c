
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_host {TYPE_1__* data; } ;
struct sdhci_esdhc {scalar_t__ vendor_ver; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int bytes_xfered; int sg; scalar_t__ error; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct sdhci_esdhc* FUNC_0 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_1 (struct sdhci_host*) ;
 int FUNC_2 (struct sdhci_host*,int,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct sdhci_host *VAR_5, u32 VAR_6)
{
 struct sdhci_pltfm_host *VAR_7 = FUNC_1(VAR_5);
 struct sdhci_esdhc *VAR_8 = FUNC_0(VAR_7);
 bool VAR_9;
 dma_addr_t VAR_10;
 dma_addr_t VAR_11;

 VAR_9 = (VAR_6 & VAR_3) &&
       (VAR_6 & VAR_2) &&
       (VAR_8->vendor_ver == VAR_4);
 if (!VAR_9)
  return;

 VAR_5->data->error = 0;
 VAR_10 = FUNC_3(VAR_5->data->sg);
 VAR_11 = VAR_10 + VAR_5->data->bytes_xfered;



 VAR_11 = (VAR_11 & ~(VAR_0 - 1)) +
  VAR_0;
 VAR_5->data->bytes_xfered = VAR_11 - VAR_10;
 FUNC_2(VAR_5, VAR_11, VAR_1);
}
