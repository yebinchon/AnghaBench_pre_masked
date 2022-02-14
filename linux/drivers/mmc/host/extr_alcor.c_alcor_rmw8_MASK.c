
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct alcor_sdmmc_host {struct alcor_pci_priv* alcor_pci; } ;
struct alcor_pci_priv {int dummy; } ;


 int FUNC_0 (struct alcor_pci_priv*,unsigned int) ;
 int FUNC_1 (struct alcor_pci_priv*,int ,unsigned int) ;

__attribute__((used)) static inline void FUNC_2(struct alcor_sdmmc_host *VAR_0, unsigned int VAR_1,
          u8 VAR_2, u8 VAR_3)
{
 struct alcor_pci_priv *VAR_4 = VAR_0->alcor_pci;
 u32 VAR_5;

 VAR_5 = FUNC_0(VAR_4, VAR_1);
 VAR_5 &= ~VAR_2;
 VAR_5 |= VAR_3;
 FUNC_1(VAR_4, VAR_5, VAR_1);
}
