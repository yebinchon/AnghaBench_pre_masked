
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_ios {int power_mode; int clock; } ;
struct mmc_host {int dummy; } ;
struct alcor_sdmmc_host {int dev; struct alcor_pci_priv* alcor_pci; } ;
struct alcor_pci_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;



 int FUNC_0 (struct alcor_sdmmc_host*,int ) ;
 int FUNC_1 (struct alcor_pci_priv*,int,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int) ;
 struct alcor_sdmmc_host* FUNC_4 (struct mmc_host*) ;

__attribute__((used)) static void FUNC_5(struct mmc_host *VAR_10, struct mmc_ios *VAR_11)
{
 struct alcor_sdmmc_host *VAR_12 = FUNC_4(VAR_10);
 struct alcor_pci_priv *VAR_13 = VAR_12->alcor_pci;

 switch (VAR_11->power_mode) {
 case 130:
  FUNC_0(VAR_12, VAR_11->clock);

  FUNC_1(VAR_13, 0, VAR_5);

  FUNC_1(VAR_13, 0, VAR_6);
  break;
 case 128:
  break;
 case 129:
  FUNC_1(VAR_13, VAR_8,
         VAR_0);

  FUNC_1(VAR_13, 0, VAR_4);



  FUNC_1(VAR_13, 0x20, VAR_1);

  FUNC_1(VAR_13, 0, VAR_7);

  FUNC_0(VAR_12, VAR_11->clock);

  FUNC_1(VAR_13, VAR_8,
         VAR_6);

  FUNC_3(20);

  FUNC_0(VAR_12, VAR_11->clock);


  FUNC_1(VAR_13, VAR_8,
         VAR_5);



  FUNC_1(VAR_13, VAR_2,
         VAR_3);

  FUNC_1(VAR_13, 0x7d, VAR_9);
  FUNC_3(100);
  break;
 default:
  FUNC_2(VAR_12->dev, "Unknown power parameter\n");
 }
}
