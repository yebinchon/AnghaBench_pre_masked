
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int timing; } ;
struct mmc_host {TYPE_1__ ios; } ;
struct dw_mci_slot {struct mmc_host* mmc; struct dw_mci* host; } ;
struct dw_mci {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct dw_mci*,int ,int) ;
 int FUNC_4 (struct dw_mci*,int ,int ) ;
 int FUNC_5 (struct mmc_host*,int,int *) ;

__attribute__((used)) static int FUNC_6(struct dw_mci_slot *VAR_3, u32 VAR_4)
{
 int VAR_5 = 0;
 struct dw_mci *VAR_6 = VAR_3->host;
 struct mmc_host *VAR_7 = VAR_3->mmc;
 int VAR_8 = 0;
 u32 VAR_9 = 0;
 int VAR_10 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_1; ++VAR_5, ++VAR_8) {
  VAR_8 %= 32;

  FUNC_4(VAR_6, VAR_2, ~0);
  FUNC_3(VAR_6, VAR_7->ios.timing, VAR_8);

  if (!FUNC_5(VAR_7, VAR_4, ((void*)0)))
   VAR_9 |= (1 << VAR_8);
  else
   VAR_9 &= ~(1 << VAR_8);
 }

 VAR_10 = FUNC_2(VAR_9);
 if (VAR_10 < 0) {
  FUNC_0(VAR_6->dev, "All phases bad!\n");
  return -VAR_0;
 }

 FUNC_3(VAR_6, VAR_7->ios.timing, VAR_10);

 FUNC_1(VAR_6->dev, "tuning ok best_clksmpl %u tuning_sample_flag %x\n",
   VAR_10, VAR_9);
 return 0;
}
