
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sunxi_mmc_host {scalar_t__ use_new_timings; int clk_mmc; TYPE_1__* cfg; struct mmc_host* mmc; } ;
struct mmc_ios {int clock; scalar_t__ timing; scalar_t__ bus_width; } ;
struct mmc_host {long actual_clock; } ;
struct TYPE_2__ {scalar_t__ ccu_has_timings_switch; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 long FUNC_0 (int ,int) ;
 int FUNC_1 (int ,long) ;
 int FUNC_2 (int ,char*,int,long) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (struct mmc_host*) ;
 int FUNC_5 (struct sunxi_mmc_host*,int ) ;
 int FUNC_6 (struct sunxi_mmc_host*,int ,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (struct sunxi_mmc_host*,int ) ;
 int FUNC_9 (struct sunxi_mmc_host*,struct mmc_ios*,long) ;
 int FUNC_10 (struct sunxi_mmc_host*,int) ;

__attribute__((used)) static int FUNC_11(struct sunxi_mmc_host *VAR_6,
      struct mmc_ios *VAR_7)
{
 struct mmc_host *VAR_8 = VAR_6->mmc;
 long VAR_9;
 u32 VAR_10, VAR_11 = VAR_7->clock, VAR_12 = 1;
 int VAR_13;

 VAR_13 = FUNC_10(VAR_6, 0);
 if (VAR_13)
  return VAR_13;


 VAR_8->actual_clock = 0;

 if (!VAR_7->clock)
  return 0;
 if (VAR_7->timing == VAR_1 &&
     (VAR_6->use_new_timings ||
      VAR_7->bus_width == VAR_0)) {
  VAR_12 = 2;
  VAR_11 <<= 1;
 }

 if (VAR_6->use_new_timings && VAR_6->cfg->ccu_has_timings_switch) {
  VAR_13 = FUNC_7(VAR_6->clk_mmc, 1);
  if (VAR_13) {
   FUNC_3(FUNC_4(VAR_8),
    "error setting new timing mode\n");
   return VAR_13;
  }
 }

 VAR_9 = FUNC_0(VAR_6->clk_mmc, VAR_11);
 if (VAR_9 < 0) {
  FUNC_3(FUNC_4(VAR_8), "error rounding clk to %d: %ld\n",
   VAR_11, VAR_9);
  return VAR_9;
 }
 FUNC_2(FUNC_4(VAR_8), "setting clk to %d, rounded %ld\n",
  VAR_11, VAR_9);


 VAR_13 = FUNC_1(VAR_6->clk_mmc, VAR_9);
 if (VAR_13) {
  FUNC_3(FUNC_4(VAR_8), "error setting clk to %ld: %d\n",
   VAR_9, VAR_13);
  return VAR_13;
 }


 VAR_10 = FUNC_5(VAR_6, VAR_2);
 VAR_10 &= ~0xff;
 VAR_10 |= VAR_12 - 1;
 FUNC_6(VAR_6, VAR_2, VAR_10);


 VAR_9 /= VAR_12;







 if (VAR_6->use_new_timings) {

  VAR_10 = FUNC_5(VAR_6, VAR_3);
  VAR_10 |= VAR_4;
  FUNC_6(VAR_6, VAR_3, VAR_10);
 }


 VAR_13 = FUNC_9(VAR_6, VAR_7, VAR_9);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_8(VAR_6, VAR_5);
 if (VAR_13)
  return VAR_13;
 VAR_13 = FUNC_10(VAR_6, 1);
 if (VAR_13)
  return VAR_13;


 VAR_8->actual_clock = VAR_9;

 return 0;
}
