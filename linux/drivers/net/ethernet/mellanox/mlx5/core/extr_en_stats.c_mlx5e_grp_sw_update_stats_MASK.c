
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5e_xdpsq_stats {scalar_t__ cqes; scalar_t__ err; scalar_t__ full; scalar_t__ inlnw; scalar_t__ mpwqe; scalar_t__ xmit; scalar_t__ nops; } ;
struct mlx5e_sw_stats {int tx_cqes; int tx_tls_drop_bypass_req; int tx_tls_drop_no_sync_data; int tx_tls_skip_no_sync_data; int tx_tls_resync_bytes; int tx_tls_dump_packets; int tx_tls_dump_bytes; int tx_tls_ooo; int tx_tls_ctx; int tx_tls_encrypted_bytes; int tx_tls_encrypted_packets; int tx_csum_partial; int tx_csum_none; int tx_csum_partial_inner; int tx_xmit_more; int tx_recover; int tx_cqe_err; int tx_queue_dropped; int tx_queue_wake; int tx_queue_stopped; int tx_nop; int tx_added_vlan_packets; int tx_tso_inner_bytes; int tx_tso_inner_packets; int tx_tso_bytes; int tx_tso_packets; int tx_bytes; int tx_packets; int tx_xsk_cqes; int tx_xsk_err; int tx_xsk_full; int tx_xsk_inlnw; int tx_xsk_mpwqe; int tx_xsk_xmit; int rx_xsk_arfs_err; int rx_xsk_congst_umr; int rx_xsk_cqe_compress_pkts; int rx_xsk_cqe_compress_blks; int rx_xsk_buff_alloc_err; int rx_xsk_oversize_pkts_sw_drop; int rx_xsk_mpwqe_filler_strides; int rx_xsk_mpwqe_filler_cqes; int rx_xsk_wqe_err; int rx_xsk_xdp_redirect; int rx_xsk_xdp_drop; int rx_xsk_removed_vlan_packets; int rx_xsk_ecn_mark; int rx_xsk_csum_none; int rx_xsk_csum_unnecessary_inner; int rx_xsk_csum_unnecessary; int rx_xsk_csum_complete; int rx_xsk_bytes; int rx_xsk_packets; int tx_xdp_cqes; int tx_xdp_err; int tx_xdp_full; int tx_xdp_nops; int tx_xdp_inlnw; int tx_xdp_mpwqe; int tx_xdp_xmit; int ch_eq_rearm; int ch_force_irq; int ch_aff_change; int ch_arm; int ch_poll; int ch_events; int rx_recover; int rx_arfs_err; int rx_congst_umr; int rx_cache_waive; int rx_cache_busy; int rx_cache_empty; int rx_cache_full; int rx_cache_reuse; int rx_cqe_compress_pkts; int rx_cqe_compress_blks; int rx_buff_alloc_err; int rx_oversize_pkts_sw_drop; int rx_mpwqe_filler_strides; int rx_mpwqe_filler_cqes; int rx_wqe_err; int rx_xdp_tx_cqe; int rx_xdp_tx_err; int rx_xdp_tx_full; int rx_xdp_tx_nops; int rx_xdp_tx_inlnw; int rx_xdp_tx_mpwqe; int rx_xdp_tx_xmit; int rx_xdp_redirect; int rx_xdp_drop; int rx_csum_unnecessary_inner; int rx_csum_unnecessary; int rx_csum_complete_tail_slow; int rx_csum_complete_tail; int rx_csum_complete; int rx_csum_none; int rx_removed_vlan_packets; int rx_ecn_mark; int rx_lro_bytes; int rx_lro_packets; int rx_bytes; int rx_packets; } ;
struct mlx5e_sq_stats {scalar_t__ cqes; scalar_t__ tls_drop_bypass_req; scalar_t__ tls_drop_no_sync_data; scalar_t__ tls_skip_no_sync_data; scalar_t__ tls_resync_bytes; scalar_t__ tls_dump_packets; scalar_t__ tls_dump_bytes; scalar_t__ tls_ooo; scalar_t__ tls_ctx; scalar_t__ tls_encrypted_bytes; scalar_t__ tls_encrypted_packets; scalar_t__ csum_partial; scalar_t__ csum_none; scalar_t__ csum_partial_inner; scalar_t__ xmit_more; scalar_t__ recover; scalar_t__ cqe_err; scalar_t__ dropped; scalar_t__ wake; scalar_t__ stopped; scalar_t__ nop; scalar_t__ added_vlan_packets; scalar_t__ tso_inner_bytes; scalar_t__ tso_inner_packets; scalar_t__ tso_bytes; scalar_t__ tso_packets; scalar_t__ bytes; scalar_t__ packets; } ;
struct mlx5e_rq_stats {scalar_t__ arfs_err; scalar_t__ congst_umr; scalar_t__ cqe_compress_pkts; scalar_t__ cqe_compress_blks; scalar_t__ buff_alloc_err; scalar_t__ oversize_pkts_sw_drop; scalar_t__ mpwqe_filler_strides; scalar_t__ mpwqe_filler_cqes; scalar_t__ wqe_err; scalar_t__ xdp_redirect; scalar_t__ xdp_drop; scalar_t__ removed_vlan_packets; scalar_t__ ecn_mark; scalar_t__ csum_none; scalar_t__ csum_unnecessary_inner; scalar_t__ csum_unnecessary; scalar_t__ csum_complete; scalar_t__ bytes; scalar_t__ packets; scalar_t__ recover; scalar_t__ cache_waive; scalar_t__ cache_busy; scalar_t__ cache_empty; scalar_t__ cache_full; scalar_t__ cache_reuse; scalar_t__ csum_complete_tail_slow; scalar_t__ csum_complete_tail; scalar_t__ lro_bytes; scalar_t__ lro_packets; } ;
struct TYPE_2__ {struct mlx5e_sw_stats sw; } ;
struct mlx5e_priv {int max_nch; int max_opened_tc; struct mlx5e_channel_stats* channel_stats; TYPE_1__ stats; } ;
struct mlx5e_ch_stats {scalar_t__ eq_rearm; scalar_t__ force_irq; scalar_t__ aff_change; scalar_t__ arm; scalar_t__ poll; scalar_t__ events; } ;
struct mlx5e_channel_stats {struct mlx5e_sq_stats* sq; struct mlx5e_ch_stats ch; struct mlx5e_rq_stats rq; struct mlx5e_rq_stats xskrq; struct mlx5e_xdpsq_stats xsksq; struct mlx5e_xdpsq_stats rq_xdpsq; struct mlx5e_xdpsq_stats xdpsq; } ;


 int FUNC_0 (struct mlx5e_sw_stats*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct mlx5e_priv *VAR_0)
{
 struct mlx5e_sw_stats *VAR_1 = &VAR_0->stats.sw;
 int VAR_2;

 FUNC_0(VAR_1, 0, sizeof(*VAR_1));

 for (VAR_2 = 0; VAR_2 < VAR_0->max_nch; VAR_2++) {
  struct mlx5e_channel_stats *VAR_3 =
   &VAR_0->channel_stats[VAR_2];
  struct mlx5e_xdpsq_stats *VAR_4 = &VAR_3->xdpsq;
  struct mlx5e_xdpsq_stats *VAR_5 = &VAR_3->rq_xdpsq;
  struct mlx5e_xdpsq_stats *VAR_6 = &VAR_3->xsksq;
  struct mlx5e_rq_stats *VAR_7 = &VAR_3->xskrq;
  struct mlx5e_rq_stats *VAR_8 = &VAR_3->rq;
  struct mlx5e_ch_stats *VAR_9 = &VAR_3->ch;
  int VAR_10;

  VAR_1->rx_packets += VAR_8->packets;
  VAR_1->rx_bytes += VAR_8->bytes;
  VAR_1->rx_lro_packets += VAR_8->lro_packets;
  VAR_1->rx_lro_bytes += VAR_8->lro_bytes;
  VAR_1->rx_ecn_mark += VAR_8->ecn_mark;
  VAR_1->rx_removed_vlan_packets += VAR_8->removed_vlan_packets;
  VAR_1->rx_csum_none += VAR_8->csum_none;
  VAR_1->rx_csum_complete += VAR_8->csum_complete;
  VAR_1->rx_csum_complete_tail += VAR_8->csum_complete_tail;
  VAR_1->rx_csum_complete_tail_slow += VAR_8->csum_complete_tail_slow;
  VAR_1->rx_csum_unnecessary += VAR_8->csum_unnecessary;
  VAR_1->rx_csum_unnecessary_inner += VAR_8->csum_unnecessary_inner;
  VAR_1->rx_xdp_drop += VAR_8->xdp_drop;
  VAR_1->rx_xdp_redirect += VAR_8->xdp_redirect;
  VAR_1->rx_xdp_tx_xmit += VAR_5->xmit;
  VAR_1->rx_xdp_tx_mpwqe += VAR_5->mpwqe;
  VAR_1->rx_xdp_tx_inlnw += VAR_5->inlnw;
  VAR_1->rx_xdp_tx_nops += VAR_5->nops;
  VAR_1->rx_xdp_tx_full += VAR_5->full;
  VAR_1->rx_xdp_tx_err += VAR_5->err;
  VAR_1->rx_xdp_tx_cqe += VAR_5->cqes;
  VAR_1->rx_wqe_err += VAR_8->wqe_err;
  VAR_1->rx_mpwqe_filler_cqes += VAR_8->mpwqe_filler_cqes;
  VAR_1->rx_mpwqe_filler_strides += VAR_8->mpwqe_filler_strides;
  VAR_1->rx_oversize_pkts_sw_drop += VAR_8->oversize_pkts_sw_drop;
  VAR_1->rx_buff_alloc_err += VAR_8->buff_alloc_err;
  VAR_1->rx_cqe_compress_blks += VAR_8->cqe_compress_blks;
  VAR_1->rx_cqe_compress_pkts += VAR_8->cqe_compress_pkts;
  VAR_1->rx_cache_reuse += VAR_8->cache_reuse;
  VAR_1->rx_cache_full += VAR_8->cache_full;
  VAR_1->rx_cache_empty += VAR_8->cache_empty;
  VAR_1->rx_cache_busy += VAR_8->cache_busy;
  VAR_1->rx_cache_waive += VAR_8->cache_waive;
  VAR_1->rx_congst_umr += VAR_8->congst_umr;
  VAR_1->rx_arfs_err += VAR_8->arfs_err;
  VAR_1->rx_recover += VAR_8->recover;
  VAR_1->ch_events += VAR_9->events;
  VAR_1->ch_poll += VAR_9->poll;
  VAR_1->ch_arm += VAR_9->arm;
  VAR_1->ch_aff_change += VAR_9->aff_change;
  VAR_1->ch_force_irq += VAR_9->force_irq;
  VAR_1->ch_eq_rearm += VAR_9->eq_rearm;

  VAR_1->tx_xdp_xmit += VAR_4->xmit;
  VAR_1->tx_xdp_mpwqe += VAR_4->mpwqe;
  VAR_1->tx_xdp_inlnw += VAR_4->inlnw;
  VAR_1->tx_xdp_nops += VAR_4->nops;
  VAR_1->tx_xdp_full += VAR_4->full;
  VAR_1->tx_xdp_err += VAR_4->err;
  VAR_1->tx_xdp_cqes += VAR_4->cqes;

  VAR_1->rx_xsk_packets += VAR_7->packets;
  VAR_1->rx_xsk_bytes += VAR_7->bytes;
  VAR_1->rx_xsk_csum_complete += VAR_7->csum_complete;
  VAR_1->rx_xsk_csum_unnecessary += VAR_7->csum_unnecessary;
  VAR_1->rx_xsk_csum_unnecessary_inner += VAR_7->csum_unnecessary_inner;
  VAR_1->rx_xsk_csum_none += VAR_7->csum_none;
  VAR_1->rx_xsk_ecn_mark += VAR_7->ecn_mark;
  VAR_1->rx_xsk_removed_vlan_packets += VAR_7->removed_vlan_packets;
  VAR_1->rx_xsk_xdp_drop += VAR_7->xdp_drop;
  VAR_1->rx_xsk_xdp_redirect += VAR_7->xdp_redirect;
  VAR_1->rx_xsk_wqe_err += VAR_7->wqe_err;
  VAR_1->rx_xsk_mpwqe_filler_cqes += VAR_7->mpwqe_filler_cqes;
  VAR_1->rx_xsk_mpwqe_filler_strides += VAR_7->mpwqe_filler_strides;
  VAR_1->rx_xsk_oversize_pkts_sw_drop += VAR_7->oversize_pkts_sw_drop;
  VAR_1->rx_xsk_buff_alloc_err += VAR_7->buff_alloc_err;
  VAR_1->rx_xsk_cqe_compress_blks += VAR_7->cqe_compress_blks;
  VAR_1->rx_xsk_cqe_compress_pkts += VAR_7->cqe_compress_pkts;
  VAR_1->rx_xsk_congst_umr += VAR_7->congst_umr;
  VAR_1->rx_xsk_arfs_err += VAR_7->arfs_err;
  VAR_1->tx_xsk_xmit += VAR_6->xmit;
  VAR_1->tx_xsk_mpwqe += VAR_6->mpwqe;
  VAR_1->tx_xsk_inlnw += VAR_6->inlnw;
  VAR_1->tx_xsk_full += VAR_6->full;
  VAR_1->tx_xsk_err += VAR_6->err;
  VAR_1->tx_xsk_cqes += VAR_6->cqes;

  for (VAR_10 = 0; VAR_10 < VAR_0->max_opened_tc; VAR_10++) {
   struct mlx5e_sq_stats *VAR_11 = &VAR_3->sq[VAR_10];

   VAR_1->tx_packets += VAR_11->packets;
   VAR_1->tx_bytes += VAR_11->bytes;
   VAR_1->tx_tso_packets += VAR_11->tso_packets;
   VAR_1->tx_tso_bytes += VAR_11->tso_bytes;
   VAR_1->tx_tso_inner_packets += VAR_11->tso_inner_packets;
   VAR_1->tx_tso_inner_bytes += VAR_11->tso_inner_bytes;
   VAR_1->tx_added_vlan_packets += VAR_11->added_vlan_packets;
   VAR_1->tx_nop += VAR_11->nop;
   VAR_1->tx_queue_stopped += VAR_11->stopped;
   VAR_1->tx_queue_wake += VAR_11->wake;
   VAR_1->tx_queue_dropped += VAR_11->dropped;
   VAR_1->tx_cqe_err += VAR_11->cqe_err;
   VAR_1->tx_recover += VAR_11->recover;
   VAR_1->tx_xmit_more += VAR_11->xmit_more;
   VAR_1->tx_csum_partial_inner += VAR_11->csum_partial_inner;
   VAR_1->tx_csum_none += VAR_11->csum_none;
   VAR_1->tx_csum_partial += VAR_11->csum_partial;
   VAR_1->tx_cqes += VAR_11->cqes;
  }
 }
}
