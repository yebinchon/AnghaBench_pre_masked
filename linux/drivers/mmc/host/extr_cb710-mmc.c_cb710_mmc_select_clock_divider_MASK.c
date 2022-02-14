
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int dummy; } ;
struct mmc_host {int dummy; } ;
struct cb710_slot {int dummy; } ;
struct TYPE_2__ {struct pci_dev* pdev; } ;


 int VAR_0 ;
 int* VAR_1 ;
 struct cb710_slot* FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (struct pci_dev*,int,int,int) ;
 int FUNC_2 (struct cb710_slot*) ;
 TYPE_1__* FUNC_3 (struct cb710_slot*) ;
 int* VAR_2 ;
 int FUNC_4 (int ,char*,int,int,int,int,int) ;
 int FUNC_5 (struct pci_dev*,int,int*) ;

__attribute__((used)) static void FUNC_6(struct mmc_host *VAR_3, int VAR_4)
{
 struct cb710_slot *VAR_5 = FUNC_0(VAR_3);
 struct pci_dev *VAR_6 = FUNC_3(VAR_5)->pdev;
 u32 VAR_7;
 u32 VAR_8;
 int VAR_9;






 FUNC_5(VAR_6, 0x48, &VAR_7);
 VAR_7 = (VAR_7 >> 16) & 0xF;
 VAR_9 = VAR_2[VAR_7] * 1000000;

 for (VAR_8 = 0; VAR_8 < VAR_0; ++VAR_8) {
  if (VAR_4 >= VAR_9 >> VAR_1[VAR_8])
   break;
 }

 if (VAR_7)
  VAR_8 |= 0x8;
 else if (VAR_8 == 0)
  VAR_8 = 1;

 FUNC_1(VAR_6, 0x40, ~0xF0000000, VAR_8 << 28);

 FUNC_4(FUNC_2(VAR_5),
  "clock set to %d Hz, wanted %d Hz; src_freq_idx = %d, divider_idx = %d|%d\n",
  VAR_9 >> VAR_1[VAR_8 & 7],
  VAR_4, VAR_7, VAR_8 & 7, VAR_8 & 8);
}
