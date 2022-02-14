
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct rtnl_link_stats64 {scalar_t__ tx_dropped; scalar_t__ rx_dropped; scalar_t__ tx_errors; scalar_t__ rx_errors; scalar_t__ tx_bytes; scalar_t__ rx_bytes; scalar_t__ tx_packets; scalar_t__ rx_packets; } ;
struct TYPE_16__ {int iq; int oq; } ;
struct TYPE_12__ {scalar_t__ fcs_err; scalar_t__ dmac_drop; scalar_t__ fifo_err; scalar_t__ ctl_rcvd; scalar_t__ runts; scalar_t__ total_mcst; scalar_t__ total_bcst; scalar_t__ bytes_rcvd; scalar_t__ total_rcvd; scalar_t__ fwd_rate; scalar_t__ fw_lro_aborts_timer; scalar_t__ fw_lro_aborts_tsval; scalar_t__ fw_lro_aborts_seq; scalar_t__ fw_lro_aborts_port; scalar_t__ fw_lro_aborts; scalar_t__ fw_total_lro; scalar_t__ fw_lro_octs; scalar_t__ fw_lro_pkts; scalar_t__ fw_rx_vxlan_err; scalar_t__ fw_rx_vxlan; scalar_t__ fw_err_drop; scalar_t__ fw_err_link; scalar_t__ fw_err_pko; scalar_t__ frame_err; scalar_t__ l2_err; scalar_t__ jabber_err; scalar_t__ fw_total_bcast; scalar_t__ fw_total_mcast; scalar_t__ fw_total_fwd; scalar_t__ fw_total_rcvd; scalar_t__ red_drops; } ;
struct TYPE_11__ {scalar_t__ runts; scalar_t__ fifo_err; scalar_t__ max_deferral_fail; scalar_t__ max_collision_fail; scalar_t__ multi_collision_sent; scalar_t__ one_collision_sent; scalar_t__ total_collisions; scalar_t__ ctl_sent; scalar_t__ bcast_pkts_sent; scalar_t__ mcast_pkts_sent; scalar_t__ total_bytes_sent; scalar_t__ total_pkts_sent; scalar_t__ fw_total_bcast_sent; scalar_t__ fw_total_mcast_sent; scalar_t__ fw_tx_vxlan; scalar_t__ fw_err_tso; scalar_t__ fw_tso_fwd; scalar_t__ fw_tso; scalar_t__ fw_err_drop; scalar_t__ fw_err_link; scalar_t__ fw_err_pki; scalar_t__ fw_err_pko; scalar_t__ fw_total_fwd; scalar_t__ fw_total_sent; } ;
struct TYPE_13__ {TYPE_3__ fromwire; TYPE_2__ fromhost; } ;
struct octeon_device {TYPE_9__** droq; TYPE_7__ io_qmask; TYPE_6__** instr_queue; TYPE_4__ link_stats; } ;
struct net_device {TYPE_1__* netdev_ops; } ;
struct lio {scalar_t__ link_changes; struct octeon_device* oct_dev; } ;
struct ethtool_stats {int dummy; } ;
struct TYPE_17__ {scalar_t__ rx_alloc_failure; scalar_t__ rx_vxlan; scalar_t__ dropped_nodispatch; scalar_t__ bytes_received; scalar_t__ pkts_received; scalar_t__ rx_dropped; scalar_t__ dropped_toomany; scalar_t__ dropped_nomem; scalar_t__ rx_bytes_received; scalar_t__ rx_pkts_received; } ;
struct TYPE_18__ {TYPE_8__ stats; } ;
struct TYPE_14__ {scalar_t__ tx_restart; scalar_t__ tx_vxlan; scalar_t__ tx_gso; scalar_t__ bytes_sent; scalar_t__ instr_dropped; scalar_t__ instr_processed; scalar_t__ instr_posted; scalar_t__ sgentry_sent; scalar_t__ tx_iq_busy; scalar_t__ tx_dropped; scalar_t__ tx_tot_bytes; scalar_t__ tx_done; } ;
struct TYPE_15__ {TYPE_5__ stats; } ;
struct TYPE_10__ {int (* ndo_get_stats64 ) (struct net_device*,struct rtnl_link_stats64*) ;} ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 struct lio* FUNC_2 (struct net_device*) ;
 int VAR_0 ;
 int FUNC_3 (struct octeon_device*) ;
 int FUNC_4 (struct octeon_device*) ;
 scalar_t__ FUNC_5 (struct lio*,int ) ;
 int FUNC_6 (struct net_device*,struct rtnl_link_stats64*) ;

__attribute__((used)) static void
FUNC_7(struct net_device *VAR_1,
        struct ethtool_stats *VAR_2 __attribute__((unused)),
        u64 *VAR_3)
{
 struct lio *VAR_4 = FUNC_2(VAR_1);
 struct octeon_device *VAR_5 = VAR_4->oct_dev;
 struct rtnl_link_stats64 VAR_6;
 int VAR_7 = 0, VAR_8;

 if (FUNC_5(VAR_4, VAR_0))
  return;

 VAR_1->netdev_ops->ndo_get_stats64(VAR_1, &VAR_6);

 VAR_3[VAR_7++] = VAR_6.rx_packets;

 VAR_3[VAR_7++] = VAR_6.tx_packets;

 VAR_3[VAR_7++] = VAR_6.rx_bytes;

 VAR_3[VAR_7++] = VAR_6.tx_bytes;
 VAR_3[VAR_7++] = VAR_6.rx_errors +
   VAR_5->link_stats.fromwire.fcs_err +
   VAR_5->link_stats.fromwire.jabber_err +
   VAR_5->link_stats.fromwire.l2_err +
   VAR_5->link_stats.fromwire.frame_err;
 VAR_3[VAR_7++] = VAR_6.tx_errors;





 VAR_3[VAR_7++] = VAR_6.rx_dropped +
   VAR_5->link_stats.fromwire.fifo_err +
   VAR_5->link_stats.fromwire.dmac_drop +
   VAR_5->link_stats.fromwire.red_drops +
   VAR_5->link_stats.fromwire.fw_err_pko +
   VAR_5->link_stats.fromwire.fw_err_link +
   VAR_5->link_stats.fromwire.fw_err_drop;

 VAR_3[VAR_7++] = VAR_6.tx_dropped +
   VAR_5->link_stats.fromhost.max_collision_fail +
   VAR_5->link_stats.fromhost.max_deferral_fail +
   VAR_5->link_stats.fromhost.total_collisions +
   VAR_5->link_stats.fromhost.fw_err_pko +
   VAR_5->link_stats.fromhost.fw_err_link +
   VAR_5->link_stats.fromhost.fw_err_drop +
   VAR_5->link_stats.fromhost.fw_err_pki;





 VAR_3[VAR_7++] = FUNC_1(VAR_5->link_stats.fromhost.fw_total_sent);

 VAR_3[VAR_7++] = FUNC_1(VAR_5->link_stats.fromhost.fw_total_fwd);

 VAR_3[VAR_7++] = FUNC_1(VAR_5->link_stats.fromhost.fw_err_pko);

 VAR_3[VAR_7++] = FUNC_1(VAR_5->link_stats.fromhost.fw_err_pki);

 VAR_3[VAR_7++] = FUNC_1(VAR_5->link_stats.fromhost.fw_err_link);



 VAR_3[VAR_7++] = FUNC_1(VAR_5->link_stats.fromhost.fw_err_drop);


 VAR_3[VAR_7++] = FUNC_1(VAR_5->link_stats.fromhost.fw_tso);



 VAR_3[VAR_7++] = FUNC_1(VAR_5->link_stats.fromhost.fw_tso_fwd);



 VAR_3[VAR_7++] = FUNC_1(VAR_5->link_stats.fromhost.fw_err_tso);



 VAR_3[VAR_7++] = FUNC_1(VAR_5->link_stats.fromhost.fw_tx_vxlan);


 VAR_3[VAR_7++] = VAR_5->link_stats.fromhost.fw_total_mcast_sent;
 VAR_3[VAR_7++] = VAR_5->link_stats.fromhost.fw_total_bcast_sent;



 VAR_3[VAR_7++] = FUNC_1(VAR_5->link_stats.fromhost.total_pkts_sent);

 VAR_3[VAR_7++] = FUNC_1(VAR_5->link_stats.fromhost.total_bytes_sent);

 VAR_3[VAR_7++] = FUNC_1(VAR_5->link_stats.fromhost.mcast_pkts_sent);

 VAR_3[VAR_7++] = FUNC_1(VAR_5->link_stats.fromhost.bcast_pkts_sent);

 VAR_3[VAR_7++] = FUNC_1(VAR_5->link_stats.fromhost.ctl_sent);

 VAR_3[VAR_7++] = FUNC_1(VAR_5->link_stats.fromhost.total_collisions);

 VAR_3[VAR_7++] = FUNC_1(VAR_5->link_stats.fromhost.one_collision_sent);

 VAR_3[VAR_7++] =
  FUNC_1(VAR_5->link_stats.fromhost.multi_collision_sent);

 VAR_3[VAR_7++] = FUNC_1(VAR_5->link_stats.fromhost.max_collision_fail);

 VAR_3[VAR_7++] = FUNC_1(VAR_5->link_stats.fromhost.max_deferral_fail);

 VAR_3[VAR_7++] = FUNC_1(VAR_5->link_stats.fromhost.fifo_err);

 VAR_3[VAR_7++] = FUNC_1(VAR_5->link_stats.fromhost.runts);





 VAR_3[VAR_7++] = FUNC_1(VAR_5->link_stats.fromwire.fw_total_rcvd);



 VAR_3[VAR_7++] = FUNC_1(VAR_5->link_stats.fromwire.fw_total_fwd);

 VAR_3[VAR_7++] = VAR_5->link_stats.fromwire.fw_total_mcast;
 VAR_3[VAR_7++] = VAR_5->link_stats.fromwire.fw_total_bcast;

 VAR_3[VAR_7++] = FUNC_1(VAR_5->link_stats.fromwire.jabber_err);

 VAR_3[VAR_7++] = FUNC_1(VAR_5->link_stats.fromwire.l2_err);

 VAR_3[VAR_7++] = FUNC_1(VAR_5->link_stats.fromwire.frame_err);



 VAR_3[VAR_7++] = FUNC_1(VAR_5->link_stats.fromwire.fw_err_pko);

 VAR_3[VAR_7++] = FUNC_1(VAR_5->link_stats.fromwire.fw_err_link);



 VAR_3[VAR_7++] = FUNC_1(VAR_5->link_stats.fromwire.fw_err_drop);




 VAR_3[VAR_7++] = FUNC_1(VAR_5->link_stats.fromwire.fw_rx_vxlan);



 VAR_3[VAR_7++] = FUNC_1(VAR_5->link_stats.fromwire.fw_rx_vxlan_err);





 VAR_3[VAR_7++] = FUNC_1(VAR_5->link_stats.fromwire.fw_lro_pkts);



 VAR_3[VAR_7++] = FUNC_1(VAR_5->link_stats.fromwire.fw_lro_octs);

 VAR_3[VAR_7++] = FUNC_1(VAR_5->link_stats.fromwire.fw_total_lro);

 VAR_3[VAR_7++] = FUNC_1(VAR_5->link_stats.fromwire.fw_lro_aborts);



 VAR_3[VAR_7++] = FUNC_1(VAR_5->link_stats.fromwire.fw_lro_aborts_port);



 VAR_3[VAR_7++] = FUNC_1(VAR_5->link_stats.fromwire.fw_lro_aborts_seq);



 VAR_3[VAR_7++] =
  FUNC_1(VAR_5->link_stats.fromwire.fw_lro_aborts_tsval);




 VAR_3[VAR_7++] =
  FUNC_1(VAR_5->link_stats.fromwire.fw_lro_aborts_timer);

 VAR_3[VAR_7++] = FUNC_1(VAR_5->link_stats.fromwire.fwd_rate);



 VAR_3[VAR_7++] = FUNC_1(VAR_5->link_stats.fromwire.total_rcvd);

 VAR_3[VAR_7++] = FUNC_1(VAR_5->link_stats.fromwire.bytes_rcvd);

 VAR_3[VAR_7++] = FUNC_1(VAR_5->link_stats.fromwire.total_bcst);

 VAR_3[VAR_7++] = FUNC_1(VAR_5->link_stats.fromwire.total_mcst);

 VAR_3[VAR_7++] = FUNC_1(VAR_5->link_stats.fromwire.runts);

 VAR_3[VAR_7++] = FUNC_1(VAR_5->link_stats.fromwire.ctl_rcvd);

 VAR_3[VAR_7++] = FUNC_1(VAR_5->link_stats.fromwire.fifo_err);

 VAR_3[VAR_7++] = FUNC_1(VAR_5->link_stats.fromwire.dmac_drop);

 VAR_3[VAR_7++] = FUNC_1(VAR_5->link_stats.fromwire.fcs_err);

 VAR_3[VAR_7++] = FUNC_1(VAR_4->link_changes);

 for (VAR_8 = 0; VAR_8 < FUNC_3(VAR_5); VAR_8++) {
  if (!(VAR_5->io_qmask.iq & FUNC_0(VAR_8)))
   continue;


  VAR_3[VAR_7++] = FUNC_1(VAR_5->instr_queue[VAR_8]->stats.tx_done);

  VAR_3[VAR_7++] =
   FUNC_1(VAR_5->instr_queue[VAR_8]->stats.tx_tot_bytes);

  VAR_3[VAR_7++] =
   FUNC_1(VAR_5->instr_queue[VAR_8]->stats.tx_dropped);

  VAR_3[VAR_7++] =
   FUNC_1(VAR_5->instr_queue[VAR_8]->stats.tx_iq_busy);

  VAR_3[VAR_7++] =
   FUNC_1(VAR_5->instr_queue[VAR_8]->stats.sgentry_sent);



  VAR_3[VAR_7++] =
   FUNC_1(VAR_5->instr_queue[VAR_8]->stats.instr_posted);

  VAR_3[VAR_7++] = FUNC_1(
    VAR_5->instr_queue[VAR_8]->stats.instr_processed);

  VAR_3[VAR_7++] = FUNC_1(
    VAR_5->instr_queue[VAR_8]->stats.instr_dropped);

  VAR_3[VAR_7++] =
   FUNC_1(VAR_5->instr_queue[VAR_8]->stats.bytes_sent);


  VAR_3[VAR_7++] = FUNC_1(VAR_5->instr_queue[VAR_8]->stats.tx_gso);

  VAR_3[VAR_7++] = FUNC_1(VAR_5->instr_queue[VAR_8]->stats.tx_vxlan);

  VAR_3[VAR_7++] =
   FUNC_1(VAR_5->instr_queue[VAR_8]->stats.tx_restart);
 }


 for (VAR_8 = 0; VAR_8 < FUNC_4(VAR_5); VAR_8++) {
  if (!(VAR_5->io_qmask.oq & FUNC_0(VAR_8)))
   continue;



  VAR_3[VAR_7++] =
   FUNC_1(VAR_5->droq[VAR_8]->stats.rx_pkts_received);

  VAR_3[VAR_7++] =
   FUNC_1(VAR_5->droq[VAR_8]->stats.rx_bytes_received);

  VAR_3[VAR_7++] = FUNC_1(VAR_5->droq[VAR_8]->stats.dropped_nomem +
           VAR_5->droq[VAR_8]->stats.dropped_toomany +
           VAR_5->droq[VAR_8]->stats.rx_dropped);
  VAR_3[VAR_7++] =
   FUNC_1(VAR_5->droq[VAR_8]->stats.dropped_nomem);
  VAR_3[VAR_7++] =
   FUNC_1(VAR_5->droq[VAR_8]->stats.dropped_toomany);
  VAR_3[VAR_7++] =
   FUNC_1(VAR_5->droq[VAR_8]->stats.rx_dropped);


  VAR_3[VAR_7++] =
   FUNC_1(VAR_5->droq[VAR_8]->stats.pkts_received);
  VAR_3[VAR_7++] =
   FUNC_1(VAR_5->droq[VAR_8]->stats.bytes_received);
  VAR_3[VAR_7++] =
   FUNC_1(VAR_5->droq[VAR_8]->stats.dropped_nodispatch);

  VAR_3[VAR_7++] =
   FUNC_1(VAR_5->droq[VAR_8]->stats.rx_vxlan);
  VAR_3[VAR_7++] =
   FUNC_1(VAR_5->droq[VAR_8]->stats.rx_alloc_failure);
 }
}
