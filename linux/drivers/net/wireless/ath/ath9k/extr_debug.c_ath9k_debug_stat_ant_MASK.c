
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct ath_antenna_stats* ant_stats; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;
struct ath_softc {TYPE_2__ debug; } ;
struct ath_hw_antcomb_conf {size_t main_lna_conf; size_t alt_lna_conf; } ;
struct ath_antenna_stats {int rssi_avg; int * lna_attempt_cnt; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;

void FUNC_0(struct ath_softc *VAR_2,
     struct ath_hw_antcomb_conf *VAR_3,
     int VAR_4, int VAR_5)
{
 struct ath_antenna_stats *VAR_6 = &VAR_2->debug.stats.ant_stats[VAR_1];
 struct ath_antenna_stats *VAR_7 = &VAR_2->debug.stats.ant_stats[VAR_0];

 VAR_6->lna_attempt_cnt[VAR_3->main_lna_conf]++;
 VAR_7->lna_attempt_cnt[VAR_3->alt_lna_conf]++;

 VAR_6->rssi_avg = VAR_4;
 VAR_7->rssi_avg = VAR_5;
}
