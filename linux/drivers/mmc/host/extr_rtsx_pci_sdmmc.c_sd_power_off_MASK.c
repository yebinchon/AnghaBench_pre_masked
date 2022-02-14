
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtsx_pcr {int dummy; } ;
struct realtek_pci_sdmmc {int power_state; struct rtsx_pcr* pcr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct rtsx_pcr*,int ,int ,int ,int ) ;
 int FUNC_1 (struct rtsx_pcr*,int ) ;
 int FUNC_2 (struct rtsx_pcr*,int ) ;
 int FUNC_3 (struct rtsx_pcr*) ;
 int FUNC_4 (struct rtsx_pcr*,int) ;

__attribute__((used)) static int FUNC_5(struct realtek_pci_sdmmc *VAR_7)
{
 struct rtsx_pcr *VAR_8 = VAR_7->pcr;
 int VAR_9;

 VAR_7->power_state = VAR_3;

 FUNC_3(VAR_8);

 FUNC_0(VAR_8, VAR_6, VAR_0, VAR_4, 0);
 FUNC_0(VAR_8, VAR_6, VAR_1, VAR_5, 0);

 VAR_9 = FUNC_4(VAR_8, 100);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_9 = FUNC_1(VAR_8, VAR_2);
 if (VAR_9 < 0)
  return VAR_9;

 return FUNC_2(VAR_8, VAR_2);
}
