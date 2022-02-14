
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device_stats {int rx_missed_errors; int multicast; int tx_bytes; int rx_bytes; scalar_t__ tx_packets; int rx_packets; scalar_t__ rx_frame_errors; scalar_t__ rx_crc_errors; scalar_t__ rx_length_errors; int tx_errors; scalar_t__ rx_errors; } ;
struct net_device {struct net_device_stats stats; } ;
struct dnet_stats {int rx_pkt_ignr; int rx_multicast; int tx_byte; int rx_byte; scalar_t__ tx_brdcast; scalar_t__ tx_multicast; scalar_t__ tx_unicast; int rx_ok_pkt; scalar_t__ rx_drib_nib; scalar_t__ rx_pre_shrink; scalar_t__ rx_crc_err; scalar_t__ rx_shrt_frm; scalar_t__ rx_lng_frm; scalar_t__ rx_len_chk_err; int tx_bad_fcs; scalar_t__ rx_unsup_opcd; } ;
struct dnet {struct dnet_stats hw_stats; } ;


 int FUNC_0 (struct dnet_stats*) ;
 int FUNC_1 (struct dnet*) ;
 struct dnet* FUNC_2 (struct net_device*) ;

__attribute__((used)) static struct net_device_stats *FUNC_3(struct net_device *VAR_0)
{

 struct dnet *VAR_1 = FUNC_2(VAR_0);
 struct net_device_stats *VAR_2 = &VAR_0->stats;
 struct dnet_stats *VAR_3 = &VAR_1->hw_stats;


 FUNC_1(VAR_1);


 VAR_2->rx_errors = (VAR_3->rx_len_chk_err +
       VAR_3->rx_lng_frm + VAR_3->rx_shrt_frm +


       VAR_3->rx_crc_err +
       VAR_3->rx_pre_shrink +
       VAR_3->rx_drib_nib + VAR_3->rx_unsup_opcd);
 VAR_2->tx_errors = VAR_3->tx_bad_fcs;
 VAR_2->rx_length_errors = (VAR_3->rx_len_chk_err +
       VAR_3->rx_lng_frm +
       VAR_3->rx_shrt_frm + VAR_3->rx_pre_shrink);
 VAR_2->rx_crc_errors = VAR_3->rx_crc_err;
 VAR_2->rx_frame_errors = VAR_3->rx_pre_shrink + VAR_3->rx_drib_nib;
 VAR_2->rx_packets = VAR_3->rx_ok_pkt;
 VAR_2->tx_packets = (VAR_3->tx_unicast +
        VAR_3->tx_multicast + VAR_3->tx_brdcast);
 VAR_2->rx_bytes = VAR_3->rx_byte;
 VAR_2->tx_bytes = VAR_3->tx_byte;
 VAR_2->multicast = VAR_3->rx_multicast;
 VAR_2->rx_missed_errors = VAR_3->rx_pkt_ignr;

 FUNC_0(VAR_3);

 return VAR_2;
}
