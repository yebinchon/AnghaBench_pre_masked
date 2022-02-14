
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtsx_pcr {int dummy; } ;
struct realtek_pci_sdmmc {scalar_t__ power_state; struct rtsx_pcr* pcr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct rtsx_pcr*,int ,int ,int,int) ;
 int FUNC_1 (struct rtsx_pcr*,int ) ;
 int FUNC_2 (struct rtsx_pcr*,int ) ;
 int FUNC_3 (struct rtsx_pcr*) ;
 int FUNC_4 (struct rtsx_pcr*,int) ;
 int FUNC_5 (struct rtsx_pcr*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct realtek_pci_sdmmc *VAR_12)
{
 struct rtsx_pcr *VAR_13 = VAR_12->pcr;
 int VAR_14;

 if (VAR_12->power_state == VAR_7)
  return 0;

 FUNC_3(VAR_13);
 FUNC_0(VAR_13, VAR_11, VAR_2, 0x07, VAR_9);
 FUNC_0(VAR_13, VAR_11, VAR_5,
   VAR_4, VAR_3);
 FUNC_0(VAR_13, VAR_11, VAR_0,
   VAR_8, VAR_8);
 VAR_14 = FUNC_4(VAR_13, 100);
 if (VAR_14 < 0)
  return VAR_14;

 VAR_14 = FUNC_2(VAR_13, VAR_6);
 if (VAR_14 < 0)
  return VAR_14;

 VAR_14 = FUNC_1(VAR_13, VAR_6);
 if (VAR_14 < 0)
  return VAR_14;

 VAR_14 = FUNC_5(VAR_13, VAR_1, VAR_10, VAR_10);
 if (VAR_14 < 0)
  return VAR_14;

 VAR_12->power_state = VAR_7;
 return 0;
}
