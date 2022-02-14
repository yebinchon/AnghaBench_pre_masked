
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_emc {scalar_t__ regs; } ;
struct emc_timing {scalar_t__ emc_mode_reset; scalar_t__ emc_mode_4; scalar_t__ emc_mode_2; scalar_t__ emc_mode_1; scalar_t__ emc_zcal_cnt_long; scalar_t__ emc_auto_cal_interval; void* emc_cfg; void** emc_burst_data; } ;


 unsigned int FUNC_0 (scalar_t__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__* VAR_1 ;
 void* FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct tegra_emc *VAR_2,
        struct emc_timing *VAR_3)
{
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); ++VAR_4)
  VAR_3->emc_burst_data[VAR_4] =
   FUNC_1(VAR_2->regs + VAR_1[VAR_4]);

 VAR_3->emc_cfg = FUNC_1(VAR_2->regs + VAR_0);

 VAR_3->emc_auto_cal_interval = 0;
 VAR_3->emc_zcal_cnt_long = 0;
 VAR_3->emc_mode_1 = 0;
 VAR_3->emc_mode_2 = 0;
 VAR_3->emc_mode_4 = 0;
 VAR_3->emc_mode_reset = 0;
}
