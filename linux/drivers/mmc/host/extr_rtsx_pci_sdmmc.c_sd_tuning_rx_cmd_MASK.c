
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtsx_pcr {int dummy; } ;
struct realtek_pci_sdmmc {struct rtsx_pcr* pcr; } ;
struct mmc_command {int opcode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtsx_pcr*,int ,int ,int ) ;
 int FUNC_1 (struct realtek_pci_sdmmc*,int ,int) ;
 int FUNC_2 (struct realtek_pci_sdmmc*) ;
 int FUNC_3 (struct realtek_pci_sdmmc*,struct mmc_command*,int,int *,int ,int) ;
 int FUNC_4 (struct realtek_pci_sdmmc*) ;

__attribute__((used)) static int FUNC_5(struct realtek_pci_sdmmc *VAR_2,
  u8 VAR_3, u8 VAR_4)
{
 int VAR_5;
 struct mmc_command VAR_6 = {};
 struct rtsx_pcr *VAR_7 = VAR_2->pcr;

 FUNC_1(VAR_2, VAR_4, 1);

 FUNC_0(VAR_7, VAR_0, VAR_1,
  VAR_1);

 VAR_6.opcode = VAR_3;
 VAR_5 = FUNC_3(VAR_2, &VAR_6, 0x40, ((void*)0), 0, 100);
 if (VAR_5 < 0) {

  FUNC_4(VAR_2);
  FUNC_2(VAR_2);
  FUNC_0(VAR_7, VAR_0,
   VAR_1, 0);
  return VAR_5;
 }

 FUNC_0(VAR_7, VAR_0, VAR_1, 0);
 return 0;
}
