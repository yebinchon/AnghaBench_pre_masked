
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lane_rx; int lane_tx; scalar_t__ hs_rate; void* pwr_tx; void* pwr_rx; void* gear_tx; void* gear_rx; } ;
struct ufs_hba {TYPE_1__ pwr_info; } ;


 void* VAR_0 ;
 void* VAR_1 ;

__attribute__((used)) static void FUNC_0(struct ufs_hba *VAR_2)
{
 VAR_2->pwr_info.gear_rx = VAR_1;
 VAR_2->pwr_info.gear_tx = VAR_1;
 VAR_2->pwr_info.lane_rx = 1;
 VAR_2->pwr_info.lane_tx = 1;
 VAR_2->pwr_info.pwr_rx = VAR_0;
 VAR_2->pwr_info.pwr_tx = VAR_0;
 VAR_2->pwr_info.hs_rate = 0;
}
