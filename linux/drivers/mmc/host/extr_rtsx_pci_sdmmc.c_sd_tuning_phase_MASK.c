
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct realtek_pci_sdmmc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct realtek_pci_sdmmc*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct realtek_pci_sdmmc *VAR_1,
  u8 VAR_2, u32 *VAR_3)
{
 int VAR_4, VAR_5;
 u32 VAR_6 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_4 = FUNC_0(VAR_1, VAR_2, (u8)VAR_5);
  if (VAR_4 == 0)
   VAR_6 |= 1 << VAR_5;
 }

 if (VAR_3)
  *VAR_3 = VAR_6;

 return 0;
}
