
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct octeon_instr_queue {int fill_threshold; } ;
struct octeon_device {int chip_id; struct octeon_instr_queue** instr_queue; scalar_t__ chip; int tx_max_coalesced_frames; int rx_max_coalesced_frames; int rx_coalesce_usecs; } ;
struct octeon_cn6xxx {int conf; } ;
struct oct_intrmod_cfg {int tx_mincnt_trigger; int tx_maxcnt_trigger; scalar_t__ tx_enable; int rx_mincnt_trigger; int rx_mintmr_trigger; int rx_maxtmr_trigger; int rx_maxcnt_trigger; int minpkt_ratethr; int maxpkt_ratethr; int check_intrvl; scalar_t__ rx_enable; } ;
struct net_device {int dummy; } ;
struct TYPE_6__ {TYPE_2__* txpciq; } ;
struct lio {int netdev; TYPE_3__ linfo; struct octeon_device* oct_dev; } ;
struct ethtool_coalesce {int tx_max_coalesced_frames_low; int tx_max_coalesced_frames_high; scalar_t__ use_adaptive_tx_coalesce; int rx_max_coalesced_frames_low; int rx_coalesce_usecs_low; int rx_coalesce_usecs_high; int rx_max_coalesced_frames_high; int pkt_rate_low; int pkt_rate_high; int rate_sample_interval; scalar_t__ use_adaptive_rx_coalesce; int tx_max_coalesced_frames; int rx_max_coalesced_frames; int rx_coalesce_usecs; } ;
struct TYPE_4__ {size_t q_no; } ;
struct TYPE_5__ {TYPE_1__ s; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct lio* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct octeon_device*) ;

 scalar_t__ FUNC_4 (struct octeon_device*) ;



 int VAR_2 ;
 int FUNC_5 (struct lio*,int ,int ,char*) ;
 scalar_t__ FUNC_6 (struct lio*,struct oct_intrmod_cfg*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_3,
     struct ethtool_coalesce *VAR_4)
{
 struct lio *VAR_5 = FUNC_2(VAR_3);
 struct octeon_device *VAR_6 = VAR_5->oct_dev;
 struct octeon_instr_queue *VAR_7;
 struct oct_intrmod_cfg VAR_8;

 if (FUNC_6(VAR_5, &VAR_8))
  return -VAR_1;

 switch (VAR_6->chip_id) {
 case 131:
 case 130: {
  if (!VAR_8.rx_enable) {
   VAR_4->rx_coalesce_usecs = VAR_6->rx_coalesce_usecs;
   VAR_4->rx_max_coalesced_frames =
    VAR_6->rx_max_coalesced_frames;
  }
  if (!VAR_8.tx_enable)
   VAR_4->tx_max_coalesced_frames =
    VAR_6->tx_max_coalesced_frames;
  break;
 }
 case 128:
 case 129: {
  struct octeon_cn6xxx *VAR_9 =
   (struct octeon_cn6xxx *)VAR_6->chip;

  if (!VAR_8.rx_enable) {
   VAR_4->rx_coalesce_usecs =
    FUNC_1(VAR_9->conf);
   VAR_4->rx_max_coalesced_frames =
    FUNC_0(VAR_9->conf);
  }
  VAR_7 = VAR_6->instr_queue[VAR_5->linfo.txpciq[0].s.q_no];
  VAR_4->tx_max_coalesced_frames = VAR_7->fill_threshold;
  break;
 }
 default:
  FUNC_5(VAR_5, VAR_2, VAR_5->netdev, "Unknown Chip !!\n");
  return -VAR_0;
 }
 if (VAR_8.rx_enable) {
  VAR_4->use_adaptive_rx_coalesce =
   VAR_8.rx_enable;
  VAR_4->rate_sample_interval =
   VAR_8.check_intrvl;
  VAR_4->pkt_rate_high =
   VAR_8.maxpkt_ratethr;
  VAR_4->pkt_rate_low =
   VAR_8.minpkt_ratethr;
  VAR_4->rx_max_coalesced_frames_high =
   VAR_8.rx_maxcnt_trigger;
  VAR_4->rx_coalesce_usecs_high =
   VAR_8.rx_maxtmr_trigger;
  VAR_4->rx_coalesce_usecs_low =
   VAR_8.rx_mintmr_trigger;
  VAR_4->rx_max_coalesced_frames_low =
   VAR_8.rx_mincnt_trigger;
 }
 if ((FUNC_3(VAR_6) || FUNC_4(VAR_6)) &&
     (VAR_8.tx_enable)) {
  VAR_4->use_adaptive_tx_coalesce =
   VAR_8.tx_enable;
  VAR_4->tx_max_coalesced_frames_high =
   VAR_8.tx_maxcnt_trigger;
  VAR_4->tx_max_coalesced_frames_low =
   VAR_8.tx_mincnt_trigger;
 }
 return 0;
}
