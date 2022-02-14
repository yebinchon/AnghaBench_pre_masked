
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct alcor_sdmmc_host {int irq_status_sd; struct alcor_pci_priv* alcor_pci; } ;
struct alcor_pci_priv {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct alcor_sdmmc_host*,int) ;
 int FUNC_1 (struct alcor_sdmmc_host*,int) ;
 int FUNC_2 (struct alcor_sdmmc_host*) ;
 int FUNC_3 (struct alcor_pci_priv*,int ) ;
 int FUNC_4 (struct alcor_pci_priv*,int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_9, void *VAR_10)
{
 struct alcor_sdmmc_host *VAR_11 = VAR_10;
 struct alcor_pci_priv *VAR_12 = VAR_11->alcor_pci;
 u32 VAR_13, VAR_14;
 irqreturn_t VAR_15;
 int VAR_16, VAR_17;

 VAR_13 = FUNC_3(VAR_12, VAR_5);
 if (!VAR_13)
  return VAR_7;

 FUNC_4(VAR_12, VAR_13, VAR_5);

 VAR_14 = VAR_13 & (VAR_3 | VAR_4
   | VAR_1 | VAR_2
   | VAR_0);
 if (VAR_14 == VAR_13) {
  VAR_16 = FUNC_0(VAR_11, VAR_14);
  VAR_17 = FUNC_1(VAR_11, VAR_14);

  if (VAR_16 && VAR_17) {
   VAR_15 = VAR_6;
   goto alcor_irq_done;
  }
 }

 VAR_11->irq_status_sd = VAR_13;
 VAR_15 = VAR_8;
 FUNC_2(VAR_11);
alcor_irq_done:
 return VAR_15;
}
