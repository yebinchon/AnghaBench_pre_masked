
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alcor_sdmmc_host {struct alcor_pci_priv* alcor_pci; } ;
struct alcor_pci_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct alcor_sdmmc_host*) ;
 int FUNC_1 (struct alcor_sdmmc_host*,int) ;
 int FUNC_2 (struct alcor_pci_priv*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct alcor_sdmmc_host *VAR_6)
{
 struct alcor_pci_priv *VAR_7 = VAR_6->alcor_pci;

 FUNC_0(VAR_6);
 FUNC_1(VAR_6, VAR_4 | VAR_5);

 FUNC_2(VAR_7, 0, VAR_0);

 FUNC_2(VAR_7, 0, VAR_2);
 FUNC_2(VAR_7, 0, VAR_3);

 FUNC_2(VAR_7, 0, VAR_1);
}
