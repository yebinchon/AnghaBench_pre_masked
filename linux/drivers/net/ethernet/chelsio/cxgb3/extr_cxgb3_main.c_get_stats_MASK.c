
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int fifo_errors; } ;
struct port_info {TYPE_1__ phy; int mac; struct adapter* adapter; } ;
struct net_device {int dummy; } ;
struct mac_stats {int link_faults; int num_resets; int num_toggled; int rx_cong_drops; int rx_frames_1519_max; int rx_frames_1024_1518; int rx_frames_512_1023; int rx_frames_256_511; int rx_frames_128_255; int rx_frames_65_127; int rx_frames_64; int rx_fifo_ovfl; int rx_too_long; int rx_jabber; int rx_short; int rx_symbol_errs; int rx_fcs_errs; int rx_pause; int rx_bcast_frames; int rx_mcast_frames; int rx_frames; int rx_octets; int tx_frames_1519_max; int tx_frames_1024_1518; int tx_frames_512_1023; int tx_frames_256_511; int tx_frames_128_255; int tx_frames_65_127; int tx_frames_64; int tx_fifo_urun; int tx_underrun; int tx_pause; int tx_bcast_frames; int tx_mcast_frames; int tx_frames; int tx_octets; } ;
struct ethtool_stats {int dummy; } ;
struct adapter {int stats_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (struct adapter*,struct port_info*,int ) ;
 struct port_info* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct mac_stats* FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_5, struct ethtool_stats *VAR_6,
        u64 *VAR_7)
{
 struct port_info *VAR_8 = FUNC_1(VAR_5);
 struct adapter *VAR_9 = VAR_8->adapter;
 const struct mac_stats *VAR_10;

 FUNC_2(&VAR_9->stats_lock);
 VAR_10 = FUNC_4(&VAR_8->mac);
 FUNC_3(&VAR_9->stats_lock);

 *VAR_7++ = VAR_10->tx_octets;
 *VAR_7++ = VAR_10->tx_frames;
 *VAR_7++ = VAR_10->tx_mcast_frames;
 *VAR_7++ = VAR_10->tx_bcast_frames;
 *VAR_7++ = VAR_10->tx_pause;
 *VAR_7++ = VAR_10->tx_underrun;
 *VAR_7++ = VAR_10->tx_fifo_urun;

 *VAR_7++ = VAR_10->tx_frames_64;
 *VAR_7++ = VAR_10->tx_frames_65_127;
 *VAR_7++ = VAR_10->tx_frames_128_255;
 *VAR_7++ = VAR_10->tx_frames_256_511;
 *VAR_7++ = VAR_10->tx_frames_512_1023;
 *VAR_7++ = VAR_10->tx_frames_1024_1518;
 *VAR_7++ = VAR_10->tx_frames_1519_max;

 *VAR_7++ = VAR_10->rx_octets;
 *VAR_7++ = VAR_10->rx_frames;
 *VAR_7++ = VAR_10->rx_mcast_frames;
 *VAR_7++ = VAR_10->rx_bcast_frames;
 *VAR_7++ = VAR_10->rx_pause;
 *VAR_7++ = VAR_10->rx_fcs_errs;
 *VAR_7++ = VAR_10->rx_symbol_errs;
 *VAR_7++ = VAR_10->rx_short;
 *VAR_7++ = VAR_10->rx_jabber;
 *VAR_7++ = VAR_10->rx_too_long;
 *VAR_7++ = VAR_10->rx_fifo_ovfl;

 *VAR_7++ = VAR_10->rx_frames_64;
 *VAR_7++ = VAR_10->rx_frames_65_127;
 *VAR_7++ = VAR_10->rx_frames_128_255;
 *VAR_7++ = VAR_10->rx_frames_256_511;
 *VAR_7++ = VAR_10->rx_frames_512_1023;
 *VAR_7++ = VAR_10->rx_frames_1024_1518;
 *VAR_7++ = VAR_10->rx_frames_1519_max;

 *VAR_7++ = VAR_8->phy.fifo_errors;

 *VAR_7++ = FUNC_0(VAR_9, VAR_8, VAR_1);
 *VAR_7++ = FUNC_0(VAR_9, VAR_8, VAR_3);
 *VAR_7++ = FUNC_0(VAR_9, VAR_8, VAR_4);
 *VAR_7++ = FUNC_0(VAR_9, VAR_8, VAR_2);
 *VAR_7++ = FUNC_0(VAR_9, VAR_8, VAR_0);
 *VAR_7++ = 0;
 *VAR_7++ = 0;
 *VAR_7++ = 0;
 *VAR_7++ = VAR_10->rx_cong_drops;

 *VAR_7++ = VAR_10->num_toggled;
 *VAR_7++ = VAR_10->num_resets;

 *VAR_7++ = VAR_10->link_faults;
}
