
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
 int VAR_2 ;
 int FUNC_0 (struct alcor_pci_priv*,int ) ;
 struct alcor_sdmmc_host* FUNC_1 (struct mmc_host*) ;

__attribute__((used)) static int FUNC_2(struct mmc_host *VAR_3)
{
 struct alcor_sdmmc_host *VAR_4 = FUNC_1(VAR_3);
 struct alcor_pci_priv *VAR_5 = VAR_4->alcor_pci;
 u8 VAR_6;

 VAR_6 = FUNC_0(VAR_5, VAR_0)
  & VAR_1;

 return (VAR_6 == VAR_2);
}
