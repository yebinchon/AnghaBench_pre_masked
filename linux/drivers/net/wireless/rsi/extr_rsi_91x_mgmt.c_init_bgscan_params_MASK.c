
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int two_probe; int passive_scan_duration; int active_scan_duration; scalar_t__ num_bgscan_channels; int bgscan_periodicity; int roam_threshold; int bgscan_threshold; } ;
struct rsi_common {TYPE_1__ bgscan; } ;
struct rsi_bgscan_params {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,int) ;

void FUNC_1(struct rsi_common *VAR_5)
{
 FUNC_0((u8 *)&VAR_5->bgscan, 0, sizeof(struct rsi_bgscan_params));
 VAR_5->bgscan.bgscan_threshold = VAR_2;
 VAR_5->bgscan.roam_threshold = VAR_3;
 VAR_5->bgscan.bgscan_periodicity = VAR_1;
 VAR_5->bgscan.num_bgscan_channels = 0;
 VAR_5->bgscan.two_probe = 1;
 VAR_5->bgscan.active_scan_duration = VAR_0;
 VAR_5->bgscan.passive_scan_duration = VAR_4;
}
