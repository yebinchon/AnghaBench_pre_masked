
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {scalar_t__ full_duplex; scalar_t__ force_media; } ;
struct nic {int flags; scalar_t__ mac; struct net_device* netdev; scalar_t__ loopback; TYPE_2__ mii; int adaptive_ifs; } ;
struct net_device {int features; } ;
struct config {int byte_count; int rx_fifo_limit; int direct_rx_dma; int standard_tcb; int standard_stat_counter; int rx_discard_short_frames; int tx_underrun_retry; int mii_mode; int pad10; int no_source_addr_insertion; int preamble_length; int ifs; int ip_addr_hi; int pad15_1; int pad15_2; int crs_or_cdt; int fc_delay_hi; int tx_padding; int fc_priority_threshold; int pad18; int full_duplex_pin; int pad20_1; int fc_priority_location; int pad21_1; int full_duplex_force; int rx_save_bad_frames; int promiscuous_mode; int rx_crc_transfer; int multicast_all; int magic_packet_disable; int fc_disable; int mwi_enable; int rx_long_ok; int tno_intr; int rx_d102_mode; int rx_save_overruns; scalar_t__ loopback; int adaptive_ifs; } ;
struct TYPE_3__ {struct config config; } ;
struct cb {int command; TYPE_1__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct nic*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (struct config*,int ,int) ;
 int VAR_8 ;
 int FUNC_3 (struct nic*,int ,int ,struct net_device*,char*,int *) ;
 scalar_t__ FUNC_4 (struct net_device*) ;
 int VAR_9 ;
 scalar_t__ FUNC_5 (int) ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_6(struct nic *VAR_11, struct cb *VAR_12, struct sk_buff *VAR_13)
{
 struct config *VAR_14 = &VAR_12->u.config;
 u8 *VAR_15 = (u8 *)VAR_14;
 struct net_device *VAR_16 = VAR_11->netdev;

 VAR_12->command = FUNC_0(VAR_3);

 FUNC_2(VAR_14, 0, sizeof(struct config));

 VAR_14->byte_count = 0x16;
 VAR_14->rx_fifo_limit = 0x8;
 VAR_14->direct_rx_dma = 0x1;
 VAR_14->standard_tcb = 0x1;
 VAR_14->standard_stat_counter = 0x1;
 VAR_14->rx_discard_short_frames = 0x1;
 VAR_14->tx_underrun_retry = 0x3;
 if (FUNC_1(VAR_11))
  VAR_14->mii_mode = 1;
 VAR_14->pad10 = 0x6;
 VAR_14->no_source_addr_insertion = 0x1;
 VAR_14->preamble_length = 0x2;
 VAR_14->ifs = 0x6;
 VAR_14->ip_addr_hi = 0xF2;
 VAR_14->pad15_1 = 0x1;
 VAR_14->pad15_2 = 0x1;
 VAR_14->crs_or_cdt = 0x0;
 VAR_14->fc_delay_hi = 0x40;
 VAR_14->tx_padding = 0x1;
 VAR_14->fc_priority_threshold = 0x7;
 VAR_14->pad18 = 0x1;
 VAR_14->full_duplex_pin = 0x1;
 VAR_14->pad20_1 = 0x1F;
 VAR_14->fc_priority_location = 0x1;
 VAR_14->pad21_1 = 0x5;

 VAR_14->adaptive_ifs = VAR_11->adaptive_ifs;
 VAR_14->loopback = VAR_11->loopback;

 if (VAR_11->mii.force_media && VAR_11->mii.full_duplex)
  VAR_14->full_duplex_force = 0x1;

 if (VAR_11->flags & VAR_9 || VAR_11->loopback) {
  VAR_14->rx_save_bad_frames = 0x1;
  VAR_14->rx_discard_short_frames = 0x0;
  VAR_14->promiscuous_mode = 0x1;
 }

 if (FUNC_5(VAR_16->features & VAR_2))
  VAR_14->rx_crc_transfer = 0x1;

 if (VAR_11->flags & VAR_8)
  VAR_14->multicast_all = 0x1;


 if (FUNC_4(VAR_11->netdev) || !(VAR_11->flags & VAR_10))
  VAR_14->magic_packet_disable = 0x1;

 if (VAR_11->mac >= VAR_6) {
  VAR_14->fc_disable = 0x1;
  VAR_14->mwi_enable = 0x1;
  VAR_14->standard_tcb = 0x0;
  VAR_14->rx_long_ok = 0x1;
  if (VAR_11->mac >= VAR_7) {
   VAR_14->tno_intr = 0x1;

   if (VAR_11->mac >= VAR_5) {
    VAR_14->byte_count = 0x20;
    VAR_14->rx_d102_mode = 0x1;
   }
  } else {
   VAR_14->standard_stat_counter = 0x0;
  }
 }

 if (VAR_16->features & VAR_1) {
  VAR_14->rx_save_overruns = 0x1;
  VAR_14->rx_save_bad_frames = 0x1;
  VAR_14->rx_discard_short_frames = 0x0;
 }

 FUNC_3(VAR_11, VAR_4, VAR_0, VAR_11->netdev, "[00-07]=%8ph\n",
       VAR_15 + 0);
 FUNC_3(VAR_11, VAR_4, VAR_0, VAR_11->netdev, "[08-15]=%8ph\n",
       VAR_15 + 8);
 FUNC_3(VAR_11, VAR_4, VAR_0, VAR_11->netdev, "[16-23]=%8ph\n",
       VAR_15 + 16);
 return 0;
}
