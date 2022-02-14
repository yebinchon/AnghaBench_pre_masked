
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mmc_host {int dummy; } ;
struct alcor_sdmmc_host {struct alcor_pci_priv* alcor_pci; } ;
struct alcor_pci_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct alcor_pci_priv*,int ) ;
 struct alcor_sdmmc_host* FUNC_1 (struct mmc_host*) ;

__attribute__((used)) static int FUNC_2(struct mmc_host *VAR_2)
{
 struct alcor_sdmmc_host *VAR_3 = FUNC_1(VAR_2);
 struct alcor_pci_priv *VAR_4 = VAR_3->alcor_pci;
 u8 VAR_5;


 VAR_5 = FUNC_0(VAR_4, VAR_0);

 return !!(VAR_5 & VAR_1);
}
