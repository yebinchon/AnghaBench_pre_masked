
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct sdhci_pci_slot {int dummy; } ;
struct TYPE_4__ {scalar_t__ hs400_enhanced_strobe; } ;
struct sdhci_host {TYPE_3__* mmc; TYPE_1__ mmc_host_ops; } ;
struct arasan_host {int chg_clk; } ;
struct TYPE_5__ {int clock; int timing; int drv_type; } ;
struct TYPE_6__ {TYPE_2__ ios; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sdhci_host*,int ,int,int,int,int,int) ;
 struct arasan_host* FUNC_1 (struct sdhci_pci_slot*) ;
 struct sdhci_pci_slot* FUNC_2 (struct sdhci_host*) ;

__attribute__((used)) static int FUNC_3(struct sdhci_host *VAR_7)
{
 struct sdhci_pci_slot *VAR_8 = FUNC_2(VAR_7);
 struct arasan_host *VAR_9 = FUNC_1(VAR_8);
 u8 VAR_10;

 if (VAR_9->chg_clk == VAR_7->mmc->ios.clock)
  return 0;

 VAR_9->chg_clk = VAR_7->mmc->ios.clock;
 if (VAR_7->mmc->ios.clock == 200000000)
  VAR_10 = 0x0;
 else if (VAR_7->mmc->ios.clock == 100000000)
  VAR_10 = 0x2;
 else if (VAR_7->mmc->ios.clock == 50000000)
  VAR_10 = 0x1;
 else
  VAR_10 = 0x0;

 if (VAR_7->mmc_host_ops.hs400_enhanced_strobe) {
  FUNC_0(VAR_7, VAR_2, 1, 0x0, 0x0,
          VAR_1, VAR_10);
 } else {
  switch (VAR_7->mmc->ios.timing) {
  case 135:
   FUNC_0(VAR_7, VAR_6, 0x0, 0x0, 0x0,
           0x0, 0x0);
   break;
  case 133:
  case 130:
   FUNC_0(VAR_7, VAR_3, 0x3, 0x0, 0x2,
           VAR_1, VAR_10);
   break;
  case 132:
  case 128:
   FUNC_0(VAR_7, VAR_4, 0x2,
           VAR_7->mmc->ios.drv_type, 0x0,
           VAR_1, VAR_10);
   break;
  case 134:
  case 129:
   FUNC_0(VAR_7, VAR_0, 0x1, 0x0,
           0x0, VAR_1, VAR_10);
   break;
  case 131:
   FUNC_0(VAR_7, VAR_5, 0x1,
           VAR_7->mmc->ios.drv_type, 0xa,
           VAR_1, VAR_10);
   break;
  default:
   break;
  }
 }
 return 0;
}
