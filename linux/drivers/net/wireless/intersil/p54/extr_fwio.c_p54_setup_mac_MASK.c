
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {int dummy; } ;
struct TYPE_8__ {void* osc_start_delay; void* lpf_bandwidth; void* ref_clock; scalar_t__ rx_ed_threshold; scalar_t__ rx_rssi_threshold; scalar_t__ mcast_window; scalar_t__ sbss_offset; void* basic_rate_mask; void* truncate; void* timer; void* rxhw; void* max_rx; void* rx_addr; } ;
struct TYPE_7__ {void* unalloc0; void* wakeup_timer; void* rxhw; void* max_rx; void* rx_addr; int rts_rates; void* basic_rate_mask; } ;
struct p54_setup_mac {int rx_antenna; TYPE_4__ v2; TYPE_3__ v1; scalar_t__ rx_align; int bssid; int mac_addr; void* mac_mode; } ;
struct p54_common {int mode; int filter_flags; int rx_diversity_mask; int fw_var; int basic_rate_mask; int rx_end; int rx_mtu; int rxhw; int wakeup_timer; int phy_idle; int bssid; int mac_addr; TYPE_2__* hw; } ;
struct TYPE_5__ {int flags; } ;
struct TYPE_6__ {TYPE_1__ conf; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int) ;
 struct sk_buff* FUNC_4 (struct p54_common*,int ,int,int ,int ) ;
 int FUNC_5 (struct p54_common*,struct sk_buff*) ;
 struct p54_setup_mac* FUNC_6 (struct sk_buff*,int) ;

int FUNC_7(struct p54_common *VAR_13)
{
 struct sk_buff *VAR_14;
 struct p54_setup_mac *VAR_15;
 u16 VAR_16;

 VAR_14 = FUNC_4(VAR_13, VAR_12, sizeof(*VAR_15),
       VAR_5, VAR_3);
 if (!VAR_14)
  return -VAR_0;

 VAR_15 = FUNC_6(VAR_14, sizeof(*VAR_15));
 if (!(VAR_13->hw->conf.flags & VAR_4)) {
  switch (VAR_13->mode) {
  case 128:
   VAR_16 = VAR_10;
   break;
  case 131:
   VAR_16 = VAR_6;
   break;
  case 132:
  case 130:
   VAR_16 = VAR_8;
   break;
  case 129:
   VAR_16 = VAR_9;
   break;
  default:
   VAR_16 = VAR_7;
   break;
  }





  if (VAR_13->filter_flags & VAR_2 &&
      (VAR_16 != VAR_9))
   VAR_16 |= VAR_11;
 } else {
  VAR_16 = VAR_7;
 }

 VAR_15->mac_mode = FUNC_0(VAR_16);
 FUNC_2(VAR_15->mac_addr, VAR_13->mac_addr, VAR_1);
 FUNC_2(VAR_15->bssid, VAR_13->bssid, VAR_1);
 VAR_15->rx_antenna = 2 & VAR_13->rx_diversity_mask;
 VAR_15->rx_align = 0;
 if (VAR_13->fw_var < 0x500) {
  VAR_15->v1.basic_rate_mask = FUNC_1(VAR_13->basic_rate_mask);
  FUNC_3(VAR_15->v1.rts_rates, 0, 8);
  VAR_15->v1.rx_addr = FUNC_1(VAR_13->rx_end);
  VAR_15->v1.max_rx = FUNC_0(VAR_13->rx_mtu);
  VAR_15->v1.rxhw = FUNC_0(VAR_13->rxhw);
  VAR_15->v1.wakeup_timer = FUNC_0(VAR_13->wakeup_timer);
  VAR_15->v1.unalloc0 = FUNC_0(0);
 } else {
  VAR_15->v2.rx_addr = FUNC_1(VAR_13->rx_end);
  VAR_15->v2.max_rx = FUNC_0(VAR_13->rx_mtu);
  VAR_15->v2.rxhw = FUNC_0(VAR_13->rxhw);
  VAR_15->v2.timer = FUNC_0(VAR_13->wakeup_timer);
  VAR_15->v2.truncate = FUNC_0(48896);
  VAR_15->v2.basic_rate_mask = FUNC_1(VAR_13->basic_rate_mask);
  VAR_15->v2.sbss_offset = 0;
  VAR_15->v2.mcast_window = 0;
  VAR_15->v2.rx_rssi_threshold = 0;
  VAR_15->v2.rx_ed_threshold = 0;
  VAR_15->v2.ref_clock = FUNC_1(644245094);
  VAR_15->v2.lpf_bandwidth = FUNC_0(65535);
  VAR_15->v2.osc_start_delay = FUNC_0(65535);
 }
 FUNC_5(VAR_13, VAR_14);
 VAR_13->phy_idle = VAR_16 == VAR_7;
 return 0;
}
