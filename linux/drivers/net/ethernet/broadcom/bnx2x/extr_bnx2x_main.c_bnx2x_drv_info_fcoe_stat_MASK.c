
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


struct TYPE_16__ {int lo; int hi; } ;
struct TYPE_15__ {int lo; int hi; } ;
struct TYPE_14__ {int lo; int hi; } ;
struct xstorm_per_queue_stats {int mcast_pkts_sent; int bcast_pkts_sent; int ucast_pkts_sent; TYPE_12__ mcast_bytes_sent; TYPE_11__ bcast_bytes_sent; TYPE_10__ ucast_bytes_sent; } ;
struct TYPE_25__ {int lo; int hi; } ;
struct TYPE_24__ {int lo; int hi; } ;
struct TYPE_23__ {int lo; int hi; } ;
struct tstorm_per_queue_stats {int rcv_mcast_pkts; int rcv_bcast_pkts; int rcv_ucast_pkts; TYPE_8__ rcv_mcast_bytes; TYPE_7__ rcv_bcast_bytes; TYPE_6__ rcv_ucast_bytes; } ;
struct fcoe_stats_info {int tx_frames_lo; int tx_frames_hi; int tx_bytes_lo; int tx_bytes_hi; int rx_frames_lo; int rx_frames_hi; int rx_bytes_lo; int rx_bytes_hi; int qos_priority; scalar_t__ mac_local; } ;
struct TYPE_17__ {int fcoe_tx_pkt_cnt; int fcoe_tx_byte_cnt; } ;
struct TYPE_26__ {int fcoe_rx_pkt_cnt; int fcoe_rx_byte_cnt; } ;
struct fcoe_statistics_params {TYPE_13__ tx_stat; TYPE_9__ rx_stat0; } ;
struct bnx2x_dcbx_app_params {int * traffic_type_priority; } ;
struct TYPE_18__ {struct bnx2x_dcbx_app_params app; } ;
struct bnx2x {TYPE_5__* fw_stats_data; int fip_mac; TYPE_3__* slowpath; TYPE_1__ dcbx_port_params; } ;
struct TYPE_22__ {struct fcoe_statistics_params fcoe; TYPE_4__* queue_stats; } ;
struct TYPE_21__ {struct xstorm_per_queue_stats xstorm_queue_statistics; struct tstorm_per_queue_stats tstorm_queue_statistics; } ;
struct TYPE_19__ {struct fcoe_stats_info fcoe_stat; } ;
struct TYPE_20__ {TYPE_2__ drv_info_to_mcp; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct bnx2x*) ;
 int VAR_1 ;
 size_t FUNC_2 (struct bnx2x*) ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (struct bnx2x*) ;
 int FUNC_4 (struct bnx2x*,int ) ;
 int FUNC_5 (scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct bnx2x *VAR_5)
{
 struct bnx2x_dcbx_app_params *VAR_6 = &VAR_5->dcbx_port_params.app;
 struct fcoe_stats_info *VAR_7 =
  &VAR_5->slowpath->drv_info_to_mcp.fcoe_stat;

 if (!FUNC_1(VAR_5))
  return;

 FUNC_5(VAR_7->mac_local + VAR_4, VAR_5->fip_mac, VAR_1);

 VAR_7->qos_priority =
  VAR_6->traffic_type_priority[VAR_3];


 if (!FUNC_3(VAR_5)) {
  struct tstorm_per_queue_stats *VAR_8 =
   &VAR_5->fw_stats_data->queue_stats[FUNC_2(VAR_5)].
   tstorm_queue_statistics;

  struct xstorm_per_queue_stats *VAR_9 =
   &VAR_5->fw_stats_data->queue_stats[FUNC_2(VAR_5)].
   xstorm_queue_statistics;

  struct fcoe_statistics_params *VAR_10 =
   &VAR_5->fw_stats_data->fcoe;

  FUNC_0(VAR_7->rx_bytes_hi, VAR_2,
     VAR_7->rx_bytes_lo,
     VAR_10->rx_stat0.fcoe_rx_byte_cnt);

  FUNC_0(VAR_7->rx_bytes_hi,
     VAR_8->rcv_ucast_bytes.hi,
     VAR_7->rx_bytes_lo,
     VAR_8->rcv_ucast_bytes.lo);

  FUNC_0(VAR_7->rx_bytes_hi,
     VAR_8->rcv_bcast_bytes.hi,
     VAR_7->rx_bytes_lo,
     VAR_8->rcv_bcast_bytes.lo);

  FUNC_0(VAR_7->rx_bytes_hi,
     VAR_8->rcv_mcast_bytes.hi,
     VAR_7->rx_bytes_lo,
     VAR_8->rcv_mcast_bytes.lo);

  FUNC_0(VAR_7->rx_frames_hi, VAR_2,
     VAR_7->rx_frames_lo,
     VAR_10->rx_stat0.fcoe_rx_pkt_cnt);

  FUNC_0(VAR_7->rx_frames_hi, VAR_2,
     VAR_7->rx_frames_lo,
     VAR_8->rcv_ucast_pkts);

  FUNC_0(VAR_7->rx_frames_hi, VAR_2,
     VAR_7->rx_frames_lo,
     VAR_8->rcv_bcast_pkts);

  FUNC_0(VAR_7->rx_frames_hi, VAR_2,
     VAR_7->rx_frames_lo,
     VAR_8->rcv_mcast_pkts);

  FUNC_0(VAR_7->tx_bytes_hi, VAR_2,
     VAR_7->tx_bytes_lo,
     VAR_10->tx_stat.fcoe_tx_byte_cnt);

  FUNC_0(VAR_7->tx_bytes_hi,
     VAR_9->ucast_bytes_sent.hi,
     VAR_7->tx_bytes_lo,
     VAR_9->ucast_bytes_sent.lo);

  FUNC_0(VAR_7->tx_bytes_hi,
     VAR_9->bcast_bytes_sent.hi,
     VAR_7->tx_bytes_lo,
     VAR_9->bcast_bytes_sent.lo);

  FUNC_0(VAR_7->tx_bytes_hi,
     VAR_9->mcast_bytes_sent.hi,
     VAR_7->tx_bytes_lo,
     VAR_9->mcast_bytes_sent.lo);

  FUNC_0(VAR_7->tx_frames_hi, VAR_2,
     VAR_7->tx_frames_lo,
     VAR_10->tx_stat.fcoe_tx_pkt_cnt);

  FUNC_0(VAR_7->tx_frames_hi, VAR_2,
     VAR_7->tx_frames_lo,
     VAR_9->ucast_pkts_sent);

  FUNC_0(VAR_7->tx_frames_hi, VAR_2,
     VAR_7->tx_frames_lo,
     VAR_9->bcast_pkts_sent);

  FUNC_0(VAR_7->tx_frames_hi, VAR_2,
     VAR_7->tx_frames_lo,
     VAR_9->mcast_pkts_sent);
 }


 FUNC_4(VAR_5, VAR_0);
}
