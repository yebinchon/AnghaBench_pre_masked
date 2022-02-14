
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_ios {scalar_t__ bus_width; } ;
struct mmc_host {int dummy; } ;
struct alcor_sdmmc_host {int dev; struct alcor_pci_priv* alcor_pci; } ;
struct alcor_pci_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct alcor_pci_priv*,int ,int ) ;
 int FUNC_1 (int ,char*) ;
 struct alcor_sdmmc_host* FUNC_2 (struct mmc_host*) ;

__attribute__((used)) static void FUNC_3(struct mmc_host *VAR_4, struct mmc_ios *VAR_5)
{
 struct alcor_sdmmc_host *VAR_6 = FUNC_2(VAR_4);
 struct alcor_pci_priv *VAR_7 = VAR_6->alcor_pci;

 if (VAR_5->bus_width == VAR_2) {
  FUNC_0(VAR_7, 0, VAR_1);
 } else if (VAR_5->bus_width == VAR_3) {
  FUNC_0(VAR_7, VAR_0,
         VAR_1);
 } else
  FUNC_1(VAR_6->dev, "Unknown BUS mode\n");

}
