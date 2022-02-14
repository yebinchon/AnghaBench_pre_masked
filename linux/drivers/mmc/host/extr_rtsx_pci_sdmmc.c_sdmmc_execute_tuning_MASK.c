
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rtsx_pcr {int pcr_mutex; } ;
struct realtek_pci_sdmmc {struct rtsx_pcr* pcr; scalar_t__ eject; } ;
struct TYPE_2__ {int timing; } ;
struct mmc_host {TYPE_1__ ios; } ;


 int FUNC_0 (struct rtsx_pcr*) ;
 int FUNC_1 (struct rtsx_pcr*) ;
 int VAR_0 ;



 int VAR_1 ;
 int FUNC_2 (struct rtsx_pcr*) ;
 int FUNC_3 (struct rtsx_pcr*) ;
 struct realtek_pci_sdmmc* FUNC_4 (struct mmc_host*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct rtsx_pcr*,int ) ;
 int FUNC_8 (struct rtsx_pcr*) ;
 int FUNC_9 (struct realtek_pci_sdmmc*,int ,int) ;
 int FUNC_10 (struct realtek_pci_sdmmc*,int ) ;

__attribute__((used)) static int FUNC_11(struct mmc_host *VAR_2, u32 VAR_3)
{
 struct realtek_pci_sdmmc *VAR_4 = FUNC_4(VAR_2);
 struct rtsx_pcr *VAR_5 = VAR_4->pcr;
 int VAR_6 = 0;

 if (VAR_4->eject)
  return -VAR_0;

 VAR_6 = FUNC_7(VAR_4->pcr, VAR_1);
 if (VAR_6)
  return VAR_6;

 FUNC_5(&VAR_5->pcr_mutex);

 FUNC_8(VAR_5);


 switch (VAR_2->ios.timing) {
 case 129:
  VAR_6 = FUNC_9(VAR_4, FUNC_2(VAR_5), 0);
  break;

 case 128:
  VAR_6 = FUNC_9(VAR_4, FUNC_3(VAR_5), 0);
  break;

 case 130:
  VAR_6 = FUNC_9(VAR_4, FUNC_1(VAR_5), 0);
  break;

 default:
  VAR_6 = 0;
 }

 if (VAR_6)
  goto out;


 if ((VAR_2->ios.timing == 129) ||
   (VAR_2->ios.timing == 128))
  VAR_6 = FUNC_10(VAR_4, VAR_3);
 else if (VAR_2->ios.timing == 130)
  VAR_6 = FUNC_9(VAR_4, FUNC_0(VAR_5), 1);

out:
 FUNC_6(&VAR_5->pcr_mutex);

 return VAR_6;
}
