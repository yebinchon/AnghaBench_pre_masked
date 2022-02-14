
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_13__ ;
typedef struct TYPE_16__ TYPE_12__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


typedef scalar_t__ u64 ;
struct rtnl_link_stats64 {scalar_t__ tx_dropped; scalar_t__ rx_dropped; scalar_t__ tx_errors; scalar_t__ rx_errors; scalar_t__ tx_bytes; scalar_t__ rx_bytes; scalar_t__ tx_packets; scalar_t__ rx_packets; } ;
struct TYPE_24__ {scalar_t__ fw_total_bcast_sent; scalar_t__ fw_total_mcast_sent; scalar_t__ fw_err_drop; } ;
struct TYPE_23__ {scalar_t__ fw_total_bcast; scalar_t__ fw_total_mcast; } ;
struct TYPE_25__ {TYPE_7__ fromhost; TYPE_6__ fromwire; } ;
struct octeon_device {int num_iqs; int num_oqs; TYPE_4__** droq; TYPE_12__** instr_queue; TYPE_8__ link_stats; } ;
struct net_device {TYPE_5__* netdev_ops; } ;
struct TYPE_15__ {TYPE_2__* rxpciq; TYPE_10__* txpciq; } ;
struct lio {TYPE_11__ linfo; scalar_t__ link_changes; struct octeon_device* oct_dev; } ;
struct ethtool_stats {int dummy; } ;
struct TYPE_26__ {int q_no; } ;
struct TYPE_22__ {int (* ndo_get_stats64 ) (struct net_device*,struct rtnl_link_stats64*) ;} ;
struct TYPE_20__ {scalar_t__ rx_alloc_failure; scalar_t__ rx_vxlan; scalar_t__ dropped_nodispatch; scalar_t__ bytes_received; scalar_t__ pkts_received; scalar_t__ rx_dropped; scalar_t__ dropped_toomany; scalar_t__ dropped_nomem; scalar_t__ rx_bytes_received; scalar_t__ rx_pkts_received; } ;
struct TYPE_21__ {TYPE_3__ stats; } ;
struct TYPE_18__ {int q_no; } ;
struct TYPE_19__ {TYPE_1__ s; } ;
struct TYPE_17__ {scalar_t__ tx_restart; scalar_t__ tx_vxlan; scalar_t__ tx_gso; scalar_t__ bytes_sent; scalar_t__ instr_dropped; scalar_t__ instr_processed; scalar_t__ instr_posted; scalar_t__ sgentry_sent; scalar_t__ tx_iq_busy; scalar_t__ tx_dropped; scalar_t__ tx_tot_bytes; scalar_t__ tx_done; } ;
struct TYPE_16__ {TYPE_13__ stats; } ;
struct TYPE_14__ {TYPE_9__ s; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 struct lio* FUNC_1 (struct net_device*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct lio*,int ) ;
 int FUNC_3 (struct net_device*,struct rtnl_link_stats64*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_1,
         struct ethtool_stats *VAR_2
         __attribute__((unused)),
         u64 *VAR_3)
{
 struct rtnl_link_stats64 VAR_4;
 struct lio *VAR_5 = FUNC_1(VAR_1);
 struct octeon_device *VAR_6 = VAR_5->oct_dev;
 int VAR_7 = 0, VAR_8, VAR_9;

 if (FUNC_2(VAR_5, VAR_0))
  return;

 VAR_1->netdev_ops->ndo_get_stats64(VAR_1, &VAR_4);

 VAR_3[VAR_7++] = VAR_4.rx_packets;

 VAR_3[VAR_7++] = VAR_4.tx_packets;

 VAR_3[VAR_7++] = VAR_4.rx_bytes;

 VAR_3[VAR_7++] = VAR_4.tx_bytes;
 VAR_3[VAR_7++] = VAR_4.rx_errors;
 VAR_3[VAR_7++] = VAR_4.tx_errors;





 VAR_3[VAR_7++] = VAR_4.rx_dropped;

 VAR_3[VAR_7++] = VAR_4.tx_dropped +
  VAR_6->link_stats.fromhost.fw_err_drop;

 VAR_3[VAR_7++] = VAR_6->link_stats.fromwire.fw_total_mcast;
 VAR_3[VAR_7++] = VAR_6->link_stats.fromhost.fw_total_mcast_sent;
 VAR_3[VAR_7++] = VAR_6->link_stats.fromwire.fw_total_bcast;
 VAR_3[VAR_7++] = VAR_6->link_stats.fromhost.fw_total_bcast_sent;


 VAR_3[VAR_7++] = FUNC_0(VAR_5->link_changes);

 for (VAR_9 = 0; VAR_9 < VAR_6->num_iqs; VAR_9++) {
  VAR_8 = VAR_5->linfo.txpciq[VAR_9].s.q_no;



  VAR_3[VAR_7++] = FUNC_0(VAR_6->instr_queue[VAR_8]->stats.tx_done);

  VAR_3[VAR_7++] = FUNC_0(
    VAR_6->instr_queue[VAR_8]->stats.tx_tot_bytes);

  VAR_3[VAR_7++] = FUNC_0(
    VAR_6->instr_queue[VAR_8]->stats.tx_dropped);

  VAR_3[VAR_7++] = FUNC_0(
    VAR_6->instr_queue[VAR_8]->stats.tx_iq_busy);

  VAR_3[VAR_7++] = FUNC_0(
    VAR_6->instr_queue[VAR_8]->stats.sgentry_sent);



  VAR_3[VAR_7++] = FUNC_0(
    VAR_6->instr_queue[VAR_8]->stats.instr_posted);

  VAR_3[VAR_7++] =
      FUNC_0(VAR_6->instr_queue[VAR_8]->stats.instr_processed);

  VAR_3[VAR_7++] =
      FUNC_0(VAR_6->instr_queue[VAR_8]->stats.instr_dropped);

  VAR_3[VAR_7++] = FUNC_0(
    VAR_6->instr_queue[VAR_8]->stats.bytes_sent);

  VAR_3[VAR_7++] = FUNC_0(VAR_6->instr_queue[VAR_8]->stats.tx_gso);

  VAR_3[VAR_7++] = FUNC_0(VAR_6->instr_queue[VAR_8]->stats.tx_vxlan);

  VAR_3[VAR_7++] = FUNC_0(
    VAR_6->instr_queue[VAR_8]->stats.tx_restart);
 }


 for (VAR_9 = 0; VAR_9 < VAR_6->num_oqs; VAR_9++) {
  VAR_8 = VAR_5->linfo.rxpciq[VAR_9].s.q_no;



  VAR_3[VAR_7++] = FUNC_0(
    VAR_6->droq[VAR_8]->stats.rx_pkts_received);

  VAR_3[VAR_7++] = FUNC_0(
    VAR_6->droq[VAR_8]->stats.rx_bytes_received);
  VAR_3[VAR_7++] = FUNC_0(VAR_6->droq[VAR_8]->stats.dropped_nomem +
           VAR_6->droq[VAR_8]->stats.dropped_toomany +
           VAR_6->droq[VAR_8]->stats.rx_dropped);
  VAR_3[VAR_7++] = FUNC_0(VAR_6->droq[VAR_8]->stats.dropped_nomem);
  VAR_3[VAR_7++] = FUNC_0(VAR_6->droq[VAR_8]->stats.dropped_toomany);
  VAR_3[VAR_7++] = FUNC_0(VAR_6->droq[VAR_8]->stats.rx_dropped);


  VAR_3[VAR_7++] = FUNC_0(VAR_6->droq[VAR_8]->stats.pkts_received);
  VAR_3[VAR_7++] = FUNC_0(VAR_6->droq[VAR_8]->stats.bytes_received);
  VAR_3[VAR_7++] =
   FUNC_0(VAR_6->droq[VAR_8]->stats.dropped_nodispatch);

  VAR_3[VAR_7++] = FUNC_0(VAR_6->droq[VAR_8]->stats.rx_vxlan);
  VAR_3[VAR_7++] =
      FUNC_0(VAR_6->droq[VAR_8]->stats.rx_alloc_failure);
 }
}
