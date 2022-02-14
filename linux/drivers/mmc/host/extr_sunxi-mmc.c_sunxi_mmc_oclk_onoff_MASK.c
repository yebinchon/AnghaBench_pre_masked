
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sunxi_mmc_host {TYPE_1__* cfg; int mmc; } ;
struct TYPE_2__ {scalar_t__ mask_data0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int ,char*) ;
 unsigned long VAR_11 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sunxi_mmc_host*,int ) ;
 int FUNC_4 (struct sunxi_mmc_host*,int ,int) ;
 unsigned long FUNC_5 (int) ;
 scalar_t__ FUNC_6 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct sunxi_mmc_host *VAR_12, u32 VAR_13)
{
 unsigned long VAR_14 = VAR_11 + FUNC_5(750);
 u32 VAR_15;

 FUNC_0(FUNC_2(VAR_12->mmc), "%sabling the clock\n",
  VAR_13 ? "en" : "dis");

 VAR_15 = FUNC_3(VAR_12, VAR_1);
 VAR_15 &= ~(VAR_4 | VAR_5 | VAR_6);

 if (VAR_13)
  VAR_15 |= VAR_4;
 if (VAR_12->cfg->mask_data0)
  VAR_15 |= VAR_6;

 FUNC_4(VAR_12, VAR_1, VAR_15);

 VAR_15 = VAR_8 | VAR_9 | VAR_10;
 FUNC_4(VAR_12, VAR_2, VAR_15);

 do {
  VAR_15 = FUNC_3(VAR_12, VAR_2);
 } while (FUNC_6(VAR_11, VAR_14) && (VAR_15 & VAR_8));


 FUNC_4(VAR_12, VAR_3,
     FUNC_3(VAR_12, VAR_3) & ~VAR_7);

 if (VAR_15 & VAR_8) {
  FUNC_1(FUNC_2(VAR_12->mmc), "fatal err update clk timeout\n");
  return -VAR_0;
 }

 if (VAR_12->cfg->mask_data0) {
  VAR_15 = FUNC_3(VAR_12, VAR_1);
  FUNC_4(VAR_12, VAR_1, VAR_15 & ~VAR_6);
 }

 return 0;
}
