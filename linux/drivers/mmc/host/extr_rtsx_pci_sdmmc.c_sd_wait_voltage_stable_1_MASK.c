
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtsx_pcr {int dummy; } ;
struct realtek_pci_sdmmc {struct rtsx_pcr* pcr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct rtsx_pcr*,int ,int*) ;
 int FUNC_2 (struct rtsx_pcr*,int ,int,int ) ;

__attribute__((used)) static int FUNC_3(struct realtek_pci_sdmmc *VAR_8)
{
 struct rtsx_pcr *VAR_9 = VAR_8->pcr;
 int VAR_10;
 u8 VAR_11;





 FUNC_0(1);





 VAR_10 = FUNC_1(VAR_9, VAR_1, &VAR_11);
 if (VAR_10 < 0)
  return VAR_10;

 if (VAR_11 & (VAR_3 | VAR_7 | VAR_6 |
    VAR_5 | VAR_4))
  return -VAR_0;


 VAR_10 = FUNC_2(VAR_9, VAR_1,
   0xFF, VAR_2);
 if (VAR_10 < 0)
  return VAR_10;

 return 0;
}
