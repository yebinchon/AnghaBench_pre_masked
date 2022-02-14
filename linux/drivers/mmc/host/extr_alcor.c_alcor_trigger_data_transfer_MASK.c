
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mmc_data {int flags; scalar_t__ host_cookie; int sg_count; int blksz; } ;
struct alcor_sdmmc_host {int dma_on; struct mmc_data* data; struct alcor_pci_priv* alcor_pci; } ;
struct alcor_pci_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct alcor_sdmmc_host*) ;
 int FUNC_1 (struct alcor_pci_priv*,int,int ) ;
 int FUNC_2 (struct alcor_pci_priv*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct alcor_sdmmc_host *VAR_7)
{
 struct alcor_pci_priv *VAR_8 = VAR_7->alcor_pci;
 struct mmc_data *VAR_9 = VAR_7->data;
 u8 VAR_10 = 0;

 if (VAR_9->flags & VAR_6)
  VAR_10 |= VAR_2;

 if (VAR_9->host_cookie == VAR_5) {
  FUNC_0(VAR_7);
  VAR_10 |= VAR_0;
  VAR_7->dma_on = 1;
  FUNC_1(VAR_8, VAR_9->sg_count * 0x1000,
          VAR_4);
 } else {






  FUNC_1(VAR_8, VAR_9->blksz, VAR_4);
 }

 FUNC_2(VAR_8, VAR_10 | VAR_1,
        VAR_3);
}
