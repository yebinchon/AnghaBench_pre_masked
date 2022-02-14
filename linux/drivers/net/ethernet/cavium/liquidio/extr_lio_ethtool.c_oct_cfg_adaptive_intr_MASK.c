
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oct_intrmod_cfg {int tx_mincnt_trigger; int tx_maxcnt_trigger; scalar_t__ tx_enable; int rx_mincnt_trigger; int rx_mintmr_trigger; int rx_maxtmr_trigger; int rx_maxcnt_trigger; scalar_t__ rx_enable; int minpkt_ratethr; int maxpkt_ratethr; int check_intrvl; } ;
struct lio {int dummy; } ;
struct ethtool_coalesce {int tx_max_coalesced_frames_low; int tx_max_coalesced_frames_high; int rx_max_coalesced_frames_low; int rx_coalesce_usecs_low; int rx_coalesce_usecs_high; int rx_max_coalesced_frames_high; int pkt_rate_low; int pkt_rate_high; int rate_sample_interval; } ;


 int FUNC_0 (struct lio*,struct oct_intrmod_cfg*) ;

__attribute__((used)) static int FUNC_1(struct lio *VAR_0,
     struct oct_intrmod_cfg *VAR_1,
     struct ethtool_coalesce *VAR_2)
{
 int VAR_3 = 0;

 if (VAR_1->rx_enable || VAR_1->tx_enable) {
  VAR_1->check_intrvl = VAR_2->rate_sample_interval;
  VAR_1->maxpkt_ratethr = VAR_2->pkt_rate_high;
  VAR_1->minpkt_ratethr = VAR_2->pkt_rate_low;
 }
 if (VAR_1->rx_enable) {
  VAR_1->rx_maxcnt_trigger =
   VAR_2->rx_max_coalesced_frames_high;
  VAR_1->rx_maxtmr_trigger =
   VAR_2->rx_coalesce_usecs_high;
  VAR_1->rx_mintmr_trigger =
   VAR_2->rx_coalesce_usecs_low;
  VAR_1->rx_mincnt_trigger =
   VAR_2->rx_max_coalesced_frames_low;
 }
 if (VAR_1->tx_enable) {
  VAR_1->tx_maxcnt_trigger =
   VAR_2->tx_max_coalesced_frames_high;
  VAR_1->tx_mincnt_trigger =
   VAR_2->tx_max_coalesced_frames_low;
 }

 VAR_3 = FUNC_0(VAR_0, VAR_1);

 return VAR_3;
}
