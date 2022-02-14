
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rtnl_link_stats64 {int rx_missed_errors; int rx_length_errors; scalar_t__ rx_errors; scalar_t__ rx_crc_errors; int multicast; int tx_dropped; int rx_dropped; int tx_errors; } ;
struct ice_eth_stats {int rx_multicast; int tx_discards; int rx_discards; int tx_errors; } ;
struct ice_vsi {scalar_t__ type; int state; struct ice_pf* back; struct ice_eth_stats eth_stats; struct rtnl_link_stats64 net_stats; } ;
struct TYPE_3__ {int rx_discards; } ;
struct TYPE_4__ {TYPE_1__ eth; int rx_len_errors; scalar_t__ illegal_bytes; scalar_t__ crc_errors; } ;
struct ice_pf {TYPE_2__ stats; int state; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ice_vsi*) ;
 int FUNC_1 (struct ice_vsi*) ;
 scalar_t__ FUNC_2 (int ,int ) ;

void FUNC_3(struct ice_vsi *VAR_3)
{
 struct rtnl_link_stats64 *VAR_4 = &VAR_3->net_stats;
 struct ice_eth_stats *VAR_5 = &VAR_3->eth_stats;
 struct ice_pf *VAR_6 = VAR_3->back;

 if (FUNC_2(VAR_2, VAR_3->state) ||
     FUNC_2(VAR_1, VAR_6->state))
  return;


 FUNC_1(VAR_3);


 FUNC_0(VAR_3);

 VAR_4->tx_errors = VAR_5->tx_errors;
 VAR_4->rx_dropped = VAR_5->rx_discards;
 VAR_4->tx_dropped = VAR_5->tx_discards;
 VAR_4->multicast = VAR_5->rx_multicast;


 if (VAR_3->type == VAR_0) {
  VAR_4->rx_crc_errors = VAR_6->stats.crc_errors;
  VAR_4->rx_errors = VAR_6->stats.crc_errors +
        VAR_6->stats.illegal_bytes;
  VAR_4->rx_length_errors = VAR_6->stats.rx_len_errors;

  VAR_4->rx_missed_errors = VAR_6->stats.eth.rx_discards;
 }
}
