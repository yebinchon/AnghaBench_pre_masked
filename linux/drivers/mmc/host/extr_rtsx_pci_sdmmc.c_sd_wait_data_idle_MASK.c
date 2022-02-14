
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct realtek_pci_sdmmc {int pcr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct realtek_pci_sdmmc *VAR_2)
{
 int VAR_3, VAR_4;
 u8 VAR_5 = 0;

 for (VAR_4 = 0; VAR_4 < 100; VAR_4++) {
  VAR_3 = FUNC_0(VAR_2->pcr, VAR_1, &VAR_5);
  if (VAR_5 & VAR_0)
   return;

  FUNC_1(100);
 }
}
